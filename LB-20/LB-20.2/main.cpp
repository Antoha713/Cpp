#include <iostream>
#include <string>
using namespace std;

class Square
{
public:
    Square(double side);
    void print(Square* square);
    void set_side(double side);
private:
    double side;
    double area;
};

Square::Square(double side)
{
    set_side(side);
}

void Square::set_side(double side) {
    if(side>=0) {
        this->side = side;
        this->area = side * side;
    } else {
        cout << "size < 0, changes were not saved" << endl;
    }
}


void Square::print(Square *square) {
    cout << "Square: side=" << square->side << " area=" << square->area << endl;
}
int main()
{
    Square s(4);
    s.print(&s);
    s.set_side(2.0);
    s.print(&s);
    s.set_side(-33.0);
    s.print(&s);
    s.set_side(33.0);
    s.print(&s);
    return 0;
    }