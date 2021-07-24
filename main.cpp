#include <iostream>
#include "Headers/Targil1.h"

using namespace std;


int main(){

    Time *arr = NULL;
    int arr_size = 0;
    inputTime(&arr,arr_size);
    printTime(arr,arr_size);
    return 0;
}