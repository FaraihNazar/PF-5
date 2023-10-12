#include <iostream>
using namespace std;
#include <cmath>
int main()
{   int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    float determinant=pow(b,2)-4*(a)*(c);
    if (determinant==0)
    {
        float x=-b/(2*a);
        cout<<"Solution: "<<"x = "<<x;
    }
    if (determinant>0)
    {

        float y=((-b + sqrt(pow(b,2)-4*a*c)))/(2*a);
        float z=((-b - sqrt(pow(b,2)-4*a*c)))/(2*a);
        cout<<"Solutions: "<<"x = "<<y<<" and x = "<<z;

    }
     if (determinant<0)
    {
       float x1=(-b/2*a);
       float x2=(sqrt(-(pow(b,2)-4*a*c)))/(2*a);
       
        cout<<"Complex Solutions: "<<"x = "<<x1<<" + "<<x2<<"i and x = "<<x1<<" - "<<x2<<"i";

        
    }
return 0;
}