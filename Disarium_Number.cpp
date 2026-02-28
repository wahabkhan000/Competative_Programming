#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=n;
    int b=n;
    int count=0;
    while (a>0) {
        int rem=a%10;
        a=a/10;
        count++;
    }
    int f=0;
    while (n>0) {
        int rem=n%10;
        int c=pow(rem,count);
        n=n/10;
        f=f+c;
        count--;
    }
    cout<<f<<endl;
    if (f==b) {
        cout<<"Disarium";
    }
    else {
        cout<<"not Disarium";
    }
}
