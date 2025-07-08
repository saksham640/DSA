#include <iostream>
#include <vector>
using namespace std;

int singleElement(vector<int>& nums){
    int uniqueElement = 0; //since Any number XOR 0 = the number itself
    for(int vals: nums){
        uniqueElement ^= vals;
    }
    return uniqueElement? uniqueElement:-1;
}

int main() {
    
    vector<int> vec1 = {1,2,1,4,2};
    cout<<singleElement(vec1);

    return 0;
}