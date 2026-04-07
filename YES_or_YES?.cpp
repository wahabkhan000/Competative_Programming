# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=0;i<n;i++) {
        string s;
        cin>>s;
        int b=s.length();
        for (int j=0;j<b;j++) {
            if (s[j]>='a'&&s[j]<='z') {
                s[j]-=32;
            }
        }
        if (s=="YES") {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
