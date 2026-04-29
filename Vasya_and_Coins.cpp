#include <iostream>
using namespace std;
int main() {
    int z;
    cin>>z;
    for (int i=0;i<z;i++) {
        int n;
        cin>>n;
        int k;
        cin>>k;
        if (n==0) {
            cout<<1<<endl;;
        }
        else{
            cout<<((k*2)+n)+1<<endl;
        }
    }
}
