# include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int numbers[n];
    for (int i=0;i<n;i++) {
        cin>>numbers[i];
    }
    int sum=0;
    for (int i=0;i<n;i++) {
        sum+=numbers[i];
    }
    cout<<sum<<endl;
    int num=sum;
    int i=0;
    while (true) {
        bool prime=true;
        if (num==2){prime=true;}
        else if (num%2==0){prime=false;}
        else {
            for (int j = 3; j*j <= num; j=j+2)
            {
                if (num % j == 0)
                {
                    prime=false;
                }
            }
        }
        if (prime) {
            cout<<i<<endl;
            return 0;
        }
        i++;
        num++;
    }
}
