#include <iostream>
#include <vector>
using std::cout,std::cin,std::endl,std::vector;

int main() {
    vector<int>store;
    vector<int>final;
    int number = 0;
    cout<<"Enter number:"<<endl;
    cin>>number;
    for (int i=2;i<=number;i++) {
        int count = 0;
        for (int j=1;j<=i;j++) {
            if (i%j == 0) {
                count++;
            }
        }
        if (count == 2) {
            store.push_back(i);
        }
    }
    int index=0;
    while (number>1) {
        if (number%store[index]==0) {
            number/=store[index];
            final.push_back(store[index]);
            index=0;
        }
        else {
            index++;
        }
    }
    for (int x : final) {
        cout<<x<<" ";
    }
}
