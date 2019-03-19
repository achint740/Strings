#include <bits/stdc++.h>
using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) 
{
  int l=0,c1=0,c2=0,c3=0,c4=0,count=0,p;
  char ch;
    for(int i=0;i<n;i++)
    {
      ch=password[i];
      if(ch>=65&&ch<=90)
        c1++;
      else if(ch>=97&&ch<=122)
        c2++;
      else if(ch>=48&&ch<=57)
        c3++;
      else
        c4++;
    }  
  if(c1==0)
    count++;
  if(c2==0)
    count++;
  if(c3==0)
    count++;
  if(c4==0)
    count++;
  p=n+count;
  if(p>=6)
    return count;
    else
    return 6-n;
      
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
