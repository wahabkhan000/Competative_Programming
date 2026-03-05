#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int start=0;
    int count=0;
    for (int i=0;i<a;i++) {
        string s;
        cin>>s;
        if (s[start]=='X') {
            if (s[start+1]=='+') {
                count++;
            }
            else {
                count--;
            }
        }
        else {
            if (s[start]!='X') {
                if (s[start]=='+') {
                    count++;
                }
                else {
                    count--;
                }
            }
        }
    }
    cout<<count;
}
