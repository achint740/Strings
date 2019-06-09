#include <bits/stdc++.h>

using namespace std;

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    vector<string>res;
   int i,j,sum;
   vector <bool> arr(10e8);
   for(i=0;i<s.length();i++){
       sum=0;
       for(j=i;j<s.length(),s[i]==s[j];j++){
         sum+=s[j]-'a'+1;
         arr[sum]=true;
       }
       i=j-1;
   }
 int n = queries.size();
 for(i=0;i<n;i++){
     if(arr[queries[i]]){
      res.push_back("Yes");
     }
     else{
         res.push_back("No");
     }
 }
 return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
