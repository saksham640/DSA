#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> arr){
    int slow = arr[0], fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }while(slow != fast);

    slow = arr[0];
    while(slow != fast){
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main() {
    vector <int> arr = {1,5,3,3,2,4};
    cout<<findDuplicate(arr);
    return 0;
}