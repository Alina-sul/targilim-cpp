#ifndef TIRGUL1_HPP 
#define TIRGUL1_HPP 

//Types
typedef struct Time {

    int sec, min, hour;

} Time;

//Declaration
void transformTime (int &sec, int &min, int &hour);
void inputTime (Time **arr, int *arr_size);
void printTime (Time arr[], int size);
void test();

#endif 