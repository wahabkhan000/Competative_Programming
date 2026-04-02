#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int count=0;
    for (long long  int i=5;i<=n;i=i*5) {
        count=count+n/i;;
    }
    cout<<count;
}
