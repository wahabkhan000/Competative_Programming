# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[100];
    int k=1;
    for (int i=1;i<=n;i++) {
        int count=0;
        for (int j=1;j<=i;j++) {
            if (i%j==0) {
                count++;
            }
        }
        if (count==2) {
            arr[k]=i;
            k++;
        }
    }
    int count_num=0;
    for (int i=1;i<=n;i++) {
        int count=0;
        for (int j=1;j<=k;j++) {
            if (i%arr[j]==0) {
                count++;
            }
        }
        if (count==2) {
            count_num++;
        }
    }
    cout<<count_num;
}
