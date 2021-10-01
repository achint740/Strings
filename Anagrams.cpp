#include <bits/stdc++.h>
#include<cstring>
using namespace std;

// Complete the anagram function below.
int anagram(string s)
{
    int l=s.length();
    if(l%2!=0)
      return -1;
    else
     {
         int i,index,count;
         int l1=l/2;
         int a[26]={0};
         int b[26]={0};
         int i=0;
         while(i<l1)
           {
               index = s[i] - 97;
               a[index]++;
               i++;
           }
           for(i=l1;i<l;i++)
           {
               index = s[i] - 97;
               b[index]++;
           }
        count=0;
        for(i=0;i<26;i++)
         {
             count = count + (a[i]<=b[i]?a[i]:b[i]);
         }
      return (l-count-count)/2;
     }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
