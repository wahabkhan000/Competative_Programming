# include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int count1=0;
    for (int i=0;i<s.length();i++) {
        int count=1;
        for (int j=i+1;j<s.length();j++) {
                if (s[i]==s[j]) {
                    count++;
                }
        }
        if (count==1) {
            count1+=count;
        }
    }
    if (count1%2==0) {
        cout<<"CHAT WITH HER!";
    }
    else {
        cout<<"IGNORE HIM!";
    }
}
