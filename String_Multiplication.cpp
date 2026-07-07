#include <iostream>
#include <vector>
using std::cout,std::cin,std::string,std::endl,std::vector;
int main() {
    string a;cin>>a;
    string b;cin>>b;
    int first = a.length();
    int second = b.length();
    vector<int>multiply(first+second,0);
    for (int i=first-1;i>=0;i--) {
        for (int j=second-1;j>=0;j--) {
            int first_num = 0, second_num = 0;
            first_num = a[i]-48;
            second_num = b[j]-48;
            int prod = first_num*second_num;

            int sum = prod+multiply[i+j+1];
            multiply[i+j+1] = sum%10;
            multiply[i+j] += sum/10;
        }
    }
    string m = "";
    for (int x : multiply) {
        if (!(m.empty() && x==0)) {
            m+=std::to_string(x);
        }
    }
    cout<<m<<endl;
}
