#ifndef TARGILIM_TARGIL3_H
#define TARGILIM_TARGIL3_H

#define Pi 3.14

void Targil3();
class Circle {
    private:
        double index_x,index_y,radius;
    public:
        Circle();
        Circle(double x, double y);
        void SetAll(double x, double y, double r);
        void SetX(double x);
        void SetY(double y);
        //void SetRadius(double x, double y);
        void GetAll(double &x, double &y, double &r) const;
        double GetX() const;
        double GetY() const;
        double GetRadius() const;
        double CircleArea() const;
        double CircleCircumference() const;
        void PrintAllData() const;

};


#endif //TARGILIM_TARGIL3_H
