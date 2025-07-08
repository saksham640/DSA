#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//so we will first sort this array to have the majority element lined up continously
//then we'll just simply check if how mant times a number is repeating by incrementing totalInstances on each repetition found
//as soon as the chain of repition for a number breaks, totalInstances is set to zero
//as soon as totalInstances becomes greater than size/2, we return the value at current index

int majorityElement(vector<int>& nums){
    sort(nums.begin(), nums.end());
    int totalInstances = 1;
    for(int i = 0; i < nums.size()-1; i++){
        if(nums[i] == nums[i+1]){
            totalInstances++;
        } else {
            totalInstances = 1;
        }
        if(totalInstances > (nums.size()/2)){
            return nums[i];
        }
    }
    return nums[0];
}

int main() {
    vector<int> vec1 = {3,2,3};
    cout<<"The majority element is: "<<majorityElement(vec1);
    return 0;
}