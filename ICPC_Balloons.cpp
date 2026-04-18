# include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    for (int k=0;k<a;k++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count1=0;
        for (int i=0;i<n;i++) {
            int count=1;
            for (int j=i+1;j<n;j++) {
                if (s[j]==s[i]) {
                    count++;
                }
            }
            if (count==1) {
                count1=count1+(2*count);
            }
            else {
                count1+=1;
            }
        }
        cout<<count1<<endl;
    }
}
