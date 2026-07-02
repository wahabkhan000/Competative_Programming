#include <iostream>
using std::cin,std::cout,std::endl,std::string;
string incr(string s,int count) {
    int n =s.length();
    for (int i=n-1;i>=0;i--) {
        if (s[i]<'9') {
            s[i]++;
            return s;
        }
        else {
            s[i] = '0';
        }
    }
    string a;
    if (count == n) {
        a+='1';
    }
    for (int i=0;i<s.length();i++) {
        a+=s[i];
    }
    return a;
}

int main() {
    string str;
    cin>>str;
    string ans;
    string sub;
    int count = 0;
    int index = -1;
    for (int i = str.length()-1;i>=0;i--) {
        if (str[i]>='0' && str[i]<='9') {
            if (str[i] == '9') {
                count++;
            }
            ans=str[i]+ans;
            index = i;
        }
        else {
            break;
        }
    }
    for (int i=0;i<index;i++) {
        sub+=str[i];
    }
    if (index == -1) {
        cout<<str+std::to_string(1);
    }
    else {
        cout<<sub+incr(ans,count);
    }
}
