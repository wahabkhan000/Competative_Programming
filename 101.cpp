#include <iostream>
#include <vector>

int main() 
{
    int test_case = 0;
    std::cin>>test_case;

    for(int i = 0; i < test_case; i++){
        int length = 0;
        std::cin>>length;

        int arr[lengtth];
        std::vector<int>front_1;
        std::vector<int>back_1;

        for(int j = 0; j < length; j++){
            std::cin>>arr[j];
            if(arr[j] == 1){
                front_1.push_back(j);
            }
            else if(arr[j] == -1){
                back_1.push_back(j);
            }
        }

        if(back_1.empty()){
            break;
        }
        else if(front_1.empty()){
            if(!back_1.empty()){
                arr[back_1[0]] = 1;
                arr[back_1[back_1.size()-1]] = 1;

                for(int j = 1; j < back_1.size()-1; j++){
                    arr[back_1[j]] = 0;
                }

            }
        }
        else{
            int start = 0, end = front_1.size()-1;
            while(start < end){
                start++, end--;
            }
            if(start != 0){
                start--;
                end++;
            }
            for(int j = 0; j < back_1.size(); j++){
                if(front_1[start] > back_1[j]){
                    arr[back_1[j]] = 0;
                }
                else{
                    break;
                }
            }
            for(int j = back_1.size()-1; j >= 0; j--){
                if(front_1[end] < back_1[j]){
                    arr[back_1[j]] = 0;
                }
                else{
                    break;
                }
            }

            for(int j = front_1[start]; j < front_1[end]; j++){
                arr[j] = 0;
            }
        }

        for(int j = 0 ;j < length; j++){
            std::cout<<arr[j]<<" ";
        }

    }
}
