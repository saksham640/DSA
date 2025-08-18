#include <iostream>
using namespace std;

int gcd(int num1, int num2){
    while(num1 > 0 && num2 > 0){
        if(num1 >= num2){
            num1 = num1 % num2;
        }else{
            num2 = num2 % num1;
        }
    }
    return max(num1,num2);
}

int main() {
    cout<<gcd(13,65);
    return 0;
}