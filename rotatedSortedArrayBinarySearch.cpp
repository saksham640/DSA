#include <iostream>
#include <vector>
using namespace std;

int binarySearchInRotatedArray(vector <int> nums, int target){
    //declaring initials like regular binary search
    int start = 0;
    int end = nums.size() - 1;
    while(start <= end){

        int middle = start + (end - start)/2;   // setting new middle value per iteration (same as BS)
        if(target == nums[middle]){             // returning middle element if found (Same as BS)
            return middle;
        }

        if(nums[start] <= nums[middle]){        // checking if the left array is sorted
            if(target >= nums[start] && target <= nums[middle]){    //checking if our element lies between the left sorted array
                end = middle - 1;   
            } else {                    //this portion is basically applying BS on the left sorted array if the element does lie in between here
                start = middle + 1;
            }
        }else{                          // else condition will trigger if the left half is NOT sorted, so it will assume that the right half is
            if(target >= nums[middle] && target <= nums[end]){
                start = middle + 1;
            } else {                            // same thing as above, doing BS on the right side until element is found
                end = middle - 1;
            }
        }
    }
    return -1;  // mandatory return value
}

int main() {
    
    vector <int> nums = {6,7,0,1,2,3,4,5}; 
    cout<<binarySearchInRotatedArray(nums,7);
    return 0;
}