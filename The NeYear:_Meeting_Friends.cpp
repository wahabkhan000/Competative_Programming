#include <iostream>
using namespace std;
int main() {
    int n=3;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int p=0;
    int a=0;
    p=arr[0];
    a=arr[0];
    for (int i=0;i<n;i++) {
        if (p<arr[i]) {
            p=arr[i];
        }
        if (a>arr[i]) {
            a=arr[i];
        }
    }
    int c=0;
    int d=0;
    for (int i=0;i<n;i++) {
        if (arr[i]!=a&&arr[i]!=p) {
            c=arr[i]-a;
            d=p-arr[i];
        }
    }
    cout<<c+d;
}
