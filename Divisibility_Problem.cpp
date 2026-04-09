# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) {
        int a;
        cin>>a;
        int b;
        cin>>b;
        if (a%b==0) {
            cout<<"0"<<endl;
        }
        else {
            int sum=0;
            while (a>0) {
                sum+=b;
                if (sum>a) {
                    break;
                }
            }
            cout<<sum-a<<endl;
        }
    }
}
