#include <iostream>
using namespace std;
int main() {
    int z;
    cin>>z;
    for (int i=0;i<z;i++) {
        string s;
        cin>>s;
        for (int j=49;j<57;j++) {
            int e=s[1];
            if (j!=e) {
                string d;
                d+=s[0]+to_string(j-48);
                cout<<d<<endl;
            }
        }
        for (int k=97;k<105;k++) {
            if (k != s[0]) {
                char b=k;
                string c;
                c+=s[1];
                c=b+c;
                cout<<c<<endl;
            }
        }
    }
}
