#include<iostream>
#include <windows.h>
using namespace std;
int main() {
    int count=1;
    int hour=0;
    int minutes=0;
    int seconds=0;
    cout<<" ========== Welcome to my Clock ========== "<<endl;
    while (count>0) {
        Sleep(1000);
        cout<<hour<<":"<<minutes<<":"<<seconds<<endl;
        seconds++;
        if (seconds>59) {
            minutes++;seconds=0;
            if (minutes>59) {
                hour++;minutes=0;
                if (hour>23) {
                    hour=0;
                }
            }
        }
        count++;
    }
}
