
/*
 * Author: Thomas Tsangou 
 * course: CSCI-136
 * Instructor: 
 * E9.3
 * Assingnment:
 * 
 */

#include <iostream>

using namespace std;

class Rectangle
{
private:
double width;
double height;
public:
Rectangle(double w, double h)//constructor to construct rectangle with given width and height
{
width=w;
height=h;
}
double get_perimeter() //method to compute perimeter
{
return 2*(width+height);
}
double get_area() //method to return area of rectangle
{
return width*height;
}
void resize(double factor) //method to multiply width and height with factor given
{
width=width*factor;
height=height*factor;
}
  
};
int main()
{
Rectangle rect(10, 20);
cout << "Perimeter of Rectangle :" << rect.get_perimeter () << endl;
cout << "Area of Rectangle : " << rect.get_area () << endl;
rect.resize (2);
cout << "After resizing with factor 2 :" << endl;
cout<<"Perimeter of Rectangle :"<<rect.get_perimeter()<<endl;
cout<<"Area of Rectangle : "<<rect.get_area()<<endl;

return 0;
}
