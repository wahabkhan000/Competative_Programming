#include <iostream>
using namespace std;
int main() {
    int b;
    cin>>b;
    int arr[b];
    int count=0;
    for (int i=0;i<b;i++) {
        cin>>arr[i];
    }
    for (int i=0;i<b;i++) {
        if (arr[i]%2 != 0) {
            count++;
        }
    }
    for (int i=0;i<b;i++) {
        if (count>1) {
            if (arr[i]%2 ==0) {
                cout<<arr[i];
            }
        }
        else {
            if (arr[i]%2 != 0) {
                cout<<arr[i];
            }
        }
    }
}
