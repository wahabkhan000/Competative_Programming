#include<iostream>
using namespace std;
int main(){
    int total=0;
    cin>>total;
    int officer=0;
    int crime_unseen=0;
    for(int i=0;i<total;i++){
        int crime_happen=0;
        cin>>crime_happen;
        if(crime_happen==-1){
            if(officer>0){
                officer--;
            }
            else{
                crime_unseen++;
            }
        }
        else {
            officer+=crime_happen;
        }
    }
    cout<<crime_unseen<<endl;
}
