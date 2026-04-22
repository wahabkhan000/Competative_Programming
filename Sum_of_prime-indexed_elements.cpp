# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int v[n];
    for (int i=0;i<n;i++) {
        cin>>v[i];
    }
    int sum=0;
    for (int i=2;i<n;i++) {
        int count=0;
        for (int j=1;j<n;j++) {
            if (i%j==0) {
                count++;
            }
        }
        if (count==2) {
            sum+=v[i];
        }
    }
    cout<<sum<<endl;
}
