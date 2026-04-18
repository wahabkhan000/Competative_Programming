# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int k=0;k<n;k++){
        int a,b,c;
        cin>>a>>b>>c;
        if (a>b&&a>c) {
            cout<<0<<" ";
        }
        else {
            if (b>=c) {
                cout<<(b-a)+1<<" ";
            }
            else {
                cout<<(c-a)+1<<" ";
            }
        }
        if (b>a&&b>c) {
            cout<<0<<" ";
        }
        else {
            if (a>=c) {
                cout<<(a-b)+1<<" ";
            }
            else {
                cout<<(c-b)+1<<" ";
            }
        }
        if (c>a&&c>b) {
            cout<<0<<" ";
        }
        else {
            if (a>=b) {
                cout<<(a-c)+1<<" ";
            }
            else {
                cout<<(b-c)+1<<" ";
            }
        }
        cout<<endl;
    }
}
