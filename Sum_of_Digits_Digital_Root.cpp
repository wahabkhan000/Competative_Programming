#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int b=n;
    int f=0;
    if (n<10) {
        cout<<"The Digital root of "<<b<<" is "<<f<<endl;
    }
    else {
        while (n>0) {
            f=0;
            while (n>0) {
                int rem=n%10;
                n=n/10;
                f=f+rem;
            }
            if (f<10) {
                //if n==942;(9+4+2=15=1+5=6)
                cout<<"The Digital root of "<<b<<" is "<<f<<endl;
                return 0;
            }
            else {
                n=f;
            }
        }
    }
}
