#include <bits/stdc++.h>
#include<cstring>
using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s)
{
 int changes = 0;
 int len = s.length();
 int mid=len/2;
 for(int i=0;i<len;i++)
 {
     int diff=abs(s[i]-s[len-1-i]);
     changes+=diff;
 }
 return changes/2;

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

        int result = theLoveLetterMystery(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
