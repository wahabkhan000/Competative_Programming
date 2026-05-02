#include <iostream>
using namespace std;
int main() {
    int test_case;
    cin>>test_case;
    for (int i=0;i<test_case;i++) {
        int length=0;
        cin>>length;
        string students_sequence;
        cin>>students_sequence;
        int ball_pass=0;
        for (int j=0;j<length;j++) {
            if (students_sequence[j]!='L') {
                ball_pass++;
            }
            else {
                ball_pass++;
                break;
            }
        }
        cout<<ball_pass<<endl;
    }
}
