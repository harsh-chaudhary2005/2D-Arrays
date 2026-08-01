#include<iostream>
using namespace std;
int main(){
  int matrix[4][3] = {{1, 2, 3}, {4, 2, 5}, {9, 6, 32}, {12, 23, 7}};
  int rows = 4;
  int cols = 3;
  matrix[3][2] = 6;
  cout << matrix[3][2] << endl;
  return 0;
}