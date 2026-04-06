#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
        for (int i=1;i<=n;i++) {
            if (i==n && i%2!=0) {
                s+="I hate";
            }
            else if (i==n && i%2==0) {
                s+="I love";
            }
            else if (i%2==0) {
                s+="I love that ";
            }
            else if (i%2!=0){
                s+="I hate that ";
            }
        }
    cout<<s+" it";
}
