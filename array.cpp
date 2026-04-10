# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int a=1;
    int end=n;
    for (int i=1;i<=n;i++) {
        if (arr[a]!=arr[end]) {
            cout<<a-1;
            break;
        }
        end--,a++;
    }
}
