#include<iostream>
#include<cmath>
using namespace std;
bool check(int x1, int y1, int x2, int y2, int x3, int y3) {
		return x1 >= x2 && x1 <= x3 && y1 >= y2 && y1 <= y3;
	}
int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    int amountofcorners=0;
    if(check(x1, y1, x3, y3, x4, y4))
        amountofcorners++;
    if(check(x1, y2, x3, y3, x4, y4))
        amountofcorners++;
    if(check(x2, y1, x3, y3, x4, y4))
        amountofcorners++;
    if(check(x2, y2, x3, y3, x4, y4))
        amountofcorners++;
    if( amountofcorners<2)
    {
        cout<<(x2-x1)*(y2-y1);
    }
    else if(amountofcorners == 4)
    {
        cout<<0;
    }
    else {
			int x5 = max(x1, x3);
			int x6= min(x2, x4);
			int y5 = max(y1, y3);
			int y6= min(y2, y4);
      cout<<(abs(x2-x1))*abs((y2-y1))-abs((x6-x5)*abs((y6-y5)));
    }
}

