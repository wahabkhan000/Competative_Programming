# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int k=0;k<n;k++){
        int arr[2];
        cin>>arr[0];
        cin>>arr[1];
        if (arr[0]>arr[1]) {
            cout<<arr[1]<<" "<<arr[0]<<endl;
        }
        else {
            cout<<arr[0]<<" "<<arr[1]<<endl;
        }
    }
}
