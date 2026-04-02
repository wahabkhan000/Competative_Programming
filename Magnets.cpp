#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=0;
    int count=0;
    for (int i=0;i<n;i++) {
        int b;
        cin>>b;
        if (a != b) {
            count++;
        }
        a=b;
    }
    cout<<count<<endl;
}
