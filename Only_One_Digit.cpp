#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i=0;i<n;i++) {
        int a;
        cin>>a;
        int arr[a];
        int j=0;
        while (a>0) {
            int rem=a%10;
            a/=10;
            arr[j]=rem;
            j++;
        }
        int b=arr[0];
        for (int k=0;k<j;k++) {
            if (b>arr[k]) {
                b=arr[k];
            }
        }
        cout<<b<<endl;
    }
}
