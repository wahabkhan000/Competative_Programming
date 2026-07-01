#include <iostream>
using std::cin,std::cout,std::endl,std::string;
int main() {
    int test = 0;
    cin>>test;
    for (int i=0;i<test;i++) {
        int length = 0;
        cin>>length;
        string input;
        cin>>input;
        int count_1 = 0;
        int count_2 = 0;
        for (int j=0;j<length;j++) {
            if (input[j] == '(') {
                count_1++;
            }
            else {
                count_2++;
            }
        }
        if (count_1 == count_2) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
