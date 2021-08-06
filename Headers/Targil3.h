#ifndef HEADERS_TARGIL3_H
#define HEADERS_TARGIL3_H

#define Pi 3.14

class Circle {
    private:
        double index_x,index_y,radius;
    public:
        Circle();
        Circle(double x, double y);
        ~Circle();
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

void Targil3();

#endif //HEADERS_TARGIL3_H
