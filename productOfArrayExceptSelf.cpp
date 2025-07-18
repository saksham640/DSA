#include <iostream>
#include <vector>
using namespace std;

vector <int> productOfArrayExceptSelf(vector <int>& nums){
    vector <int> ans;
    for(int i = 0; i < nums.size(); i++){
        int result = 1;
        for(int j = 0; j < nums.size(); j++){
            if(j == i){
                continue;
            }
            result = result * nums[j];
        }
        ans.push_back(result);
    }
    return ans;
}

int main() {
    vector <int> nums = {10,38,11,2};
    vector <int> ans = productOfArrayExceptSelf(nums);
    for(int vals: ans){
        cout<<vals<<" ";
    }
    return 0;
}