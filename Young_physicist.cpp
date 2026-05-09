#include<iostream>
using namespace std;
int main(){
    int test=0;
    cin>>test;
    int x=0,y=0,z=0;
    int x_eq=0,y_eq=0,z_eq=0;
    for(int i=0;i<test;i++){
        cin>>x>>y>>z;
        x_eq+=x;
        y_eq+=y;
        z_eq+=z;
    }
    if (z_eq==0 && x_eq==0 && y_eq==0) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}
