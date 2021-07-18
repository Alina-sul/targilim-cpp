#include <iostream>
using namespace std;

//Types
typedef struct Time {

    int sec, min, hour;

} Time;

//Declaration
void transformTime (int &sec, int &min, int &hour);
void inputTime (Time **arr, int *arr_size);


int main(){

    return 0;
}

//Functions
void transformTime (int &sec, int &min, int &hour) {

    int s = sec, m = min;
    sec = sec%60; 
    min = min%60 + s/60;
    hour = hour%24 + m/60;

}

void inputTime (Time **arr, int *arr_size) {

    int n;

    cout << "Please enter size of array: " << endl;
    cin >> n;

    Time *arr2 = new Time[n];

    if(arr2 == NULL) return;

    for(int i = 0; i < n; i++) {

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
    delete[] arr2;

}
