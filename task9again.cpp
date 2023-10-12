#include <iostream>
using namespace std;
string timeTravel(int h,int m);
int main()
{  int hours,minutes;
   cout<<"Enter Hours: ";
   cin>>hours;
   cout<<"Enter Minutes: ";
   cin>>minutes;
   string future_time=timeTravel(hours,minutes);
   cout<<future_time;
}
string timeTravel(int h,int m)
{
  int total_minutes=h*60+m;
  total_minutes= total_minutes+15;
  int future_hours=total_minutes/60;
  int future_minutes=total_minutes%60;
  string future_time= to_string(future_hours) +":";
  future_time=future_time+to_string(future_minutes);
  return future_time;

}
