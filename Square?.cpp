#include <iostream>
using namespace std;
int main() {
    int test_case;
    cin>>test_case;
    for (int i=0;i<test_case;i++) {
        int arr[4];
        bool flag=false;
        for (int j=0;j<4;j++) {
            cin>>arr[j];
        }
        for (int k=1;k<4;k++) {
            if (arr[0]!=arr[k]) {
                flag=true;
            }
        }
        if (flag) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
}
