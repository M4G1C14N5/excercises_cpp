
/*
 * Author: Thomas Tsangou 
 * course: CSCI-136
 * Instructor: 
 * E6.18
 * Assingnment: Write a function vector<int> append(vector<int> a, vector<int> b)
 * that appends one vector after another. For example, if a is
 * 1 4 9 16 and b is 9 7 4 9 11
 * then append returns the vector
 * 1 4 9 16 9 7 4 9 11
 * 
 */
#include <iostream>
#include <vector>

using namespace std;


vector<int> append(vector<int> a, vector<int> b) {
  vector<int> output;

  for (int x = 0; x < a.size(); x++) {
    output.push_back(a[x]);
  }

  for (int y = 0; y < b.size(); y++) {
    output.push_back(b[y]);
  }

  return output;
}
