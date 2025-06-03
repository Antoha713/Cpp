#include <iostream>
class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    void printStatus();
private:
    int id;
    int capacity;
    int reserved;
};
void FlightBooking::printStatus()
{
    std::cout << "Flight " << id << " : " << reserved << "/" << capacity << " (" << (double)reserved*100/capacity << " %) " << "seats taken";
}
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
    this->id = id;
    this->capacity = capacity;
    this->reserved = reserved;
}
int main() {
    int reserved = 0,
    capacity = 0;
    std::cout << "Provide flight capacity: ";
    std::cin >> capacity;
    std::cout << "Provide number of reserved seats: ";
    std::cin >> reserved;
    FlightBooking booking(1, capacity, reserved);
    booking.printStatus();
    return 0;
}