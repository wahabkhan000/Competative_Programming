# include <iostream>
using namespace std;
int main() {
    int n=4;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int p=arr[0];
    for (int i=1;i<n;i++) {
        if (p<arr[i]) {
            p=arr[i];
        }
    }
    for (int i=0;i<n;i++) {
        int a=p-arr[i];
        if (a!=0) {
            cout<<a<<" ";
        }
    }
}
