/*Author: Thomas Tsangou
 * course: CSCI-135
 * Instructor: 
 * Assingment:
 * description: 
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;
//
vector<int> makeVector(int n);
vector<int> goodVibes(const vector<int> v);
//
int main(){
    vector<int> v{1,2,-1,3,4,-1,6};  //Intilize a vector
    vector<int> v1 = goodVibes(v);
    for(int i = 0; i <v1.size(); i++){
        cout << v1[i] << "  ";

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
//
vector<int> goodVibes(const vector<int> v){
    vector<int> ans;
    for (int i = 0; i < v.size(); i++){
        if (v[i] > 0){
            ans.push_back(v[i]);
        }
    }
     return ans;   
}
