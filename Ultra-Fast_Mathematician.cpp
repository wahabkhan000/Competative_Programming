#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    string m;
    cin>>m;
    int a=s.length();
    int i=0;
    while (a>0) {
        if (s[i]==m[i]) {
            cout<<"0";
        }
        else {
            cout<<"1";
        }
        i++;
        a--;
    }
}
