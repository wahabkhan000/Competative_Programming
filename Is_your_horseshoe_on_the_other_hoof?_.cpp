#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;
    int d;
    cin>>d;
    if (a==b&&a==c&&a==d) {
        cout<<"3";
    }
    else if ((a==b&&a==c)||(b==c&&b==d)||(c==d&&a==d)||(d==a&&d==b)||(a==b&&c==d)||(b==c&&a==d)||(a==c&&b==d)||(a==d&&b==c)) {
        cout<<"2";
    }
    else if (a==b||a==c||a==d||b==c||b==d||c==d) {
        cout<<"1";
    }
    else {
        cout<<"0";
    }
}
