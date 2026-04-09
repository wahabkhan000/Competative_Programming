# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        int a,b,c;
        cin>>a>>b>>c;
        if (a>b&&a<c||a>c&&a<b) {
            cout<<a<<endl;
        }
        else if (b>a&&b<c||b<a&&b>c) {
            cout<<b<<endl;
        }
        else if (c>a&&c<b||c<a&&c>b) {
            cout<<c<<endl;
        }
    }
}
