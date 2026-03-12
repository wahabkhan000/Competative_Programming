#include <iostream>
using namespace std;
int main() {
    int k;
    cin>>k;
    long int n;
    cin>>n;
    int w;
    cin>>w;
    int f=0;
    while (w>0) {
        int a=w*k;
        f=f+a;
        w--;
    }
    int b= f-n;
    if (b>0) {
        cout<<b;
    }
    else {
        cout<<"0";
    }
}
