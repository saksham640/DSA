#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector <int> arr, int target){
    int start = 0;
    int end = arr.size()-1;    // initial values

    while(start <= end){
        int middle = start + (end - start) / 2;     // middle gets changed
        if(target == arr[middle]){
            return middle;
        } else if(target < arr[middle]) {
            end = middle - 1;
        } else if(target > arr[middle]){
            start = middle+1;
    }
}
return -1;
}
int main() {
    vector <int> arr = {-1,0,3,5,7,10,44};
    cout<<binarySearch(arr,5);
    return 0;
}