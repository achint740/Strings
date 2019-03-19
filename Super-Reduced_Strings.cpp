#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
  string str;
  getline(cin,str);
  int l=0;
  while(str[l]!='\0')
  {
    l++;
  }
  int i=0,count=0;
  while(str[i]!='\0')
  {
    if(str[i]==str[i+1])
    {
      str.erase(i,2);
      count++;
      i=0;
    }
    else
    i++;
  }
  if(str[0]=='\0')
  {
    cout<<"Empty String";
  }
  else
  cout<<str;
}
