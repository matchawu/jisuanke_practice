#include<iostream>
using namespace std;
int main(){
    int m,n,t;
    cin>>m>>n>>t;
    int num[m+1][n+1]={};
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           cin>>num[i][j]; 
        }
    }
    
    if(t==1){
        for(i=m-1;i>=0;i--){
            for(j=0;j<n;j++){
                cout<<num[i][j]<<" ";
            }
            cout<<endl;
        }
    }else{
        for(i=0;i<m;i++){
            for(j=n-1;j>=0;j--){
                cout<<num[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
}
