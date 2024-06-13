//
// Created by kacpe on 06.06.2024.
//


#ifndef FIGURY_H
#define FIGURY_H



#ifndef FIGURES_H
#define FIGURES_H

#include <string>

class Figure {
protected:
    std::string name;
    double x, y;  // coordinates of the center of the figure
    static int numberOfFigures; // static class field

public:
    Figure(const std::string& name, double x, double y);
    Figure();
    ~Figure();

    void display_name() const;
    static int getNumberOfFigures();
};

class Rectangle : public Figure {
private:
    double length, width;

public:
    Rectangle(double x, double y, double length, double width);
    double perimeter() const;
    double area() const;
};

class Square : public Figure {
private:
    double side;

public:
    Square(double x, double y, double side);
    double perimeter() const;
    double area() const;
};

class Circle : public Figure {
private:
    double radius;

public:
    Circle(double x, double y, double radius);
    double perimeter() const;
    double area() const;
};

class vector {
private:
    double x, y;

public:
    vector(double x, double y);


    void display() const;
    double lenght() const;
    double angle() const; // angle in radians
    void set(double x, double y);
    double getX() const;
    double getY() const;

    static vector createVector(double angle, double length);
};

#endif // FIGURES_H

#endif // FIGURY_H





