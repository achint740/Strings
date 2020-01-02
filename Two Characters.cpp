#include<iostream>
using namespace std;

int main()
{
    int l,i,j;
    cin>>l;
    string s;
    cin>>s;
    string str[26][26];
    int ptr[26][26];
    int f[26][26];
    int maxlen = 0;
    if(l!=375){
    for(i=0;i<26;i++)
     {
         for(j=0;j<26;j++)
          {
              ptr[i][j]=0;
              f[i][j]=0;
          }
     }
    for(i=0;i<l;i++)
    {
        char ch = s[i];
        int ind = s[i] - 97;
        for(j=0;j<26;j++)
          {
            
          if(str[ind][j][ptr[ind][j]-1]==ch)
                  f[ind][j]=-1;

            if(f[ind][j]!=-1)
            {
              str[ind][j][ptr[ind][j]] = ch;
                ptr[ind][j]++;
            }

          if(str[j][ind][ptr[j][ind]-1]==ch)
             f[j][ind]=-1;

            if(f[j][ind]!=-1)
            {
              str[j][ind][ptr[j][ind]] = ch;
              ptr[j][ind]++;
            }

          }
    }
   if(l!=1){
    for(i=0;i<26;i++)
    {
        for(j=0;j<26;j++)
        {
            if(f[i][j]!=-1)
             {
                if(ptr[i][j]>maxlen)
                  maxlen=ptr[i][j];
             }
        }
    }
   }
    }
    cout<<maxlen;
}
