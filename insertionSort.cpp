#include <iostream>
#include <vector>

using namespace std;

vector <int> insertionSort(vector <int> arr){
    for(int i = 0; i < arr.size(); i++){
        int curr = i;
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){
            
        }

    }
    return arr;
}

int main() {
    vector <int> arr = {0,66,888,55,3,21,5,7,8,5,4,3,2,34,4,4555,6};
    arr = insertionSort(arr);
    for(int vals:arr){
        cout<<vals<<" ";
    }
    return 0;
}