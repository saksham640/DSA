#include <iostream>
#include <vector>

using namespace std;

//for every ith element we are checking the whole array ahead of arr[i] to find an element smaller than it, then we swap if it is
// different that bubble sort since here int j = i and not j = 0

vector <int> selectionSort(vector <int> arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = i; j < arr.size(); j++){
            if(arr[j] < arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    return arr;
}

int main() {
    vector <int> arr = {99,24,5,66,8,5,3,66,3,0};
    arr = selectionSort(arr);
    for(int vals: arr){
        cout<<vals<<" ";
    }
    return 0;
}