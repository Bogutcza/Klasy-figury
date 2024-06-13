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

Figure::Figure() {}

Rectangle::Rectangle(double x, double y, double length, double width)
        : Figure("Rectangle", x, y), length(length), width(width) {}

double Rectangle::perimeter() const {
    return 2 * (length + width);
}

double Rectangle::area() const {
    return length * width;
}

Square::Square(double x, double y, double side)
        : Figure("Square", x, y), side(side) {}

double Square::perimeter() const {
    return 4 * side;
}

double Square::area() const {
    return side * side;
}

Circle::Circle(double x, double y, double radius)
        : Figure("Circle", x, y), radius(radius) {}

double Circle::perimeter() const {
    return 2 * M_PI * radius;
}

double Circle::area() const {
    return M_PI * radius * radius;
}

vector::vector(double x, double y) : x(x), y(y) {}




double vector::lenght() const {
    return std::sqrt(x * x + y * y);
}

double vector::angle() const {
    return std::atan2(y, x);
}

void vector::set(double x, double y) {
    this->x = x;
    this->y = y;
}

double vector::getX() const {
    return x;
}

double vector::getY() const {
    return y;
}

vector vector::createVector(double angle, double length) {
    return vector(length * std::cos(angle), length * std::sin(angle));
}

void vector::display() const {
    std::cout << "vector: (" << x << "," << y << ")" << std::endl;
}
