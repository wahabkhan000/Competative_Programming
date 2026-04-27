#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int a=arr[0];
    for (int i=0;i<n;i++) {
        if (a<arr[i]) {
            a=arr[i];
        }
    }
    int b[n];
    for (int k=0;k<n;k++) {
        int p=arr[0];
        int j=0;
        for (int i=0;i<n;i++) {
            if (p>arr[i]) {
                p=arr[i];
                j=i;
            }
        }
        arr[j]=a+1;
        b[k]=p;
    }
    for (int i=0;i<n;i++) {
        cout<<b[i]<<endl;
    }
}
