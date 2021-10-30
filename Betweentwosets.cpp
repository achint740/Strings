#include <bits/stdc++.h>
 
using namespace std;

int gcd(int a, int b)
{
    if(a==0)
        return b;

    if(b==0)
        return a;

    if(a == b)
        return a;

    if(a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
 
int main()
{
    int n, m, a[100], b[100], c[100], count=0 , k=0, i, j;
    
    cin >> n >> m;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(j=0; j<m; j++)
    {
        cin >> b[j];
    }

    int start = lcm(a[0], a[1]);

    cout << start << "\n";

    for(i=start; i<b[0]; i++)
    {
        if(start%a[i]==0)
        {
            c[i] = start;
            count++;
        }
    }

    for(i=0; i<count; i++)
    {
        cout << c[i] << " ";
    }
 
    return 0;
}