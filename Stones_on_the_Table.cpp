#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    int count=0;
    cin>>s;
    int start=0;
    for (int i=0;i<n;i++) {
        if (i>0) {
            if (s[start]==s[start+1]) {
                count++;
            }
            start++;
        }
    }
    cout<<count;
}
