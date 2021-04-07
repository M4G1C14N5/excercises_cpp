#include <iostream>
#include <string>
using namespace std;

// question 3

swap(int m, int n)    void swap(int& m, int& n)
           {                      {
               m = n;                  int temp = m;
               n = m;                  m = n;
           }                           n = temp;
                                  }

// question 4
string getMax(string arr[]){
    bool name = true;
    int length = sizeof(arr)/sizeof(arr[0]);
    //int biggest = 0;
    int num;
    string name;
    for (int i = 0; i<=length; i++){
        num= arr[i].size();
        if (num = 8){
            biggest = num;
            name = arr[i];
        }
    }
    return name; 
}
int main() {
    string arr[] = {"Roy", "Adam", "Tom", "Moses"};
    cout << getLength);
    
    return 0;
    
}

// question 5 
class TV{
public:
    string brand; // brand of TV
    int size; // size of TV
};

TV(){
    brand = "LG";
    size = 50;
};

int getSize(TV tv){
    int total = tv.size;
    return total;
}

Void swap(int* m, int* n)
		{
               int* temp = m;
               m = n;
               n = temp;  
               cout << "m = " << *m <<" n = " << *n;
           }
public static boolean getBool(string arr[], int size) {
    name = true;
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i ,= length; i++){
        if (arr[i].size() < 8){
            break;
        }
    }
    return name;
}
#include <iostream>
using namespace std;

int main() {
   int arr[5][5] = {
   {0},{1,2},{3,4,5},{6,7,8,9},{10,11,12,13,14}
   };
   for(int i=0;i<5;i++)
   {
   for(int j=0;j<=i;j++)
   {
   cout<<arr[i][j]<<" ";
   }
   cout<<endl;
   }
   return 0;
}
