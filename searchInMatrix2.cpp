#include <iostream>
#include <vector>
using namespace std;

bool isExist(vector<vector<int>> &mat, int target){
    int r = 0;
    int c = mat[0].size() - 1;
    while(r <= mat.size()-1 && c >= 0){
        if(target == mat[r][c]) return true;
        else if (target < mat[r][c]) c--;
        else if(target > mat[r][c]) r++;
    }
    return false;
}

int main() {
    
    vector <vector<int>> mat = {{4,6,7,9},{19,24,66,88},{1,2,3,4}};
    cout<<isExist(mat,4);

    return 0;
}