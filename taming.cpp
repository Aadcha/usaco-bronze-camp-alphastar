#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int n;
	cin>>n;
  int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	if(a[0]>0)
	{
		cout<<-1<<endl;
		return 0;
	}
	a[0]=0;
	int check=-1;
	int counter=0;
	int pos=0;
	for(int i=n-1;i>=0;i--)
	{
		if(check!=-1 && a[i]!=-1 && a[i]!=check)
		{
			cout<<-1 <<endl;
			return 0;
		}
		if(check==-1)
			check=a[i];
		if(a[i]==-1)
			a[i]=check;
		if(a[i]==0)
			counter++;
		if(a[i]==-1)
			pos++;
		if(check>-1)
			check--;
	}
	cout<<counter<<" "<<counter+pos<<endl;
}
