# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    long long int count=0;
    int arr[1000];
    long long int i=0;
    while (n>0) {
        int rem=n%10;
        n/=10;
        count++;
        int a=0;
        a=rem;
        if (count%2==0) {
            a*=2;
            if (a>9) {
                a-=9;
            }
        }
        arr[i]=a;
        i++;
    }
    long long int c=0;
    for (int j=0;j<count;j++) {
        c+=arr[j];
    }
    if (c%10==0) {
        cout<<"true";
    }
    else {
        cout<<"false";
    }
}
