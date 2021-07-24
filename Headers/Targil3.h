//
// Created by Alina Sul on 24/07/2021.
//

#ifndef TARGILIM_TARGIL3_H
#define TARGILIM_TARGIL3_H

#define Pi 3.14

void Targil3();
class Circle {
    private:
        double index_x,index_y,radius;
    public:
        Circle(double r);
        Circle(double x, double y, double r);
        void SetAll(double x, double y, double r);
        double GetAll();
        double CircleArea();
        double CirclePerimeter();
        void PrintAllData();


};


#endif //TARGILIM_TARGIL3_H
