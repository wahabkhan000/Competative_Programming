#include<iostream>
using namespace std;
int main(){
    int a=0;
    cin>>a;
    int b=0;
    cin>>b;
    int c=0;
    if (a>b) {
        cout<<b<<" ";
        c=a-b;
    }
    else {
        cout<<a<<" ";
        c=b-a;
    }
    cout<<c/2;
}
