#include <bits/stdc++.h>
#include<string.h>
using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2)
{
    int a[26]={0};
    int b[26]={0};
 int l1 = s1.length();
 int l2 = s2.length();
 int i,ind;
 for(i=0;i<l1;i++)
 {
     ind = s1[i] - 97;
     a[ind]++;
 }
  for(i=0;i<l2;i++)
 {
     ind = s2[i] - 97;
     b[ind]++;
 }

 for(i=0;i<26;i++)
 {
     if(a[i]>0 && b[i]>0)
        return "YES";
 }
 return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
