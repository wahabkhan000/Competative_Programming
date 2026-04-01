#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin>>s;
    int a=s.length();
    int i =0;
    int up=0;
    int down=0;
    string m=s;
    string n=s;
    while (a>0) {
        if (s[i]>='a' && s[i]<='z') {
            down++;
            m[i]=m[i]-32;
        }
        else {
            up++;
            n[i]=n[i]+32;
        }
        i++;
        a--;
    }
    if (up>down) {
        cout<<m<<endl;
    }
    else {
        cout<<n<<endl;
    }
}
