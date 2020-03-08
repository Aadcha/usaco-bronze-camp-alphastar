#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;
int explosion(int cow[], int start, bool l, int n);
int main(){
    int n = 0;
    int best = 0;
    cin >> n;
    int cow[n];
    for(int i = 0; i < n; i++)
       cin>>cow[i];
    sort(cow, cow + n);
    best=1;
    for (int i=0;i<n;i++){
        int l=explosion(cow, i, 1, n);
        int r=explosion(cow, i, 0, n);
        int counter=r-l+1;
        if (counter>best)
            best=counter;
    }
    cout<<best;
}
int explosion(int cow[], int start, bool l, int n){
    int last=start;
    int radius=1;
    int d;
    if (l==true)
        d=-1;
    else
        d=1;
    if(l==true){
    while (last>0 && last-1<n-1){
        int curr=last;
        while ((curr+d>=0 &&curr+d<n)&&abs(cow[curr + d]-cow[last])<=radius){
             curr+=d;
        }
            if(curr==last)
                break;
            last=curr;
            radius++;
        }
    }
    else{
        while(last+1>0&&last<n-1){
            int curr=last;
            while((curr+d>=0 && curr+d<n) && abs(cow[curr + d] - cow[last]) <= radius){
                curr+=d;
            }
            if(curr==last)
                break;
            last=curr;
            radius++;
        }
    }
    return last;
}
