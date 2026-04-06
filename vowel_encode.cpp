#include <iostream>
using namespace std;
int main() {
    string str;
    cin>>str;
    int b=str.length();
for (int i=0;i<b;i++) {
        if (str[i]=='a'){
          str[i]='1';
        }
        else if (str[i]=='e'){
          str[i]='2';
        }
        else if (str[i]=='i'){
          str[i]='3';
        }
        else if (str[i]=='o'){
          str[i]='4';
        }
        else if (str[i]=='u'){
          str[i]='5';
        }
    }
    cout<<str;
}
