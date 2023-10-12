#include<iostrean>
#include<cmath>
using namespace std;
main()
{
	float a;
	cout<<"Enter the value of a: ";
	cin>>a;
	float b;
	cout<<"Enter the value of b: ";
	cin>>b;
 	float c;
 	cout<<"Enter the value of c: ";
	cin>>c;
	float det=b^2-(4*a*c);
	if(det>0)
{
	float sq=(b^2)-(4*a*c);
	sqrt(sq);
	float root1=-b+sqrt(sq)/2*a;
	float root2=-b-sqrt(sq)/2*a;
	cout<<"Solutions: x = "<<root1 <<" and x = " <<root2;
}
	if (det==0)
{
	float result=(-b/(2*a));
	cout<<"Solution: "<<result;
}
}
