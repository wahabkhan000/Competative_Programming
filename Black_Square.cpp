#include <iostream>
using std::cin,std::cout,std::endl,std::string;
int main() {
    int arr[4];
    for (int i=0;i<4;i++) {
        cin>>arr[i];
    }
    string sequence;
    cin>>sequence;
    long long int sum = 0;
    for (int i=0;i<sequence.length();i++) {
        sum += arr[sequence[i]-49];
    }
    cout<<sum<<endl;
}
