#include <iostream>
 
using namespace std;

void TC(string str)
{
    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2*10 + h1%10);

    int i;
    if(str[8]=='A')
    {
        if(hh==12)
        {
            cout << "00";
            for(i=2; i<=7; i++)
            {
                cout << str[i];
            }
        }
        else
        {
            for(i=0; i<=7; i++)
                cout<<str[i];
        }
    }

    else
    {
        if(hh==12)
        {
            cout << "12";
            for(i=2; i<=7; i++)
                cout<<str[i];
        }
        else
        {
            hh = hh + 12;
            cout << hh;
            for(i=2; i<=7; i++)
                cout << str[i];
        }
    }
}
 
int main()
{
    string str;
    cin >> str;
    
    TC(str);

    return 0;
}