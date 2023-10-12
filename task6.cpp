#include <iostream>
using namespace std;
string checkAlphabetCase(char letter);
int main()
{   char alphabet;
    cout<<"Enter a character (A/a): ";
    cin>>alphabet;
    string result=checkAlphabetCase(alphabet);
    cout<< result;

}
string checkAlphabetCase(char letter)
{
    string result;
    if ( letter== 'A')
    {
        result = "You have entered Capital A";
    }

    if ( letter== 'a')
    {
        result = "You have entered small a";
    }
    return result;
}

