#include <iostream>
using namespace std;
#include <cmath>
int main()
{
  int distance;
  float angle_of_elevation;
  cout<<"Enter the distance from the base of the tree (in feet): ";
  cin>>distance;
  cout<<"Enter the angle of elevation (in degrees): ";
  cin>>angle_of_elevation;
  float converted_angle=angle_of_elevation/57.2958;
  cout<<"The height of the tree is: "<<tan(converted_angle)*distance<<" feet";



}