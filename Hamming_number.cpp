#include <iostream>
#include <vector>
#include <algorithm>
using std::cout,std::cin,std::endl,std::vector,std::string;

int main() {
    int n = 0;
    cin>>n;
    vector<long long int>a(n);
    a[0] = 1;
    int i2 = 0, i3 = 0, i5 = 0;
    for (int i=1;i<n;i++) {
        long long int num2 = a[i2]*2;
        long long int num3 = a[i3]*3;
        long long int num5 = a[i5]*5;

        long long int min = std::min({num2,num3,num5});

        if (min == num2) {
            i2++;
        }
        if (min == num3) {
            i3++;
        }
        if (min == num5) {
            i5++;
        }
        a[i] = min;
    }
    cout<<a[n-1];
}
