#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"enter a character:";
    cin>>ch;
    switch(ch)
{case 'a':
case 'e':
case 'i':
case 'o':
case 'u':cout<<"yes";break;
default:cout<<"no";}
    return 0;
}
