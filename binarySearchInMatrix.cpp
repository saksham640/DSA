#include <iostream>
#include <vector>
using namespace std;

pair <int,int> convertTo2D(int middle, int size){
    int row = middle/size;
    int col = middle % size;
    return {row,col};
}

pair <int,int> binarySearchInMatrix(vector <vector<int>> &mat, int key){
    int rowSize = mat[0].size();
    int start = 0;
    int end = (mat.size() * mat[0].size()) - 1;
    while(start <= end){
        int middle = start + (end - start)/2;
        pair <int,int> midIdx = convertTo2D(middle, rowSize);
        int midVal = mat[midIdx.first][midIdx.second];
        if(key == midVal){
            return midIdx;
        } else if(key < midVal){
            end = middle - 1;
        } else if (key > midVal){
            start = middle + 1;
        }
    }
    return {-1,-1};
}

int main() {
    
    vector<vector<int>> matrix = {
    {2, 5, 7, 12, 18, 20, 23, 25, 27, 30},
    {32, 35, 36, 39, 41, 44, 47, 50, 52, 55},
    {57, 59, 62, 64, 66, 69, 72, 74, 77, 80},
    {82, 85, 87, 90, 92, 95, 97, 100, 103, 107},
    {110, 112, 115, 118, 121, 124, 127, 130, 133, 137}
};
    pair <int,int> ans = binarySearchInMatrix(matrix,39);
    cout<<ans.first<<"  "<<ans.second;

    return 0;
}