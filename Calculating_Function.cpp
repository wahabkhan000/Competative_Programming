#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long int f=0;
    long long int b;
    b=n/2;
    f=n-b;
    if (n%2==0) {
        cout<<f<<endl;
    }
    else {
        cout<<-1*f<<endl;
    }
    return 0;
}
