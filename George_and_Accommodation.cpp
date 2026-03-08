#include <iostream>
using namespace std;
int main() {
        int n;
        cin>>n;
        int count=0;
        int a;
        int b;
        for (int i=0;i<n;i++) {
            cin>>a;
            cin>>b;
            if (a+1<b) {
                count++;
            }
        }
        cout<<count;
}
