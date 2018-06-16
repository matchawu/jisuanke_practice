#include<iostream>
using namespace std;
int main(){
    int fabo[55]={};
    fabo[0]=0;
    fabo[1]=1;
    int i;
    for(i=2;i<=50;i++){
        fabo[i]=fabo[i-1]+fabo[i-2];
    }
    int a,b;
    cin>>a;
    b = fabo[a];
    cout<<b<<endl;
}
