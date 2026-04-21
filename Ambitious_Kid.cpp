# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    for (int i=0;i<n;i++) {
        if (arr[i]<0) {
            arr[i]*=-1;
        }
    }
    int p=arr[0];
    for (int i=0;i<n;i++) {
        if (p>arr[i]) {
            p=arr[i];
        }
    }
    cout<<p;
}
