#include <iostream>
using namespace std;
int main() {
    string m;
    cin>>m;
    string a;
    string s;
    cin>>a>>s;
    string p=m+a;
    string r;
    int n=s.length();
    int b=p.length();
    if (n!=b) {
        cout<<"NO"<<endl;
    }
    else {
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                if (p[i]==s[j]) {
                    s[j]='*';
                    p[i]='*';
                    break;
                }
            }
        }
        if (s==p) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
