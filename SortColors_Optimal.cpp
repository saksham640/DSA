#include <iostream>
#include <vector>
using namespace std;

//using Dutch National Flag Algorithm
//start lo & mid = 0;
// hi = size() - 1;
//run loop while high >= mid
vector <int> sortColors(vector <int>& colors){
    
    int mid = 0, lo = 0, hi = colors.size()-1;

    while(mid<=hi){
        if(colors[mid] == 0){
            swap(colors[mid++], colors[lo++]);
        } else if(colors[mid] == 1){
            mid++;
        } else if(colors[mid] == 2){
            swap(colors[mid], colors[hi--]);
        }
    }
    return colors;
}

int main() {
    vector <int> colors = {1,1,2,0,2,0,1,0,1,1,0,0,2};
    colors = sortColors(colors);
    for(int vals:colors){
        cout<<vals; 
    }
    
    return 0;
}