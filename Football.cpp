#include <iostream>
#include <vector>
using std::cin,std::cout,std::endl,std::vector,std::string;
int main() {
    int test = 0;
    cin>>test;
    vector<string>v;
    int arr[test];
    for (int i=0;i<test;i++) {
        string input;
        cin>>input;
        v.push_back(input);
    }
    for (int i=0;i<v.size();i++) {
        int count = 0;
        for (int j=0;j<v.size();j++) {
            if (v[i] == v[j]) {
                count++;
            }
        }
        arr[i] = count;
    }

    int max = arr[0];
    int index = 0;
    for (int i=1;i<test;i++) {
        if (max<arr[i]) {
            max = arr[i];
            index = i;
        }
    }
    cout<<v[index]<<endl;
}
