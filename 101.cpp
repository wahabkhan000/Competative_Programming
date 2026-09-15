#include <iostream>
#include <vector>

int main() 
{
    int test_case = 0;
    std::cin>>test_case;

    for(int i = 0; i < test_case; i++){
        int length = 0;
        std::cin>>length;

        int arr[length];
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
            int start = -1, end = -1;
            for(int j = 0; j < front_1.size(); j++){
                if(front_1[j] <= length/2){
                    start = j;
                }
                else{
                    break;
                }
            }
            for(int j = front_1.size()-1; j >= 0; j--){
                if(front_1[j] > front_1[start]){
                    end = j;                                                                     
                }
                else{
                    break;
                }
            }

            if(start == -1){
                start = back_1[0];
                front_1.push_back(start);
                for(int j = front_1.size()-1; j > 0; j--){
                    front_1[j] = front_1[j-1];
                }
                front_1[0] = start;
                arr[start] = 1;
                start = 0;

            }
            else if(end == -1){
                end = back_1[back_1.size()-1];
                front_1.push_back(end);
                arr[end] = 1;
                end = front_1.size()-1;
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



            for(int j = front_1[start]+1; j < front_1[end]; j++){
                arr[j] = 0;
            }
        }

        for(int j = 0 ;j < length; j++){
            std::cout<<arr[j]<<" ";
        }
        std::cout<<"\n";

    }
}
