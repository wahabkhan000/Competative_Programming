#include <iostream>
    using namespace std;
    int main() {
        int num;
        cin>>num;
        {
            if (num < 2)
                cout<<"Not a prime number";

            else
            {
                for (int i = 2; i*i <= num; i++)
                {
                    if (num % i == 0)
                    {
                        cout<<"Not a prime number";
                        return 0;
                    }
                }
                cout<<"Prime number";
            }
        }
        
    }
