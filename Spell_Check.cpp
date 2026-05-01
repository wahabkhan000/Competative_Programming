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
        string p="Timur";
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                if (s[i]==p[j]) {
                    s[i]='*';
                    p[j]='*';
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
