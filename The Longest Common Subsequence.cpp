#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;

#define N 111 // upper bound on n and m

int A[N];
int B[N];
int f[N][N];
vector<int> res;

void reconstruct(int i, int j) {
    if (i == 0 || j == 0) {
        res.clear();
    } else if (A[i] == B[j]) {
        reconstruct(i-1, j-1);
        res.push_back(A[i]);
    } else if (f[i][j] == f[i-1][j]) {
        reconstruct(i-1, j);
    } else {
        reconstruct(i, j-1);
    }
}


int main() {
    int n, m, v;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> A[i];
    for (int i = 1; i <= m; i++) cin >> B[i];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0) {
                f[i][j] = 0;
            } else if (A[i] == B[j]) {
                f[i][j] = 1 + f[i-1][j-1];
            } else {
                f[i][j] = max(f[i-1][j], f[i][j-1]);
            }
        }
    }

    reconstruct(n, m);
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
}