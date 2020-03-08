#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n, b;
    cin>>n>>b;
    int xl[n], yl[n];
    for(int i=0;i<n;i++)
        cin>>xl[i]>>yl[i];
    int ans = n;
		for(int i = 0; i < n; i++) 
    {
			for(int j = 0; j < n; j++) {
				int xd = xl[i]+1;
				int yd = yl[j]+1;
				int ul = 0;
				int ur = 0;
				int ll = 0;
				int lr = 0;
				for(int i = 0; i < n; i++) 
        {
					if(xl[i] < xd && yl[i] < yd) {
						ll++;
					}
					if(xl[i] < xd && yl[i] > yd) {
						ul++;
					}
					if(xl[i] > xd && yl[i] < yd) {
						lr++;
					}
					if(xl[i] > xd && yl[i] > yd) {
						ur++;
					}
				}
				int ifbest = 0;
				if(ul > ifbest)
        {
					ifbest = ul;
				}
				if(ur > ifbest) {
				  ifbest = ur;
				}
				if(ll > ifbest) {
					ifbest = ll;
				}
				if(lr > ifbest) {
					ifbest = lr;
				}
				if(ifbest < ans) {
					ans = ifbest;
				}
			}
		}
    cout<<ans;
}
