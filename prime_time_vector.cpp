#include <vector>
#include<iostream>
using namespace std;

std::vector<unsigned> prime(unsigned n){
  vector<unsigned>k;
    unsigned int count1=0;
    for (unsigned int i=2;i<=n;i++) {
        unsigned int count=0;
        for (unsigned int j=1;j<=i;j++) {
            if (i%j==0) {
                count++;
            }
        }
        if (count==2) {
            k.push_back(i);
        }
    }
    return k;
}
