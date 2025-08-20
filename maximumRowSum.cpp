#include <iostream>
using namespace std;

int maximumRowSum(int matrix[][4], int rows, int cols){
    int ans = INT_MIN;
    for(int i = 0; i < rows; i++){
        int rowSum = 0;
        for(int j = 0; j < cols; j++){
            rowSum += matrix[i][j];
        }
        ans = max(rowSum,ans);
    }
    return ans;
}

int main() {
    int matrix[3][4] = {{1,2,3,499},{5,67,7,8},{9,10,11,12}};
    cout<<maximumRowSum(matrix,3,4);
    return 0;
}