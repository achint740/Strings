#include <bits/stdc++.h>

using namespace std;

bool present(vector<int>v,int x){
    if(v.empty())
       return false;
    
    for(int i=0;i<v.size();i++){
        if(v[i]==x)
          return true;
    }
return false;
}

// Complete the isValid function below.
string isValid(string s) {
     int freq[26] = {0};
     for(int i=0;i<s.length();i++){
         freq[s[i]-'a']++;
     }
     vector<int>v;
     for(int i=0;i<26;i++){
           if(!present(v,freq[i]) && freq[i]>0){
               v.push_back(freq[i]);
           }
     }
     if(v.size()>2)
       return "NO";
     if(v.size()==1)
       return "YES";
     int a0=0,a1=0;
     // a0 denotes how many characters are there with frequency v[0]
     // a1 denotes how many characters are there with frequency v[1]
     for(int i=0;i<26;i++){
         if(freq[i]==v[0])
           a0++;
         if(freq[i]==v[1])
           a1++;
     } 
    if((v[0]==1&&a0==1) || (v[1]==1&&a1==1))
      return "YES";
    
return "NO";

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
