#include <iostream>
using namespace std;
int main(){
    int n, i, s, d, c;
    int flip = 0;
    cin>>n;
    for (i = 0; i < n-1; i++) {
    cin>>s>>d>>c;
    flip ^= c;
    }
    cout<<flip<<endl;
}
