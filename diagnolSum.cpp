#include <iostream>
#include <vector>
using namespace std;

pair<int,int> diagnolSum(vector<vector<int>> mat, int rows, int cols){
    //for calculating primary diagonal
    int i=0, j=0;
    int ans = 0;
    while(i < rows && j < cols){
        ans += mat[i++][j++];
    }
    //secondary Diagonal
    i = 0; j = cols-1;
    int ans2 = 0;
    while(i < rows && j > -1){
        ans2 += mat[i++][j--];
    }
    ans2 = !(rows % 2) ? ans2 : ans2 - mat[(rows-1)/2][(cols-1)/2]; 
    pair <int,int> answer = {ans,ans2};
    return answer;

}

int main() {
    vector<vector<int>> mat = {{1,2,3},{5,6,7},{9,10,11}};
    pair<int,int> answer = diagnolSum(mat,3,3);
    cout<<answer.first<<" "<<answer.second;
    return 0;
}