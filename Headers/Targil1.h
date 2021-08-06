#ifndef TARGIL1_H
#define TARGIL1_H

//Types
typedef struct Time {

    int sec, min, hour;

} Time;

//Functions
void transformTime (int &sec, int &min, int &hour);
void inputTime (Time **arr, int &arr_size);
void printTime (Time arr[], int size);

#endif 