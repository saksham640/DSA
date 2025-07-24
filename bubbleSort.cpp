#include <iostream>
#include <vector>

using namespace std;

vector <int> bubbleSort(vector <int> arr){
    for(int i = 0; i < arr.size() - 1; i++){
        bool isSwapped = false;
        for(int j = 0; j < arr.size()-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwapped = true;
            }
        }
        if(!isSwapped){
            return arr;
        }
    }
    return arr;
}

int main() {
    
    vector<int> arr = {999, 800, 800, 700, 600, 500, 500, 400, 300, 200, 100, 50, 20, 10, 5, 3, 2, 1, 1, 0};

    arr = bubbleSort(arr);
    for(int vals:arr){
        cout<<vals<<" ";
    }
    return 0;
}