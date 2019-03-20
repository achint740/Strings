#include <bits/stdc++.h>
#include<string.h>
#include<cstdlib>
using namespace std;

// Complete the funnyString function below.
string funnyString(string s)
{
    int i,j,f;
    j=0;
    f=0;
  int l=s.length();
  int a[l-1],b[l-1];
  for(i=0;i<l-1;i++)
   {
     a[i] = abs(s[i+1]-s[i]);
   }
   for(i=l-1;i>0;i--)
   {
       b[j] = abs(s[i]-s[i-1]);
       j++;
   }
   for(i=0;i<(l-1);i++)
   {
       if(a[i]!=b[i]){
           f--;
         break;
         }
   }
   if(f==0)
    return "Funny";
   else
    return "Not Funny";
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

        string result = funnyString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
