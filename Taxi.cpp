#include <iostream>
using std::cout,std::cin,std::endl;
int main() {
    int length=0;cin>>length;
    int count=0,count_3=0,count_2=0,count_1=0;
    for (int i=0;i<length;i++) {
        int input;cin>>input;
        if (input==3) {
            count++;
            count_3++;
        }
        else if (input==2) {
            count_2++;
        }
        else if (input==1) {
            count_1++;
        }
        else {
            count++;
        }
    }
    if (count_2%2==0) {
        count+=(count_2/2);
        if (count_1>count_3) {
            count_1-=count_3;
            if (count_1%4==0) {
                count+=(count_1/4);
            }
            else {
                int rem=count_1%4;
                count++;
                count_1-=rem;
                count+=(count_1/4);
            }
        }
    }
    else {
        count+=((count_2/2)+1);
        if (count_1>count_3) {
            count_1-=count_3;
            if (count_1>2) {
                count_1-=2;
                if (count_1>0) {
                    if (count_1%4==0) {
                        count+=(count_1/4);
                    }
                    else {
                        int rem=count_1%4;
                        count++;
                        count_1-=rem;
                        count+=(count_1/4);
                    }
                }
            }
        }
    }
    cout<<count<<endl;
}
