# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count1=0;
    for (int i=0;i<n;i++) {
        int count=1;
        for (int j=i+1;j<n;j++) {
            if (s[i]>='A'&&s[i]<='Z') {
                s[i]+=32;
            }
            if (s[j]>='A'&&s[j]<='Z') {
                s[j]+=32;
            }
            if (s[j]==s[i]) {
                count++;
            }
        }
        if (count==1) {
            count1+=count;
        }
    }
    if (count1==26) {
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}
