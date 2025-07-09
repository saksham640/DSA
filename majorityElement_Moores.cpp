#include <iostream>
#include <vector>
using namespace std;

int majorityElementMoore(vector<int>& nums){
    int frequency = 0;
    int ans = 0;
    for(int i = 0; i < nums.size(); i++){
        if(frequency == 0){
            ans = nums[i];
        }
        if(nums[i] == ans){
            frequency++;
        } else {
            frequency--;
        }
    }
    return ans;
}

int main() {
    vector <int> yada = {1,2,3,4,5,4,5,4,4,4,4,4,4,4,4,};
    cout<<majorityElementMoore(yada);
    return 0;
}