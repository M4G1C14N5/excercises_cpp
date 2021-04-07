/*Author: Thomas Tsangou
 * course: CSCI-135
 * Instructor: 
 * Assingment: E7.18
 * description: Define a structure Triangle that contains three Point members. 
 * Write a function that computes the perimeter of a Triangle. 
 * Write a program that reads the coordinates of the points, calls your function, 
 * and displays the result.
 */

#include <iostream>
#include <cmath>


using namespace std;



// what we need in the 

class Point{
public:
    double x;
    double  y;
  //  double a = x;
   // double* b = y;

};

class Triangle{
public:
   Point a;// side 
    
    Point  b; // base

    Point c; // side
 

};
double distance(Point a, Point b);
double perimeter (Triangle tri);
// needs to calulate the distance from point a and poibnt b


// wht is needed in the main is user input 
int main(){
   double x ,v;
   Triangle tri;
    cout<<"what is the first point for the base"<< endl;
    cin >> x;
    cout<<"what is the second point "<< endl;
     cin>> v;
     tri.a= {x,v};

    cout<<"what is the first point for the base"<< endl;
    cin >> x;
    cout<<"what is the second point "<< endl;
     cin>> v;
     tri.b= {x,v};



     cout<<"what is the first point for the base"<< endl;
    cin >> x;
    cout<<"what is the second point "<< endl;
     cin>> v;
    tri.c= {x,v};




  


     cout <<"THis total  is  " << perimeter(tri) <<endl;
     return 0;

}




double distance (Point a, Point b){
    double total;
    total = sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
    return total;

}



double perimeter (Triangle tri){
    double ab = distance(tri.a,tri.b);
    double ac= distance(tri.a, tri.c);
    double bc= distance(tri.b, tri.c);
    double total = ab + bc + ac;


    return total;

}
