#include<iostream>
#include<cstring>
using namespace std;

int a[26]={0};

void gem(char ch[],int len)
{
    int b[26]={0};
    for(int i=0;i<len;i++){
        if(b[ch[i]-97]==0)
          b[ch[i]-97]++;
    }
    for(int i=0;i<26;i++)
      a[i]+=b[i];
}

 int main()
{
    int n;
    cin>>n;
    int n1=n;
    while(n--)
    {
        char ch[1000];
        cin>>ch;
        //cout<<ch<<endl;
        int len = strlen(ch);
        gem(ch,len);
    }
    int count = 0;
  for(int j=0;j<26;j++)
   {
       if(a[j]>=n1 && a[j]%n1==0)
         count++;
   }
   cout<<count;
}
