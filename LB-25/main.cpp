#include <iostream>
using namespace std;

class Tree {
public:
    virtual void draw() = 0;
};

class TreeType1 : public Tree {
public:
    void draw() override {
        cout << "Drawing 1:" << endl;
        cout << " /\\\n";
        cout << "//\\\\" << endl;
    }
};

class TreeType2 : public Tree {
public:
    void draw() override {
        cout << "Drawing 2:" << endl;
        cout << "  /\\\n";
        cout << " /**\\" << endl;
    }
};

class TreeType3 : public Tree {
public:
    void draw() override {
        cout << "Drawing 3:" << endl;
        cout << "  /\\\n";
        cout << " /++\\" << endl;
    }
};

int main() {
    Tree* trees[3];

    TreeType1 t1;
    TreeType2 t2;
    TreeType3 t3;

    trees[0] = &t1;
    trees[1] = &t2;
    trees[2] = &t3;

    for (int i = 0; i < 3; i++) {
        trees[i]->draw();
        cout << endl;
    }
}
