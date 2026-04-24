#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int p;
    cin>>p;
    int b=n;
    int e=b;
    int count=p-1;
    while (n>0) {
        n/=10;
        count++;
    }
    int f=0;
    int d=count;
    while (b>0) {
        int rem=b%10;
        b/=10;
        int c=pow(rem,d);
        f=f+c;
        d--;
    }
    if (f%e==0) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}
