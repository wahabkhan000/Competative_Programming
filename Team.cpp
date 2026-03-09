#include <iostream>
using namespace std;
int main() {
        int n;
        cin>>n;
        int count=0;
        for (int i=0;i<n;i++) {
            int a;
            int b;
            int c;
            cin>>a;
            cin>>b;
            cin>>c;
            if ((a==1&&b==1)||(b==1&&c==1)||(a==1&&c==1)) {
                count++;
            }
        }
        cout<<count;
}
