#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
using namespace std;
int n;
char matrix[11][11];
char m[11][11];
char temp[11][11];
bool r90(){
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            if(m[j][n-1-i] != matrix[i][j] ){
                return false;
            }
        }
    }
    return true;
}
bool r180(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(m[n-1-i][n-1-j]!=matrix[i][j]){
                return false;
            }
        }
    }
    return true;
}
bool r270(){
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            if( m[n-1-j][i] != matrix[i][j] ){
                return false;
            }
        }
    }
    return true;
}
bool same(){
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            if( m[i][j] != matrix[i][j] ){
                return false;
            }
        }
    }
    return true;
}
bool reflect(){
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            if( m[j][n-1-i] != matrix[j][i] ){
                return false;
            }
        }
    }
    return true;
}
bool combination(){
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            temp[j][n-1-i] = matrix[j][i];
        }
    }
    bool combo = true;

    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            if( m[j][n-1-i] != temp[i][j] ){
                combo = false;
            }
        }
    }
    if(combo){
        return true;
    }else{
        combo = true;
        for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
                if( m[n-1-i][n-1-j] != temp[i][j] ){
                    combo = false;
                }
            }
        }
        if(combo ){
            return true;
        }
        for( int i = 0; i < n; i++ ){
            for( int j = 0; j < n; j++ ){
                if( m[n-1-j][i] != temp[i][j] ){
                    return false;
                }
            }
        }
        return true;
    }
}
int main() {
    cin>> n;
    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < n; j++ ){
            cin>>matrix[i][j];
        }
    }
    for(int i = 0; i < n; i++ ){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    if(r90()){
        cout<<1<<endl;
    }
    else if(r180()){
        cout<<2<<endl;
    }
    else if(r270()){
        cout<<3<<endl;
    }
    else if(reflect()){
        cout<<4<<endl;
    }
    else if(combination()){
        cout<<5<<endl;
    }
    else if(same()){
        cout<<6<<endl;
    }
    else{
        cout<<7<<endl;
    }
    return 0;
}
