# include <iostream>
using namespace std;
int main() {
    int first;
    cin>>first;
    int second;
    cin>>second;
    int gap;
    cin>>gap;
    int a,b=0;
    int arr[10000];
    int size=0;
    for (int i=first;i<=second;i++) {
        int count=0;
        for (int j=1;j<=i;j++) {
            if (i%j==0) {
                count++;
            }
        }
        if (count==2) {
            a=i;
            if ((a-b)==gap && a>0&&b>0) {
                arr[size]=b;
                size++;
                arr[size]=a;
                size++;
            }
            b=a;
        }
    }
    for (int i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}
