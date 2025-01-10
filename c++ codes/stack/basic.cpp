#include <iostream>
using namespace std;

class Rectangle {
    int width, height;

public:
    Rectangle(int width, int height) {
        
        this->width = width;
        this->height = height;
    }

    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Rectangle rect(5, 10);
    rect.display();
    return 0;
}
