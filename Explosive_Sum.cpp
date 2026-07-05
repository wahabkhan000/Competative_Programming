#include <iostream>
#include <vector>
using std::cout,std::cin,std::string,std::endl,std::vector;
long long int way(int n) {
    vector<long long>v(n+1,0);
    v[0]=1;
    for (int i=1;i<=n;i++) {
        for (int j=i;j<=n;j++) {
            v[j]+=v[j-i];
        }
    }
    return v[n];
}
int main() {
    int n = 0;
    cin>>n;
    cout<<way(n);
}
