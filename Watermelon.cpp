#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    if (a%2==0) {
        int b=a/2;
        if (b%2!=0&&b==1) {
            cout<<"NO";
        }
        else {
            cout<<"YES";
        }
    }
    else {
        cout<<"NO";
    }
}
