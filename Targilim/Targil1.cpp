#include <iostream>
#include "../Headers/Targil1.hpp"
using namespace std;


//Functions
void transformTime (int &sec, int &min, int &hour) {

    int s = sec, m = min;
    sec = sec%60; 
    min = min%60 + s/60;
    hour = hour%24 + m/60;

}

void inputTime (Time **arr, int *arr_size) {

    int size;

    cout << "Please enter size of array: " << endl;
    cin >> size;

    Time *arr2 = new Time[size];

    if(arr2 == NULL) return;

    for(int i = 0; i < size; i++) {

        cout << "index " << i << ": " << endl;
        cout << "Enter hours: " << endl;
        cin >> arr2[i].hour;
        cout << "Enter minutes: " << endl;
        cin >> arr2[i].min;
        cout << "Enter seconds: " << endl;
        cin >> arr2[i].sec;

        if( arr2[i].min >= 60 || arr2[i].sec >= 60 )  
            transformTime( arr2[i].sec, arr2[i].min, arr2[i].hour);

    }

    *arr = arr2;
    *arr_size = size;
    delete[] arr2;

}

void test(){
    cout<<"test";
}
void printTime (Time arr[], int size) {

    for( int i = 0; i < size; i++) {

        // cout << i << " : ";
        // if(arr[i].hour != 0) cout << arr[i].hour;
        // else  cout << "00"; 
        // cout << ":" << arr[i].min << ":" << arr[i].sec << endl;

    }

}
