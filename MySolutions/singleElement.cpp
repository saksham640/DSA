#include <vector>
#include <iostream>
using namespace std;

int singleNumber(vector<int>nums){

    for(int i = 0; i < nums.size(); i++){
        int dupeCount = 0;
        for(int j = 0; j < nums.size(); j++){
            if(i == j){
                continue;
            }
            if(nums[i] == nums[j]){
                dupeCount++;
            }
            if(j == nums.size()-1 && dupeCount == 0){
                return nums[i];
            }
        }
    }
return 0;
}

int main(){

    vector<int>vec1 = {4,1,2};
    cout<<singleNumber(vec1);

    return 0;
}