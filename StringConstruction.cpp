#include <bits/stdc++.h>

using namespace std;

// Complete the stringConstruction function below.
int stringConstruction(string s) {
 int n = s.length();
 int a[26];
 for(int i=0;i<26;i++)
 {
     a[i]=0;
 }
 for(int i=0;i<n;i++)
 {
     int x = s[i] - 97;
     if(a[x]==0)
       a[x]=1;
 }
 int c=0;
 for(int i=0;i<26;i++)
  {
      if(a[i]==1)
        c++;
  }
  return c;
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

        int result = stringConstruction(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
