#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=0;
    for (int i=0;i<n;i++) {
        int e=7;
        int arr[e];
        for (int j=0;j<7;j++) {
            cin>>arr[j];
        }
        int p=arr[0];
        for (int k=0;k<7;k++) {
            if (p<arr[k]) {
                p=arr[k];
            }
        }
        for (int b=0;b<7;b++) {
            a=a-arr[b];
        }
        a=a+p+p;
        cout<<a<<endl;
        a=0;
    }
}
