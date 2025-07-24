#include <iostream>
#include <vector>

using namespace std;

//for every ith element we are checking the whole array ahead of arr[i] to find an element smaller than it, then we swap if it is
// different that bubble sort since here int j = i and not j = 0

vector <int> selectionSort(vector <int> arr){
    for(int i = 0; i < arr.size(); i++){
        int smallestIdx = i;
        for(int j = i; j < arr.size(); j++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
    return arr;
}

int main() {
    vector <int> arr = {9,8,7,6,5,4,3,2,1};
    arr = selectionSort(arr);
    for(int vals: arr){
        cout<<vals<<" ";
    }
    return 0;
}