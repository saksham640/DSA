#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArrays(vector <int>& nums1, int& m, vector <int>& nums2, int& n){
    int Idx = (m+n)-1;
    m -= 1;
    n -= 1;
    while(Idx >= 0){
            if((m > -1) && (n == -1 || nums1[m] >= nums2[n])){
                nums1[Idx] = nums1[m];
                Idx--;
                m--;
        }
        else if(n > -1){
            if(m == -1 || nums2[n] >= nums1[m]){
                nums1[Idx] = nums2[n];
                Idx--;
                n--;
            }
        }
    }
}

int main() {
    int m = 3;
    int n = 3;
vector<int> nums1 = {1, 2, 3, 0, 0, 0};
vector<int> nums2 = {4, 5, 6};
    mergeSortedArrays(nums1,m,nums2,n);
    for(int vals: nums1){
        cout<<vals<<" ";
    }
    return 0;
}