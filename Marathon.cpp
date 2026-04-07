# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a=4;
    int arr[a];
    for (int j=0;j<n;j++){
        int count=0;
        for (int i=0;i<a;i++) {
            cin>>arr[i];
        }
        int p=arr[0];
        for (int i=0;i<a;i++) {
            if (p<arr[i]) {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
