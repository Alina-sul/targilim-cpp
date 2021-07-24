//
// Created by Alina Sul on 24/07/2021.
//
#include <iostream>
#include "../Headers/All.h"
#include "../Headers/Targil1.h"

using namespace std;

void All () {

    int targil = 0;
    cout << "Please enter number of Targil: ";
    cin >> targil;

    switch(targil){

        case 1:
        {
            Time *arr = NULL;
            int arr_size = 0;
            inputTime(&arr,arr_size);
            printTime(arr,arr_size);
            break;
        }

        case 2:
            break;

        case 3:
            break;

        case 4:
            break;

        case 5:
            break;

        default:
            break;

    }

}