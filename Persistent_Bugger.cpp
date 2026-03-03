//39 --> 3 (because 3*9 = 27, 2*7 = 14, 1*4 = 4 and 4 has only one digit, there are 3 multiplications)
//4 --> 0 (because 4 is already a one-digit number, there is no multiplication)
#include <iostream>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    int count=0;
    int f=1;
    if (n<10) {
        cout<<"0";
    }
    else {
        while (n>0) {
            f=1;
            while (n>0) {
                int rem=n%10;
                n=n/10;
                f=f*rem;
            }
            count++;
            if (f<10) {
                cout<< count;
                return 0;
            }
            else {
                n=f;
            }
        }
    }
}
