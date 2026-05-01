#include <iostream>
using namespace std;
int main() {
    int wealth_spent=0;
    int citizen_count=0;
    cin>>citizen_count;
    int citizen_wealth[citizen_count];
    for (int l=0;l<citizen_count;l++) {
        cin>>citizen_wealth[l];
    }
    int highest_wealth=citizen_wealth[0];
    for (int i=1;i<citizen_count;i++) {
        if (highest_wealth<citizen_wealth[i]) {
            highest_wealth=citizen_wealth[i];
        }
    }
    for (int i=0;i<citizen_count;i++) {
        wealth_spent+=(highest_wealth-citizen_wealth[i]);
    }
    cout<<wealth_spent<<endl;
}
