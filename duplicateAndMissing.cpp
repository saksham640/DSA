#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector <int> duplicateAndMissing(vector <vector<int>> grid){
    unordered_set <int> set;
    int size = grid.size();
    int total = size * size;
    int sum = 0;
    int actualSum = (total*(total + 1))/2;
    int repeatValue;
    vector <int> ans = {};
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            int el = grid[i][j];
            sum += el;
            auto it = set.find(el);
            if(it != set.end()){
                repeatValue = *it;
                ans.push_back(*it);
            }else{
                set.insert(el);
            }
        }
    }
    int missingValue = (actualSum + repeatValue) - sum;
    ans.push_back(missingValue);
    return ans;
}

int main() {
    vector <vector<int>> grid = {{9,1,7},{8,9,2},{3,4,6}};
    vector <int> ans = duplicateAndMissing(grid);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}