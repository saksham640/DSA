#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i = 0; i < nums.size(); i++){
        currentSum = currentSum + nums[i];
        maxSum = currentSum > maxSum? currentSum: maxSum;
        currentSum = currentSum < 0? 0: currentSum;
    }
    return maxSum;
}

int main() {
    vector<int>vec1 = {-1,-2,-4};
    cout<<maxSubArray(vec1);
    return 0;
}