#include <iostream>
    using namespace std;
    int main() {
        int n;
        cin>>n;
        for (int i=1;i<=n;i++) {
            string s;
            cin>>s;
            int start=0;
            int end=s.size();
            if (end<=10) {
                cout<<s<<endl;
            }
            else {
                int m=end-2;
                int last=end-1;
                char c=s[start];
                char d=s[last];
                cout<<c;
                cout<<m;
                cout<<d<<endl;
            }
        }
    }
