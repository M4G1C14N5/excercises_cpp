/*
  Author: Thomas Tsangou 
Course: CSCI-136
//Instructor: 
//Assignment:  Lab9A-C

*/
#include <iostream>
#include <cmath>
using namespace std;


//declare Coord3D class object that represents coordinates in 3D
class Coord3D {
public:
    double x;
    double y;
    double z;
};

// part A calculate the length from a particular 
// point P in 3D space to the origin O using Euclidean formula 
double length (Coord3D *p){
    return sqrt(pow(p->x,2)+pow(p->y,2)+pow(p->z,2));
}

// part B
// function receives the coordinates of two points (passed as pointers) 
// and returns the pointer of the point that is farther away from the origin.
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
    if (length(p1) > length(p2)){
        return p1;
    }
    else{
        return p2;
    }
}

// Part C
// which gets the position and the velocity of an object and has to compute 
// object’s new coordinates after the time interval dt
void move(Coord3D *ppos, Coord3D *pvel, double dt){
    // Update view position 
    // Based on formula in instriction
    ppos->x = ppos->x + (pvel->x*dt);
    ppos->y = ppos->y + (pvel->y*dt);
    ppos->z = ppos->z + (pvel->z*dt);
}

// Part E
// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z){
    Coord3D *p = new Coord3D; //Dynamically allocated memory simialr to part D (poem.cpp)
    p->x = x;
    p->y = y;
    p->z = z;
    return p;
    
}

// Part E
// free memory
void deleteCoord3D(Coord3D *p){
    delete p;
}


//main function copied from the instruction
int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}
