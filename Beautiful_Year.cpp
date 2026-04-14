#include<iostream>
using namespace std;
int main() {
    int count=1;
    int a;
    cin>>a;
    int n=a+1;
    int f=n;
    while (count>0) {
        int rem=n%10;
        n=n/10;
        int rem1=n%10;
        n=n/10;
        int rem2=n%10;
        n=n/10;
        int rem3=n%10;
        n=n/10;
        if (rem==rem1||rem==rem2||rem==rem3||rem1==rem2||rem1==rem3||rem2==rem3) {
            f++;
        }
        else {
            cout<<f<<endl;
            return 0;
        }
        count++;
        n=f;
    }
}
