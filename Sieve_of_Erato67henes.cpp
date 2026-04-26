#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    for (int k=0;k<a;k++) {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int count=0;
        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                if (arr[i]*arr[j]==67||arr[i]==67) {
                    count=1;
                }
            }
        }
        if (count==1) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
