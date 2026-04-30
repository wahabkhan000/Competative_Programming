#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=0;i<n;i++) {
        int length;
        cin>>length;
        string s;
        cin>>s;
        int a=0;
        int b=0;
        for (int j=0;j<length;j++) {
            if (s[j]=='(') {
                a++;
            }
            else {
                b++;
            }
        }
        if (a==b) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
