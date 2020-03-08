#include<iostream>
using namespace std;
bool ifspotty(int c[],int d[]){
      for(int i = 0; i < 4; i++){
            if(c[i] > 0 && d[i] > 0){
                  return false;
            }
      }
      return true;
}
void clear(int c[],int d[]){
      for(int i = 0; i < 4; i++){
            c[i] = 0;
            d[i] = 0;
      }
}
int main(){
      int n,m;
      cin>>n>>m;
      char a[n][m];
      char b[n][m];
      int c[4];
      int d[4];
      int total = 0;
      for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                  cin>>a[i][j];

            }
      }
      for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                 cin>>b[i][j];

            }
      }
      for(int i = 0; i < m; i++){
            clear(c,d);
            for(int j = 0; j < n; j++)
            {
                  if(a[j][i] == 'A')
                    {
                        c[0]++;
                    }
                  else if(a[j][i] == 'C')
                    {
                        c[1]++;
                    }
                  else if(a[j][i] == 'G')
                    {
                        c[2]++;
                    }
                  else{
                        c[3]++;
                      }
            }
            for(int j = 0; j < n; j++){
                  if(b[j][i] == 'A'){
                        d[0]++;
                  }
                  else if(b[j][i] == 'C'){
                        d[1]++;
                  }
                  else if(b[j][i] == 'G'){
                        d[2]++;
                  }
                  else{
                        d[3]++;
                  }
            }
            if(ifspotty(c,d) == true){
                  total++;
            }
      }
      cout<<total<<endl;
}
