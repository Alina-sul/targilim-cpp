//
// Created by Alina Sul on 24/07/2021.
//

#ifndef TARGILIM_TARGIL3_H
#define TARGILIM_TARGIL3_H

#define Pi 3.14

class Circle {
    public:
        Circle();
        Circle(const double x = 0, const double y = 0);
        void Set();
        void Get();


    private:
        double x,y,r;


};


#endif //TARGILIM_TARGIL3_H
