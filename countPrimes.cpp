#include <iostream>
#include <vector>
using namespace std;

int countPrime(vector <int> nums){
    int ans = 0;
    vector <bool> isPrime(nums.size()+1,true);
    for(int i = 2; i < nums.size(); i++){
        if(isPrime[i]){
            ans++;
            for(int j = i*2; j < nums.size(); j = j + i){
                isPrime[j] = false;
            }
        }
    }
    return ans;
}

int main() {
    vector <int> numbers(500,0);
    for(int i = 0; i < numbers.size(); i++){
        numbers[i] = i;
    }
    cout<<countPrime(numbers);
}
