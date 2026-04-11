#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    for (int i=0;i<n;i++) {
        if (s[i]=='8') {
            count++;
        }
    }
    int b=n/11;
    if (count>=b) {
        cout<<b;
    }
    else {
        cout<<count;
    }
}
