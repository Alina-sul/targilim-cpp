/*
 * Circle Class created;
 * Private:
 * ~ Point on circle coordinates
 * ~ Radius
 * Public:
 * ~ Getters/Setters
 * ~ Basic Circle calculations
 * ~ Print function to print all circle data
 *
 */


#include <iostream>
#include <cmath>
#include "Targil3.h"

using namespace std;

Circle::Circle() {
    index_x = 0;
    index_y = 0;
    radius = 0;
}

Circle::Circle(double x, double y)  {
    index_x = x;
    index_y = y;
    radius = sqrt(pow(x,2) + pow(y,2));
}

void Circle::SetAll(double x, double y, double r) {
    SetX(x);
    SetY(y);
    radius = r;
}

//void Circle::SetRadius(double x, double y) {
//    radius = sqrt(pow(x,2) + pow(y,2));
//}

void Circle::SetX(double x) {
    index_x = x;
}

void Circle::SetY(double y) {
    index_y = y;
}

void Circle::GetAll(double &x, double &y, double &r) const {
    x = GetX();
    y = GetY();
    r = GetRadius();
}

double Circle::GetX() const {
    return index_x;
}

double Circle::GetY() const {
    return index_y;
}

double Circle::GetRadius() const {
    return radius;
}

double Circle::CircleArea() const {
    return (pow(GetRadius(),2) * Pi);
}

double Circle::CircleCircumference() const {
    return 2 * GetRadius() * Pi;
}

void Circle::PrintAllData() const {

    cout << "__Circle data_____________________________________________" << endl;
    cout << "~ Point on the circle: (" << GetX() << "," << GetY() << ")" << endl;
    cout << "~ Radius: " << GetRadius() << endl;
    cout << "~ Circle Area: " << CircleArea() << endl;
    cout << "~ Circle Circumference: " << CircleCircumference() << endl;

}

Circle::~Circle() {}

void Targil3() {

    Circle circle1;
    Circle circle2(1,2);

    circle1.SetAll(3,5,40);
    cout << "circle1: " << endl;
    circle1.PrintAllData();
    cout << "\ncircle2: " << endl;
    circle2.PrintAllData();

}

