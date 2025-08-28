#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& arr,int& target){
    unordered_map<int,int> map;
    for(int i = 0; i < arr.size(); i++){
        int first = arr[i];
        int second = target - first;
        auto it = map.find(second);
        if(it != map.end()){
            return {it->second,i};
        }else{
            map[first] = i;
        }
    }
    return {-1,-1};
}

int main() {
    vector<int> arr = {1,5,3,6,7,4,22,5,7};
    int target = 26;
    vector<int> ans = twoSum(arr,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}