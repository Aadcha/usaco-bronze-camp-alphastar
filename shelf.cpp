
#include<iostream>
#include<algorithm>
using namespace std;
int n, b;
int heights [999999];
int ifpos () {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += heights [i];
        if (sum >= b)
            return i + 1;
    }
    return -1;  
}

int main () {
    cin>>n>>b;
    for (int i = 0; i < n; i++)
        cin>>heights[i];

    sort (heights, heights + n);                   
    reverse (heights, heights + n);

    cout<<ifpos();
}


