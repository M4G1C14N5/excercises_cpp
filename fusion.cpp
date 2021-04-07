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

vector<int> makeVector(int n);
vector<int> goodVibes(const vector<int> v);
void gogeta(vector<int> &goku, vector<int> &vegeta);

int main(){
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};
    gogeta(v1, v2);
     for(int i = 0; i < v1.size(); i++){
        cout << v1[i] << "  ";

    }
    cout << endl;
    
}

//Part C
void gogeta(vector<int> &goku, vector<int> &vegeta){
    for (int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}
//
//Part B
vector<int> goodVibes(const vector<int> v){
    vector<int> ans;
    for (int i = 0; i < v.size(); i++){
        if (v[i] > 0){
            ans.push_back(v[i]);
        }
    }
     return ans;   
}

//Part A
vector<int> makeVector(int n) {
    vector<int> ans;
    for (int i =0; i < n; i++){
        ans.push_back(i);
    }
    return ans;

}
