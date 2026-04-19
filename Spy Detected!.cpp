#include <iostream>
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
            for (int k=0;k<a;k++) {
                int count=0;
                for (int l=0;l<a;l++) {
                    if (arr[k]==arr[l]) {
                        count++;
                    }
                }
                if (count==1) {
                    cout<<k+1<<endl;
                }
            }
        }
}
