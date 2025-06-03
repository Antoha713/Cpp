#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class IPAddress {
public:
    IPAddress(string address);
    virtual void print();
    string getIp();
private:
    string address;
};

IPAddress::IPAddress(string address) {
    this->address = address;
}

void IPAddress::print() {
    cout << address << endl;
}

string IPAddress::getIp() {
    return address;
}

class IPAddressChecked : public IPAddress {
public:
    IPAddressChecked(string address);
    void print() override;
private:
    bool isCorrect;
    bool validate(string addr);

};

IPAddressChecked::IPAddressChecked(string address) : IPAddress(address) {
    isCorrect = validate(address);
}


bool IPAddressChecked::validate(string ip) {
    int count = 0;
    string part = " ";
    std::stringstream ss(ip);
    while (getline(ss, part, '.')) {
        if (part.empty()) return false;
        for (char c : part) {
            if (!isdigit(c)) return false;
        }
        int num = stoi(part);
        if (num < 0 || num > 255) {
            return false;
        }
        count++;
    }
    if (count != 4) {
        return false;
    }
    return true;
}

void IPAddressChecked::print() {
    cout << getIp() << " - " << (isCorrect ? "Correct" : "Not Correct") << endl;
}


int main() {
    string input1, input2, input3;
    getline(cin, input1);
    getline(cin, input2);
    getline(cin, input3);

    IPAddress ip1(input1);
    IPAddressChecked ip2(input2);
    IPAddressChecked ip3(input3);

    ip1.print();
    ip2.print();
    ip3.print();

    return 0;
}
