#include <iostream>
#include <vector>
using namespace std;

vector <int> productOfArraysExceptSelf(vector <int> nums){
    vector <int> ans;
    vector <int> prefixes;
    vector <int> suffixes;
    int result = 1;
    for(int i = 1; i < nums.size()+1; i++){
        prefixes.push_back(result);
        result = result * nums[i-1];
    }
    result = 1;
    for(int i = nums.size() - 2; i >= -1; i--){
        suffixes.push_back(result);
        result = result * nums[i + 1];
    }
    
    for(int i = 0; i < nums.size(); i++){
        ans.push_back(prefixes[i] * suffixes[nums.size() - (i + 1)]);
    }
    return ans;
}

int main() {
    vector <int> nums = {1,2,3,4,9,12,1,4};
    vector <int> ans = productOfArraysExceptSelf(nums);
    for(int vals: ans){
        cout<<vals<<" ";
    }
    return 0;
}