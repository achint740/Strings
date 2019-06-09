#include <bits/stdc++.h>
using namespace std;

bool check(int no_a,int no_c,int no_g,int no_t,int count_a,int count_c,int count_g,int count_t){
    if(no_a<=count_a && no_c<=count_c && no_g<=count_g && no_t<=count_t)
       return true;
return false;
}

// Complete the steadyGene function below.
int steadyGene(string gene) {
    int no_a=0,no_c=0,no_g=0,no_t=0,k;
    int i=0,j,n=gene.length();
    for(j=0;j<n;j++){
        if(gene[j]=='A')
            no_a++;
        else if(gene[j]=='C')
            no_c++;
        else if(gene[j]=='G')
            no_g++;
        else if(gene[j]=='T')
            no_t++;
    }
    //cout<<no_t<<endl;
    no_a-=(n/4);
    no_c-=n/4;
    no_g-=n/4;
    no_t-=n/4;
    if(no_a<0)
       no_a=0;
    if(no_c<0)
       no_c=0;
    if(no_g<0)
       no_g=0;
    if(no_t<0)
       no_t=0;
  
    int ans=INT_MAX;
    int count_a=0,count_g=0,count_c=0,count_t=0;
    bool res=false;
  
    while(i<n){
            if(gene[i]=='A' && no_a>0)
               count_a++;
            if(gene[i]=='C' && no_c>0)
               count_c++;
            if(gene[i]=='G' && no_g>0)
               count_g++;
            if(gene[i]=='T' && no_t>0)
               count_t++;
    
            if(check(no_a,no_c,no_g,no_t,count_a,count_c,count_g,count_t)){
                res=true;
               break;
             }   
         i++;
        }
        cout<<i<<" \n";
        if(res==true)
          ans=i+1;
    j=i;
    for(k=1;j<n&&k<n;k++){
           if(gene[k-1]=='A' && no_a>0)
               count_a--;
            if(gene[k-1]=='C' && no_c>0)
               count_c--;
            if(gene[k-1]=='G' && no_g>0)
               count_g--;
            if(gene[k-1]=='T' && no_t>0)
               count_t--;

        if(check(no_a,no_c,no_g,no_t,count_a,count_c,count_g,count_t)){
            if(j-k+1<ans)
               ans=j-k+1;
            continue;
        }
        else{
            while(!check(no_a,no_c,no_g,no_t,count_a,count_c,count_g,count_t)){
                j++;
                if(j>=n)
                  break;
            if(gene[j]=='A' && no_a>0)
               count_a++;
            if(gene[j]=='C' && no_c>0)
               count_c++;
            if(gene[j]=='G' && no_g>0)
               count_g++;
            if(gene[j]=='T' && no_t>0)
               count_t++;

            }
            if(j!=n && j-k+1<ans)
               ans=j-k+1;
        }
    }
 if(ans<=1)
    ans=0;
return ans;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string gene;
    getline(cin, gene);

    int result = steadyGene(gene);

    fout << result << "\n";

    fout.close();

    return 0;
}
