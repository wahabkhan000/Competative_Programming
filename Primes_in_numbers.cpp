#include <iostream>
#include <vector>
using std::cout,std::cin,std::endl,std::vector,std::string;

int main() {
    int number = 0;
    cout<<"Enter number:"<<endl;
    cin>>number;
    string ans;
    vector<int>value;
    vector<int>freq;
    int den=2;
    int prev = 0;
    int count = 0;
    while (number>1) {
        if (number%den==0) {
            number/=den;
            if (prev == den) {
                count++;
            }
            if (prev!=den) {
                freq.push_back(count+1);
                value.push_back(den);
                count = 0;
            }
            prev = den;
            den=2;
        }
        else {
            den++;
        }
    }
    int a = freq[0];
    for (int i=0;i<freq.size();i++) {
        if (i<freq.size()-1) {
            freq[i]=freq[i+1];
        }
        else {
            freq[i] = a;
        }
    }
    for (int i=0;i<value.size();i++) {
        ans+='('+std::to_string(value[i]);
        if (i<value.size()-1) {
            if (freq[i]>1) {
                ans+='*';
                ans+='*';
                ans+=std::to_string(freq[i]);
            }
            ans+=')';
        }
        else {
            if (freq[i]>1) {
                ans+='*';
                ans+='*';
                ans+=std::to_string(freq[i]);
            }
            ans+=')';
        }
    }
    cout<<ans<<endl;
}
