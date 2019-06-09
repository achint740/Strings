#include<iostream>
#include<cstring>
using namespace std;

string highestValuePalindrome(string s, int n, int k)
{
   if(k==0)
      return s;
   if(n==1 && k>0)
      return "9";
   int i = 0;
   int j = n - 1;
   int dis_sim = 0;
   while(i<j){
       if(s[i]!=s[j])
          dis_sim++;
     i++;
     j--;
    }
    if(dis_sim>k)
       return "-1";
    i=0;
    j=n-1;
    while(k>dis_sim && i<=j){
       if(s[i]!=s[j]){
           if(s[i]=='9'){
               s[j]='9';
               k--;
               dis_sim--;
           }
           else if(s[j]=='9'){
                s[i]='9';
                k--;
                dis_sim--;
           }
           else{
            if(k>=2){
             s[i]='9';
             s[j]='9';
             k-=2;
             dis_sim--;
            }
           }
       }
       else{
        if(s[i]!='9'){
           if(i==j){
               s[i]='9';
               k-=1;
           }
           else{
               if(k>=2){
                   s[i]='9';
                   s[j]='9';
                   k-=2;
        
               }
           }
        }
       }
       i++;
       j--;
    }

    i=0;
    j=n-1;
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
            continue;
        }
        else{
            if(s[i]>s[j])
               s[j]=s[i];
            else
               s[i]=s[j];
          i++;
          j--;
        }
    }
 return s;
}

int main()
{
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    cout<<highestValuePalindrome(s,n,k);
    return 0;
}


