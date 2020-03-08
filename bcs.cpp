#include<bits/stdc++.h>
using namespace std;
char g[10][10][10], d[10][10];
int n,k;
bool check(int a1, int a2, int b1, int b2, int i1, int j1) {
	char g1[10][10];
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            g1[i][j] = '.';
    }
  }
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (g[i1][i][j] == '#') {
                if (i+a1<0 || i+a1>=n || j+a2<0 || j+a2>=n) return 0;
                    g1[i+a1][j+a2] = '#';
	      }
    }
  }
	for(int i=0;i<n;i++){
        	for(int j=0;j<n;j++){
            if (g[j1][i][j] == '#') {
                if (i+b1<0 || i+b1>=n || j+b2<0 || j+b2>=n)
                    return 0;
                if (g1[i+b1][j+b2] == '#')
                    return 0;
            g1[i+b1][j+b2] = '#';
            }
        }
	}
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (g1[i][j]!=d[i][j])
                return 0;
        }
  }
	return 1;
}
int main() {
	cin>>n>>k;
	for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> d[i][j];
    }
  }
	for(int l=0;l<k;l++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> g[l][i][j];
      }
    }
  }
	for(int a1=-7;a1<8;a1++){
        for(int a2=-7;a2<8;a2++){
            for(int b1=-7;b1<8;b1++){
                for(int b2=-7;b2<8;b2++){
                    for(int i=0;i<k;i++){
                        for(int j=i+1;j<k;j++){
                            if (check(a1,a2,b1,b2,i,j)) {
                                cout << (i+1) << " " << (j+1);
		  	                        return 0;
                }
            }
          }
        }
      }
    }
  }
  return 0;
}
