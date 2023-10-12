#include <iostream>
using namespace std;
string calculatePoolState(int V, int P1,int P2,float H);
int main()
{
    int volume,flow_rate_first_pipe,flow_rate_second_pipe;
    float hours;
    cout<<"Enter volume of the pool in liters: ";
    cin>>volume;
    cout<<"Enter flow rate of the first pipe per hour: ";
    cin>>flow_rate_first_pipe;
    cout<<"Enter flow rate of the second pipe per hour: ";
    cin>>flow_rate_second_pipe;
    cout<<"Enter hours that the worker is absent: ";
    cin>>hours;
    string result=calculatePoolState(volume,flow_rate_first_pipe,flow_rate_second_pipe,hours);
    cout<<result;
}
string calculatePoolState(int V, int P1,int P2,float H)
{
    int first_pipe=((P1*H)/V)*100;
    int second_pipe=((P2*H)/V)*100;
    int pool_fill=first_pipe+second_pipe;
    
    float adjustment_factor = 100.0 /pool_fill;
    first_pipe = first_pipe*adjustment_factor;
    second_pipe =second_pipe*adjustment_factor;

    string result;
    if (pool_fill <=100)
    {
        result="The pool is "+to_string(pool_fill)+"% full. Pipe 1: "+to_string(first_pipe)+"%. Pipe 2: "+to_string(second_pipe)+"%.";
    }
    if (pool_fill >100)
    {
        int X=pool_fill-100;
        result="For "+to_string(H)+" hours,the pool overflows with "+to_string(X)+" liters.";
    }
    return result;
}
