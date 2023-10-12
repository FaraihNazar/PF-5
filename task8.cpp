#include <iostream>
using namespace std;
string OddishOrEvenish(int num);
int main()
{   int number;
    cout<<"Enter a five-digit number: ";
    cin>>number;
    string result=OddishOrEvenish(number);
    cout<<result;
}
string OddishOrEvenish(int num)
{
   string result;
    int tenThousands = num / 10000;
    int thousands = (num/ 1000) % 10;
    int hundreds = (num / 100) % 10;
    int tens = (num / 10) % 10;
    int ones = num % 10;

  if ((tenThousands+thousands+hundreds+tens+ones)%2 ==0)
  {
      result="Evenish";
  }
  if ((tenThousands+thousands+hundreds+tens+ones)%2 !=0)
  {
      result="Oddish";
  }
  return result;
}