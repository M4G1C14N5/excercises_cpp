/*
  Author: Thomas Tsangou 
Course: CSCI-136
//Instructor: 
//Assignment:  Lab9D

*/
#include <iostream>
using namespace std;

// It should still keep creating poems, but all dynamically allocated 
// memory should get deleted when it is not needed.
string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point
        delete p; // delete dynamically allocated memory when done with it
                  // to prevent memory from running out 
        

    }
}
