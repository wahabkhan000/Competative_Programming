# include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int n=0;
    string a;
    bool flag=false;
    for (int i=0;i<s.length();i++) {
        if (s[i]>='A'&&s[i]<='Z') {
            s[i]=s[i]+32;
        }
        if (s[i]>='a'&&s[i]<='z') {
            if(flag){
                a = a + " ";
            }
            n=s[i];
            n=n-96;
            a=a + to_string(n);
            flag = true;
        }
    }
    cout<<a;
}
