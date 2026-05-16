#include<iostream>
#include <ctime>
using namespace std;
int main() {
    int box_size=50;
    int max_num=0;
    int min_num=0;
    int same_count=0;
    int index=0;
    int first_friend_box[box_size];
    int second_friend_box[box_size];
    srand(static_cast<unsigned int>(time(0)));
    for (int i=0;i<box_size;i++) {
        bool flag=false;
        int number =rand();
        for (int j=0;j<i;j++) {
            if (number==first_friend_box[j]) {
                flag=true;
                break;
            }
        }
        if (flag==false) {
            first_friend_box[i]=number;
        }
        else {
            i--;
        }
    }
    for (int i=0;i<box_size;i++) {
        bool flag=false;
        int number =rand();
        for (int j=0;j<i;j++) {
            if (number==second_friend_box[j]) {
                flag=true;
                break;
            }
        }
        if (flag==false) {
            second_friend_box[i]=number;
        }
        else {
            i--;
        }
    }
    for (int i=0;i<box_size;i++) {
        for (int j=0;j<box_size;j++) {
            if (first_friend_box[i]==second_friend_box[j]) {
                same_count++;
                break;
            }
        }
    }
    cout<<"same numbers are "<<same_count<<endl;
    max_num=first_friend_box[0];
    for (int i=1;i<box_size;i++) {
        if (max_num<first_friend_box[i]) {
            max_num=first_friend_box[i];
            index=i;
        }
    }
    cout<<"Max number in first friend box is : "<<max_num<<" at index "<<index+1<<endl;
    index=0;
    min_num=second_friend_box[0];
    for (int i=1;i<box_size;i++) {
        if (min_num>second_friend_box[i]) {
            min_num=second_friend_box[i];
            index=i;
        }
    }
    cout<<"Min number in second friend box is : "<<min_num<<" at index "<<index+1<<endl;
}
