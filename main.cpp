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

    return 0;
}
