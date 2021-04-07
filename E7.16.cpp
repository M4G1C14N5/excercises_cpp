/*Author: Thomas Tsangou
 * course: CSCI-135
 * Instructor: 
 * Assingment: E7.16
 * description: Define a structure Point. A point has an x- and a y-coordinate. 
 * Write a function double distance(Point a, Point b) that computes the distance from a to b. 
 * Write a program that reads the coordinates of the points, calls your function, and displays the result.
 */

#include <iostream>
#include <cmath>

using namespace std;

// Define a structure Point. A point has an x- and a y-coordinate
struct Point{
    double x,y;
};

// function that computes the distance from a to b
double distance(point a, point b){
    double distance = sqrt(pow(b.x - a.x,2)+pow(b.y - a.y,2));
    return distance;
}

// program reads the coordinates of the points, calls your function, and displays the result
int main(){
    double x,y;// x and y values 
    cout << "Enter x-value for point a: ";
    cin >> x;//New x-coordinate for point a
    cout << "Enter x-value for point a: ";
    cin >> y;//New y-coordinate for point bs
    
    point a = {x,y};
    
    cout << "Enter x-value for point b: ";
    cin >> x;//New x-coordinate for point b
    cout << "Enter x-value for point b: ";
    cin >> y;//New y-coordinate for point a
    
    point b = {x,y};
    
    cout << "The distance is " << distance(a,b) << endl;
    
}
