#include<bits/stdc++.h>
using namespace std;
int x[51][51], y[51];
int main() {
    int n, m, d, s, max1 = 0;
    cin>>n>>m>>d>>s;
    for (int i=1;i<=m;i++) {
        y[i] = 1;
    }

    for (int i=0;i<=50;i++) {
        for (int j=0;j<=50;j++) {
            x[i][j]=110;
        }
    }
    for (int i=0;i<d;i++) {
        int p, m, t;
        cin>>p>>m>>t;
        x[p][m] = t;
    }

    for (int i=0;i<s;i++) {
        int p, t;
        cin>>p>>t;

        for (int j=1;j<=m;j++) {
            if (x[p][j]>=t) {
                y[j]=0;
            }
        }
    }
    for (int i=1;i<=m;i++) {
        if (y[i]==1) {
            int count=0;
            for (int j=1; j<=n;j++) {
                if (x[j][i]!=110) {
                    count++;
                }
            }
            if (count>max1)
                max1=count;
        }
    }
    cout<<max1;
}

