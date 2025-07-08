#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currentSum = nums[0];
    for(int i = 1; i < nums.size(); i++){
        currentSum = currentSum + nums[i];
        maxSum = currentSum > maxSum? currentSum: maxSum;
        currentSum = currentSum < 0? 0: currentSum;
    }
    return maxSum;
}

int main() {
    vector<int>vec1 = {3,-4};
    cout<<maxSubArray(vec1);
    return 0;
}