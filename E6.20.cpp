/*
 * Author: Thomas Tsangou 
 * course: CSCI-136
 * Instructor: 
 * E6.18
 * Assingnment: Write a function vector<int> append(vector<int> a, vector<int> b)
 * that appends one vector after another. For example, if a is
 * 1 4 9 16 and b is 9 7 4 9 11
 * then append returns the vector
 * 1 4 4 9 9 9 11 16 
 * 
 */

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b) {
  vector<int> output;

  for (int i = 0; i < a.size(); i++) {
    output.push_back(a[i]);
  }

  for (int j = 0; j < b.size(); j++) {
    output.push_back(b[j]);
  }

  // order from least to greatest
  sort(output.begin(), output.end());

  return output;
}
