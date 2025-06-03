#include <iostream>
#include <sstream>
#include <string>

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    FlightBooking();
    void printStatus();
    bool reserveSeats(int number_ob_seats);
    bool canceReservations(int number_ob_seats);
    int getId();
private:
    int id;
    int capacity;
    int reserved;
};

FlightBooking::FlightBooking()
{
    id = 0;
    capacity = 0;
    reserved = 0;
}

FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
    this->id = id;
    this->capacity = capacity;
    if (reserved < 0) {
        std::cout << "The number of reservations is below the limit, the number of registrations will be changed to the minimum possible" << std::endl;
        this->reserved = 0;
    } else if (reserved <= capacity * 1.05) {
        this->reserved = reserved;
    } else {
        std::cout << "The reservation limit has been exceeded, the number of registrations will be changed to the maximum possible" << std::endl;
        this->reserved = capacity * 105 / 100;
    }
}

void FlightBooking::printStatus()
{
    if (reserved <= capacity * 1.05) {
        std::cout << "Flight " << id << " : " << reserved << "/" << capacity << " (" << reserved * 100 / capacity << " %) seats taken" << std::endl;
    }
}

bool FlightBooking::reserveSeats(int number_ob_seats)
{
    if ((reserved + number_ob_seats) <= capacity * 1.05) {
        reserved = reserved + number_ob_seats;
        return true;
    }
    std::cout << "Cannot perform this operation" << std::endl;
    return false;
}

bool FlightBooking::canceReservations(int number_ob_seats)
{
    if ((reserved - number_ob_seats) >= 0) {
        reserved = reserved - number_ob_seats;
        return true;
    }
    std::cout << "Cannot perform this operation" << std::endl;
    return false;
}

int FlightBooking::getId()
{
    return id;
}

int main()
{
    FlightBooking bookings[10];
    std::string command = "";

    while (command != "quit") {
        std::cout << "What would you like to do?: " << std::endl;
        std::getline(std::cin, command);

        std::stringstream ss(command);
        std::string action;
        int id = 0;
        int value = 0;
        ss >> action >> id >> value;

        if (action == "create") {
            bool exists = false;
            for (int i = 0; i < 10; ++i) {
                if (bookings[i].getId() == id) {
                    exists = true;
                    break;
                }
            }
            if (exists) {
                std::cout << "Cannot perform this operation: Flight with ID already exists" << std::endl;
                continue;
            }
            bool created = false;
            for (int i = 0; i < 10; ++i) {
                if (bookings[i].getId() == 0) {
                    bookings[i] = FlightBooking(id, value, 0);
                    created = true;
                    break;
                }
            }
            if (!created) {
                std::cout << "Cannot perform this operation: Flight list full" << std::endl;
            }
        } else if (action == "delete") {
            bool deleted = false;
            for (int i = 0; i < 10; ++i) {
                if (bookings[i].getId() == id) {
                    bookings[i] = FlightBooking();
                    deleted = true;
                    break;
                }
            }
            if (!deleted) {
                std::cout << "Cannot perform this operation: Flight not found" << std::endl;
            }
        } else if (action == "add") {
            bool found = false;
            for (int i = 0; i < 10; ++i) {
                if (bookings[i].getId() == id) {
                    bookings[i].reserveSeats(value);
                    found = true;
                    break;
                }
            }
            if (!found) {
                std::cout << "Cannot perform this operation: Flight not found" << std::endl;
            }
        } else if (action == "cancel") {
            bool found = false;
            for (int i = 0; i < 10; ++i) {
                if (bookings[i].getId() == id) {
                    bookings[i].canceReservations(value);
                    found = true;
                    break;
                }
            }
            if (!found) {
                std::cout << "Cannot perform this operation: Flight not found" << std::endl;
            }
        } else if (command != "quit") {
            std::cout << "Cannot perform this operation" << std::endl;
        }

        for (int i = 0; i < 10; ++i) {
            if (bookings[i].getId() != 0) {
                bookings[i].printStatus();
            }
        }
    }

    return 0;
}