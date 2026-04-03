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
        while (j>0) {
                c=c+a;
                count++;
                if (count==n) {
                        cout<<c;
                        return 0;
                }
                a=b;
                b=c;
                j++;
        }
}
