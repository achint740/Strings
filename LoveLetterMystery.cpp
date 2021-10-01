#include <bits/stdc++.h>
#include<cstring>
using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s) {
  int changes = 0;
  int len = s.length();
  int mid=len/2;
  for(int i=0;i<len;i++) {
      int diff=abs(s[i]-s[len-1-i]);
      changes+=diff;
  }
  return changes/2;
}

int main() {
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        string s;
        getline(cin, s);
        cout << theLoveLetterMystery(s) << "\n";
    }
    return 0;
}
