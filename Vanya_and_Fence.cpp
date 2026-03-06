#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int h;
    cin>>h;
    int j;
    int count=0;
    for (int i=0;i<n;i++) {
        cin>>j;
        if (j<=h) {
            count++;
        }
        else {
            count=count+2;
        }
    }
    cout<<count<<endl;
}
