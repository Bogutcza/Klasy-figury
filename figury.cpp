#include "figury.h"
#include <iostream>
#include <cmath>

// Initialization of static class field
int Figure::numberOfFigures = 0;

Figure::Figure(const std::string& name, double x, double y) : name(name), x(x), y(y) {
    numberOfFigures++;
}

Figure::~Figure() {
    numberOfFigures--;
}

void Figure::display_name() const {
    std::cout << "Figure name: " << name << std::endl;
    std::cout << "Figure center: (" << x << ", " << y << ")" << std::endl;
}

int Figure::getNumberOfFigures() {
    return numberOfFigures;
}

// Implementation of the Rectangle class
Rectangle::Rectangle(double x, double y, double length, double width)
        : Figure("Rectangle", x, y), length(length), width(width) {}

double Rectangle::perimeter() const {
    return 2 * (length + width);
}

double Rectangle::area() const {
    return length * width;
}

// Implementation of the Square class
Square::Square(double x, double y, double side)
        : Figure("Square", x, y), side(side) {}

double Square::perimeter() const {
    return 4 * side;
}

double Square::area() const {
    return side * side;
}

// Implementation of the Circle class
Circle::Circle(double x, double y, double radius)
        : Figure("Circle", x, y), radius(radius) {}

double Circle::perimeter() const {
    return 2 * M_PI * radius;
}

double Circle::area() const {
    return M_PI * radius * radius;
}
