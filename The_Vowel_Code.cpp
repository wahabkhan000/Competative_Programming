# include <iostream>
using namespace std;

string encode(const std::string &str) {
    string m=str;
    int b=m.length();
    for (int i=0;i<b;i++) {
        if (str[i]=='a'){m[i]='1';}
        else if (str[i]=='e'){m[i]='2';}
        else if (str[i]=='i'){m[i]='3';}
        else if (str[i]=='o'){m[i]='4';}
        else if (str[i]=='u'){m[i]='5';}
    }
    return m;
}

string decode(const std::string &str) {
    string s=str;
    int b=s.length();
    for (int i=0;i<b;i++) {
        if (str[i]=='1') {s[i]='a';}
        else if (str[i]=='2'){s[i]='e';}
        else if (str[i]=='3'){s[i]='i';}
        else if (str[i]=='4') {s[i]='o';}
        else if (str[i]=='5'){s[i]='u';}
    }
    return s;
}
int main() {
    string s;
    cin>>s;
    cout<<encode(s)<<endl;
    cout<<decode(s);
}
