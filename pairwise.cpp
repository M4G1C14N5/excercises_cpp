/*Author: Thomas Tsangou
 * course: CSCI-135
 * Instructor: 
 * Assingment:
 * description: 
 */
#include <iostream>
//#include <cctype>
#include <string>
#include <vector>
using namespace std;

vector<int> makeVector(int n);
vector<int> goodVibes(const  vector<int> v);
//vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2);
//void gogeta(vector<int> &goku, vector<int> &vegeta);



//part D
vector<int> sumPairWise( vector<int> &v1, vector<int> &v2){
    int size1= v1.size();
     int size2= v2.size();
    int bigger_size;
    if (size1 < size2){
            bigger_size = size2;
            for (int i= size1; i<size2; i++){
                v1.push_back(0);
            }
    }
    else{
         bigger_size = size1;
            for (int i= size2; i<size1; i++){
                v2.push_back(0);

            }
    }
    vector<int> ans;
    for(int i=0; i < bigger_size; i++){
        ans.push_back(v1[i]+v2[i]);
    }
    return ans;
}

//Part C
void gogeta(vector<int> &goku, vector<int> &vegeta){
    for (int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}

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
int main(){
 vector<int> v1{1,2,3};
    vector<int> v2{4,5};
   vector<int>pair_sum = sumPairWise(v1, v2);
     for(int i = 0; i < v1.size(); i++){
        cout << pair_sum[i] << "  ";

    }
    cout << endl;

}
