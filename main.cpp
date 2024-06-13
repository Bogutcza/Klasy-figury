#include <iostream>
#include "figury.h"

int main() {
    Rectangle rectangle(0, 0, 5, 3);
    Square square(0, 0, 4);
    Circle circle(0, 0, 2);

    rectangle.display_name();
    std::cout << "Perimeter: " << rectangle.perimeter() << std::endl;
    std::cout << "Area: " << rectangle.area() << std::endl;

    square.display_name();
    std::cout << "Perimeter: " << square.perimeter() << std::endl;
    std::cout << "Area: " << square.area() << std::endl;

    circle.display_name();
    std::cout << "Perimeter: " << circle.perimeter() << std::endl;
    std::cout << "Area: " << circle.area() << std::endl;

    std::cout << "Number of figures: " << Figure::getNumberOfFigures() << std::endl;

    int choice;
    double x, y, angle, length;
    vector vec(0, 0);

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1 - Set vector" << std::endl;
        std::cout << "2 - Print vector" << std::endl;
        std::cout << "3 - X coordinate of the end of the vector" << std::endl;
        std::cout << "4 - Y coordinate of the end of the vector" << std::endl;
        std::cout << "5 - Length of the vector" << std::endl;
        std::cout << "6 - Angle of the vector" << std::endl;
        std::cout << "7 - Create new vector using angle and length" << std::endl;
        std::cout << "8 - Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter x and y: ";
                std::cin >> x >> y;
                vec.set(x, y);
                break;
            case 2:
                vec.display();
                break;
            case 3:
                std::cout << "X coordinate: " << vec.getX() << std::endl;
                break;
            case 4:
                std::cout << "Y coordinate: " << vec.getY() << std::endl;
                break;
            case 5:
                std::cout << "Length: " << vec.lenght() << std::endl;
                break;
            case 6:
                std::cout << "Angle: " << vec.angle() << std::endl;
                break;
            case 7:
                std::cout << "Enter angle and length: ";
                std::cin >> angle >> length;
                vec = vector::createVector(angle, length);
                break;
            case 8:
                return 0;
            default:
                std::cout << "Choose the right option." << std::endl;
                break;
        }
    }

    return 0;
}
