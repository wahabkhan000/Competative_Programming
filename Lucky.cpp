#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
    for (int i=0;i<n;i++) {
        int s;
        cin>>s;
        string m;
        int start=0;
        int f=0;
        int e=0;
        while (s>0) {
            int rem = s%10;
            s=s/10;
            if (start<3) {
                f=f+rem;
            }
            else {
                e=e+rem;
            }
            start++;
        }
        if (f==e) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
