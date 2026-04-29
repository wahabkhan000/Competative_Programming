#include <iostream>
using namespace std;
int main() {
    int z;
    cin>>z;
    for (int l=0;l<z;l++) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string p;
        cin>>p;
        string r;
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
