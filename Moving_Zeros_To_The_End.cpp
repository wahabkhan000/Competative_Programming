# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int brr[n];
    int j=0;
    for (int i=0;i<n;i++) {
        if (arr[i]!=0) {
            brr[j]=arr[i];
            j++;
        }
    }
    for (int i=j;i<n;i++) {
        brr[i]=0;
    }
    for (int i=0;i<n;i++) {
        cout<<brr[i]<<endl;
    }
}
