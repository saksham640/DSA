#include <vector>
#include <iostream>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int result = 0;
        vector<int> subArraySums;
        for(int i = 0; i<nums.size(); i++){
            result = 0;
            for(int j = i; j < nums.size(); j++){
                result = result + nums[j];
                subArraySums.push_back(result);
            }
        }
        int ans = 0;
        for(int vals:subArraySums){
            if(vals > ans ){
                ans = vals;
            }
        }
        return ans;
    }


int main(){
    vector<int> vec1 = {1,2,3,4};
    cout<<maxSubArray(vec1);
}