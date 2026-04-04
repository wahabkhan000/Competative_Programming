# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    s=to_string(n);
    int a=s.length();
    int b=a-1;
    string m,z;
    int e;
    bool flag=false;
    for (int i=0;i<a;i++) {
        int f=0;
        int c=0;
        c=b-i;
        int d=1;
        while (c>0) {
            d=d*10;
            c--;
        }
        if (s[i] >= '1' && s[i] <='9') {
            f=s[i]-48;
            e=f*d;
            m=to_string(e);
            if (flag) {
                z=z+" + ";
            }
            z=z+m;
            flag =true;
        }
    }
    cout<<z<<endl;
}
