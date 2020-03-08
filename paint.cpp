#include<iostream>
#include<fstream>
#include<algorithm>
int covered[101];
using namespace std;
int main()
    {
    int a, b, c, d, count=0;
    cin>>a>>b>>c>>d;
        for(int i = 0; i < 100; i++) {
            if(i >= a && i+1 <= b) {
                count++;
            }
            else if(i >= c && i+1 <= d) {
                count++;
            }
        }
    cout<<count;
}
