#include <iostream>
#include <vector>
using namespace std;

vector <int> sortColors(vector <int>& colors){
    //initializing each color's count global cariables
    int red = 0;
    int green = 0;
    int blue = 0;

    for(int i = 0; i < colors.size(); i++){
        red = colors[i] == 0? red + 1 : red;            //when 0 is found, 0's count is increased
        green = colors[i] == 1? green + 1 : green;      //when 1 is found, count increased
        blue = colors[i] == 2? blue + 1 : blue;         //same as above
    }
    for(int i = 0; i < colors.size(); i++){
        if(red){
            colors[i] = 0;
            red--;
        }else if(green){
            colors[i] = 1;                              //colors overwritted
            green--;
        }else if(blue){
            colors[i] = 2;
            blue--;
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