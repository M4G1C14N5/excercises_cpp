/*
  Author: Thomas Tsangou 
Course: CSCI-136
//Instructor: 
//Assignment:  Lab10

*/
#include <iostream>
#include <cmath>
using namespace std;

// define datatype(class) for storing time 
class Time{
public:
    int h; // for number of hours 
    int m; // for number of minutes 
};

// how to use this new datatype called Time 
int main(){
    // 1st way is to create a variable and update its field individually 
    Time now;   // creates a new variable (or object) with time datatype
    now.h = 17; // assigns hours field 
    now.m = 45; // assigns its minutes field 
    // variable/ object called now is storing 5:45 PM
    
    // 2nd way is to initilize field with literal syntax 
    Time t = {17, 45}; // order of vaules is important 
    
    /****************************************************************************************************************/
    
    // the assignment operator works for objects, it copies all the elements of the object, field by field
    Time morningLecture = {8, 10};

    Time myAlarm;              // make another variable

    myAlarm = morningLecture;    // copying

    printTime(morningLecture);   // will print 8:10
    printTime(myAlarm);        // will print 8:10 as well
                           // You may be late for the class tho
}

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}
