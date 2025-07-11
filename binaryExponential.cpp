#include <iostream>
using namespace std;

long long binaryExponential(int number, int exponent){
    long long currentBase = number;
    int result = 1;
    while(exponent > 0){
        if(exponent % 2 == 1){
            result *= currentBase;
        }
        currentBase *= currentBase;
        exponent /= 2;
    }
    return result;
}

int main() {
    cout<<binaryExponential(2,26);
    return 0;
}