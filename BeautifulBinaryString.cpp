#include <bits/stdc++.h>
#include<cstring>
using namespace std;

// Complete the beautifulBinaryString function below.
int beautifulBinaryString(string b)
{
    int count=0;
    int len=b.length();
   for(int i=0;i<len-2;i++)
    {
        if(b[i]=='0' && b[i+1]=='1' && b[i+2]=='0')
           {
               count++;
               i+=2;
           }
    }
 return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string b;
    getline(cin, b);

    int result = beautifulBinaryString(b);

    fout << result << "\n";

    fout.close();

    return 0;
}
