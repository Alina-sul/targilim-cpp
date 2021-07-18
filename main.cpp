#include <iostream>
using namespace std;

//Types
typedef struct Time {

    int sec, min, hour;

} Time;

//Declaration
Time setTime (int s, int m, int h);


int main(){

    setTime(1,1,1);
    return 0;
}

//Functions
Time setTime (int s, int m, int h) {

    Time t;
    t.sec = s%60;
    t.min = m%60 + s/60;
    t.hour = h%24 + m/60;
    return t;
    

}
