#include <iostream>

class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
    bool reserveSeats(int number_ob_seats);
    bool canceReservations(int number_ob_seats);
private:
    int id;
    int capacity;
    int reserved;
};

void FlightBooking::printStatus()
{
        if(reserved <= capacity*1.05) {
            std::cout << "Flight " << id << " : " << reserved << "/" << capacity << " (" << reserved*100/capacity << " %) " << "seats taken" << std::endl;
        }
}

FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
    this->id = id;
    this->capacity = capacity;
    if(reserved < capacity*1.05 && reserved>0) {
        this->reserved = reserved;
    } else if (reserved < 0) {
        std::cout << "The number of reservations is below the limit, the number of registrations will be changed to the minimum possible" << std::endl;
        this->reserved = 0;
    }else{
        std::cout << "The reservation limit has been exceeded, the number of registrations will be changed to the maximum possible" << std::endl;
        this->reserved = capacity*105/100;
    }
}

bool FlightBooking::reserveSeats(int number_ob_seats)
{
    if((reserved + number_ob_seats) < capacity*1.05 && reserved>0) {
        reserved = reserved+number_ob_seats;
        return true;
    }
    std::cout << "Cannot perform this operation" << std::endl;
    return false;
}

bool FlightBooking::canceReservations(int number_ob_seats)
{
    if((reserved - number_ob_seats) < capacity*1.05 && reserved>0) {
        reserved = reserved-number_ob_seats;
        return true;
    }
    std::cout << "Cannot perform this operation" << std::endl;
    return false;

}

int main() {
    int reserved = 0,
    capacity = 0;
    std::cout << "Provide flight capacity: ";
    std::cin >> capacity;
    std::cout << "Provide number of reserved seats: ";
    std::cin >> reserved;
    std::cin.ignore();
    FlightBooking booking(1, capacity, reserved);
    std::string command = "";
    while (command != "quit")
    {
        booking.printStatus();
        std::cout << "What would you like to do?: " << std::endl;
        std::getline(std::cin, command);

        if (command.substr(0, 3) == "add" && command.length() > 4) {
            booking.reserveSeats(std::stoi(command.substr(4)));
        } else if (command.substr(0, 6) == "cancel" && command.length() > 7) {
            booking.canceReservations(std::stoi(command.substr(7)));
        } else if (command != "quit") {
            std::cout << "Cannot perform this operation" << std::endl;
        }

    }
    return 0;
}