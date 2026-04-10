# include <iostream>
using namespace std;
int main() {
    string a;
    cin>>a;
    string b;
    cin>>b;
    int a_length=a.length();
    int b_length=b.length();
    int count=a_length;
    int e=0;
    for (int i=0;i<a_length;i++) {
        int f=a[i]-48;
        int c=count-i-1;
        int d=1;
        while (c--) {
            d=d*10;
        }
        f=f*d;
        e=e+f;
    }
    int count1=b_length;
    int h=0;
    for (int j=0;j<b_length;j++) {
        int g=b[j]-48;
        int i=count1-j-1;
        int d=1;
        while (i--) {
            d=d*10;
        }
        g=g*d;
        h=h+g;
    }
    int z=e+h;
    string n;
    if (z==0) {
        cout<<to_string(z);
    }
    else {
        while (z>0) {
            int rem=z%10;
            z/=10;
            n=to_string(rem)+n;
        }
        cout<<n;
    }
    return 0;
}
