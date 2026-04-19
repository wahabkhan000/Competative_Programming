# include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int b=s.length();
    for (int i=0;i<b;i++) {
        int count=1;
        for (int j=i+1;j<b;j++) {
                if (s[j]==s[i]) {
                count++;
                    s[j]='*'+1;
            }
        }
        if ((s[i]>='A'&&s[i]<='Z')||s[i]>='a'&&s[i]<='z') {
            cout<<s[i]<<" "<<count<<" ";
        }
    }
}
