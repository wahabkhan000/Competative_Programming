#include<iostream>
using namespace std;
int main(){
    int total=0;
    cin>>total;
    for(int i=0;i<total;i++) {
        int x=0,y=0,x1=0,y1=0,x2=0,y2=0,x3=0,y3=0;
        cin>>x>>y>>x1>>y1>>x2>>y2>>x3>>y3;
        if (x1-x!=0) {
            cout<<(x1-x)*(x1-x)<<endl;
        }
        else{
            cout<<(y1-y)*(y1-y)<<endl;
        }
    }
}
