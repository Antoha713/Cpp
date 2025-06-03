#include <iostream>
#include <string>
using namespace std;

class AdHocSquare
{
public:
    AdHocSquare(double side);
    void set_side(double side);
    double get_area();
private:
    double side;
};

class LazySquare
{
public:
    LazySquare(double side);
    void set_side(double side);
    double get_area();
private:
    double side;
    double area;
    bool side_changed;
};

AdHocSquare::AdHocSquare(double side) {
    set_side(side);
}

void AdHocSquare::set_side(double side) {
    if(side>=0) {
        this->side = side;
    } else {
        cout << "size < 0, changes were not saved" << endl;
    }
}

double AdHocSquare::get_area() {
    return side * side;
}

LazySquare::LazySquare(double side) {
    set_side(side);
}

void LazySquare::set_side(double side) {
    if(side>=0) {
        this->side = side;
        this->side_changed = true;
    } else {
        cout << "size < 0, changes were not saved" << endl;
    }
}

double LazySquare::get_area() {
    if(side_changed) {
        area = side * side;
        side_changed = false;
    }
    return area;
}

int main() {
    AdHocSquare s1(4.0);
    cout << s1.get_area() << endl;
    s1.set_side(-2.0);
    cout << s1.get_area() << endl;
    s1.set_side(2.0);
    cout << s1.get_area() << endl;
    cout << "lazy:" << endl;
    LazySquare s2(4.0);
    cout << s2.get_area() << endl;
    s2.set_side(-2.0);
    cout << s2.get_area() << endl;
    s2.set_side(2.0);
    cout << s2.get_area() << endl;
    s2.set_side(36.0);
    cout << s2.get_area() << endl;
}

