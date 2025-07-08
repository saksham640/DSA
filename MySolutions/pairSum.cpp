#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int>& nums, int target){
    int i = 0;
    int j = nums.size() -1;
    vector <int> result;
    int currentSum = 0;
    while(i < j){
        currentSum = nums[i] + nums[j];
        if(currentSum ==  target){
            result.push_back(nums[i]);
            result.push_back(nums[j]);
            return result;
        } else if(currentSum > target){
            j--;
        } else if(currentSum < target){
            i++;
        }
    }
    cout<<"no result exists";
    return result;
}

int main() {
    vector <int> vec1 = {1,2,3,4,5,6,7,9,23,66,74};
    vector <int> result = pairSum(vec1,24);
    for(int vals:result){
        cout<<vals<<" ";
    }
    return 0;
}