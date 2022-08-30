/***********************************************
  
  This is a Kattis problem for area of a triangle
  
/**********************************************/
  

#include <iostream>

  using namespace std;


int main() {
  
  // read in h, b for base and height
  int h, b;
  
  double a; // precise to 10^-7
  
  cin>> h >> b;
  
  // calculate area
  a = 0.5*h*b;
  
  cout << a;
  
}