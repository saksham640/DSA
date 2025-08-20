#include <iostream>
using namespace std;

pair<int,int> searchInMatrix(int matrix[][3], int rows, int cols, int key){
    pair<int,int> answer;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(key == matrix[i][j]){
                answer = {i,j};
                break;
            }
        }
    }
    return answer;
}

int main() {
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    pair <int, int> answer(searchInMatrix(matrix,3,3,7));
    cout<<answer.first<<" "<<answer.second;
    return 0;
}