#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int c=n;
    int arr[n];
    int brr[n];
    int f=0;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    while (c>0) {
        int p=arr[0];
        int d=0;
        int e=0;
        for (int i=0;i<n;i++) {
            if (p<arr[i] ) {
                p=arr[i];
                e=i;
            }
        }
        brr[f]=p;
        f++;
        for (int j=0;j<n;j++) {
            if (p>arr[j]) {
                d=arr[j];
            }
        }
        arr[e]=d-1;
        c--;
    }
    for (int x=0;x<n;x++) {
        cout<<brr[x]<<" ";
    }
}
