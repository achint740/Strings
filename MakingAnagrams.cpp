#include <bits/stdc++.h>
#include<cstring>
using namespace std;


// Complete the makingAnagrams function below.
int makingAnagrams(string s1, string s2)
{
    int a[26]={0};
    int b[26]={0};
   int i,index,count;
  int l1=s1.length();
  int l2=s2.length();
  for(i=0;i<l1;i++)
   {
       index = s1[i] - 97;
        a[index]++;
   }
  for(i=0;i<l2;i++)
  {
      index = s2[i] - 97;
      b[index]++;
  }
count=0;
  for(i=0;i<26;i++)
   {
       count = count + (a[i]<=b[i]?a[i]:b[i]);
   }
return ((l1-count)+(l2-count));
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}

