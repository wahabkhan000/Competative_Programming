#include <iostream>
using namespace std;
int main() {
    int j=1;
    int n;
    cin>>n;
    long long int a=0;
    long long int b=1;
    long long int c=0;
    int count=0;
    int sum=0;
    while (j>0) {
        c=c+a;
        sum+=c;
        if (count==n+1) {
            cout<<sum*4;
            return 0;
        }
        count++;
        a=b;
        b=c;
        j++;
    }
}
