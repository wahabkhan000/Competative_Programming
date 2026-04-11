#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=0;i<n;i++) {
        string s;
        cin>>s;
        int l=s.length();
        int count=l-3;
        int f=0;
        int a=0;
        for (int j=0;j<l;j++){
            if (j==l-1) {
                a=s[j]-48;
            }
            else if (s[j]!='+'){
                int b=0;
                int d=1;
                b=s[j]-48;
                int m=0;
                m=count-j;
                while (m>0) {
                    d=d*10;
                    m--;
                }
                b=b*d;
                f=f+b;
            }
        }
        cout<<f+a<<endl;
    }
}
