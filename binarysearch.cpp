#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n, k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  int b[k];
  for(int i=0;i<k;i++)
    cin>>b[i];
  for(int i=0;i<k;i++)
  {
    int count = 0;
    int low=0, high=n;
    while(low<=high){
      int mid=(low+high)/2;
      if((low+1 == high) || low==high ){
        if(a[low] == b[i]){
            cout<<low<<endl;
            break;
        }else if(a[high]==b[i]){
            cout<<high<<endl;
            break;
        }
        else{
          cout<<-1<<endl;
          break;
        }   
      }

      if(a[mid]<b[i])
      {
        low=mid;
      }
      else if(a[mid]>=b[i])
      {
        high=mid;
      }
      /*
      else if(a[mid]==b[i]){
        cout<<mid<<endl;
        break;
      }
      */
   //   cout<<low<<" "<<high<<endl;

    }
  }
}
