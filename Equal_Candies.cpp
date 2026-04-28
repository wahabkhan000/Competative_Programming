#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=0;i<n;i++) {
        int a;
        cin>>a;
        int arr[a];
        for (int j=0;j<a;j++) {
            cin>>arr[j];
        }
        int count=0;
        int p=arr[0];
        int m=p;
        for (int k=0;k<a;k++) {
            if (p>arr[k]) {
                p=arr[k];
            }
            if (m==arr[k]) {
                count++;
            }
        }
        if (count==a) {
            cout<<0<<endl;
        }
        else {
            int sum=0;
            for (int b=0;b<a;b++) {
                int z=arr[b];
                int c=0;
                c=z-p;
                sum+=c;
            }
            cout<<sum<<endl;
        }
    }
}
