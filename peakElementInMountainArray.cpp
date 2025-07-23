#include <iostream>
#include <vector>

using namespace std;




int peakElementInMountainArray(vector<int> arr){
    int start = 0;
    int end = arr.size() - 1;
    while(start <= end){
        int middle = start + (end - start)/2;

        //condition for peak element:
        if(middle > 0 && middle < arr.size()){  //if middle exists
            if(arr[middle] > arr[middle + 1] && arr[middle] > arr[middle - 1]){     //would only be checked if middle exists
                return middle;
            }
        }
        //condition for if middle is in the left slant of mountain:
        if(middle == 0){
            start = middle + 1;
        }else if(middle == arr.size() - 1){
            end = middle - 1;
        }else if(arr[middle] > arr[middle - 1] && arr[middle] < arr[middle + 1]){
            start = middle + 1;
        }else if(arr[middle] > arr[middle + 1] && arr[middle] < arr[middle-1]){
            end = middle -1;
        }
    }
    return -1;
}       

int main() {
    vector <int> sup = {3,5,3,2,0};
    cout<<peakElementInMountainArray(sup);
    return 0;
}