/*Author: Thomas Tsangou
 * course: CSCI-135
 * Instructor: 
 * Assingment:
 * description: 
 */
#include <iostream>
#include <cctype>
#include <string>
#include <vector>
using namespace std;
//
vector<int> makeVector(int n);
//
int main(){
vector<int> v = makeVector(10);
    for(int i = 0; i <v.size(); i++){
        cout << v[i] << "  ";

    }
    cout << endl;
}

//
vector<int> makeVector(int n) {
    vector<int> ans;
    for (int i =0; i < n; i++){
        ans.push_back(i);
    }
    return ans;

}
