#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n && n != -1 && n <= 9 && n>=2){
        bool flag = true;
        int ya[n]={};
        string co[n]={};
        int k,x,y,z;
        string name;
        string xname,yname;
        int big,small;
        for(k=0;k<n;k++){
            cin>>x>>y>>z>>name;
            if(name.length()>8){
                flag = false;
            }
            if(flag){
                ya[k]=x*y*z;
                co[k]=name;

            }
            
        }
        
        small = ya[0];
        big = ya[0];    
        xname = co[0];
        yname = co[0];
        for(int p=0;p<n;p++){
            if(ya[p]<small){
                small = ya[p];
                yname = co[p];
            }else if(ya[p]>big){
                big = ya[p];
                xname = co[p];
            }
            //cout<<ya[p]<<" "<<co[p]<<endl;
        }
        //cout<<xname<<" "<<yname<<endl;
        if(flag){
            cout<< xname <<" took clay from "<< yname <<"."<<endl;
        }
        
    }

}
