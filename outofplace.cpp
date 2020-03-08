#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h[n];
    int s[n];
    for(int i = 0; i < n; i++) {
			cin >> h[i];
			s[i] = h[i];
		}
    sort(s, s+n);
    int count = -1;
		for(int a = 0; a < n; a++) {
			if(s[a] != h[a]) {
				count++;
			}
		}
    cout<<max(0, count);
}
