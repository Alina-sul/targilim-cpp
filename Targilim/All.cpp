#include <iostream>
#include "../Headers/All.h"
#include "../Headers/Targil1.h"
#include "../Headers/Targil2.h"
#include "../Headers/Targil3.h"
#include "../Headers/Targil4.h"

using namespace std;

void All () {

    int targil = 0;
    cout << "Please enter number of Targil: ";
    cin >> targil;

    switch(targil){

        case 1: {
            Time *arr = NULL;
            int arr_size = 0;
            inputTime(&arr,arr_size);
            printTime(arr,arr_size);
            break;
        }

        case 2: {
            Time time = {34,12,16};
            Time clone = cloneTime(time);
            cout << "Cloned time is: " <<
                clone.hour << " : " <<
                clone.min << " : " <<
                clone.sec << endl;
            break;
        }

        case 3:{
            Targil3();
            break;
        }

        case 4:{
            Targil4();
            break;
        }


        case 5:
            break;

        default:
            break;

    }

}