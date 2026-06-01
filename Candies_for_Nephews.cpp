#include<iostream>
namespace print {
    void cout(const int data) {
        std::cout<<data<<std::endl;
    }
}
int main(){
    int test=0;std::cin>>test;
    for (int i=0;i<test;i++) {
        int candies=0;std::cin>>candies;
        if (candies%3==0) {
            print::cout(0);
        }
        else {
            int additional_candies=0;
            bool condition=true;
            while (condition) {
                if (additional_candies > candies) {
                    if (additional_candies % 3 == 0) {
                        condition=false;
                    }
                }
                else {
                    additional_candies+=3;
                }
            }
            print::cout(additional_candies-candies);
        }
    }
}
