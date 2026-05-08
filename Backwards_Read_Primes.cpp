#include <iostream>
#include <cmath>
using namespace std;
int prime(long long int num) {
    string s=to_string(num);
    int n=s.length();
    int l=n-1;
    long long int f=0;
    for (long long int k=n-1;k>=0;k--) {
        int a=s[k]-48;
        a*=pow(10,l);
        l--;
        f+=a;
    }
    int count=0;
    for (long long int i=1;i<=f;i++) {
        if (f%i==0) {
            count++;
        }
    }
    if (count==2&&to_string(f)!=s) {
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int start=0,end=0;
    cin>>start>>end;
    string s;
    bool n=false;
    for (long long int i=start;i<=end;i++) {
        int count=0;
        for (long long int j=1;j<=end;j++) {
            if (i%j==0) {
                count++;
            }
        }
        if (count==2) {
            if (prime(i)==1) {
                if (n) {
                    s+=" ";
                }
                s+=to_string(i);
                n=true;
            }
        }
    }
    if (s.length()==0) {
        cout<<"0";
    }
    else {
        cout<<s<<endl;
    }
}
