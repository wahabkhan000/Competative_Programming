#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=0;i<n;i++) {
        int a;
        cin>>a;
        int c=a;
        int arr[a];
        int f=0;
        for (int j=0;j<a;j++) {
            cin>>arr[j];
        }
        while (c>0){
        int p=arr[0];
        int l=0;
        int b=0;
        while (a>0) {
            if (p<arr[l]) {
                p=arr[l];
                b=l;
            }
            a--;
            l++;
        }
        swap(arr[b],arr[0]);
            f=f+arr[0];
            c--;
    }
        cout<<f<<endl;
    }
}
