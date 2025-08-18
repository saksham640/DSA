#include <iostream>
#include <math.h>
using namespace std;

bool isArmstrong(int num){
    int numCopy = num;
    int sum = 0;
    while(num >= 1){
        sum += pow((num%10),3);
        num /= 10;
    }
    return sum == numCopy ? true:false;
}

int main() {
    cout<<isArmstrong(109);
    return 0;
}