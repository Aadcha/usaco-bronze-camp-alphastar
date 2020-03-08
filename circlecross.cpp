#include<iostream>
using namespace std;
int ans;
string b;
pair <int, int> a[27];
int main() {
    cin>>b;
    for (int i=0; i<27;i++) {
        a[i].first=-1;
        a[i].second=-1;
    }
    for (int i=0;i<52;i++) {
        if (a[b[i]-64].first==-1) {
            a[b[i]-64].first=i+1;
            continue;
        }
        if (a[b[i]-64].second==-1) {
            a[b[i]-64].second=i + 1;
            continue;
        }
    }
    for (int i=1;i<27;i++) {
        for (int j=1;j<27;j++) {
            if (i==j)
              continue;
            if (a[j].first>a[i].first&&a[j].first<a[i].second&&a[j].second>a[i].second) {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
