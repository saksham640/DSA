#include <iostream>
#include <vector>
using namespace std;

int singleElementInSortedArray(vector <int> nums){
    int start = 0;
    int end = nums.size() - 1;
    int size = start + (end - start);
    while(size > 2){

    }
    return -1;
}

int main() {
    vector <int> nums = {1,1,2,3,3,4,4,8,8};
    cout<<singleElementInSortedArray(nums);
    return 0;
}