# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    char arr[10]={'c','o','d','e','f','o','r','c','e','s'};
    for (int i=0;i<n;i++) {
        string s;
        cin>>s;
        int count=0;
        for (int j=0;j<10;j++) {
            if (s[j]!=arr[j]) {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
