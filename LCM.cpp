#include <iostream>
using namespace std;

int GCD(int a, int b){
    while(a > 0 && b > 0){
        if(a > b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    return max(a,b);
}

int LCM(int a, int b){
    return (a*b)/(GCD(a,b));
}

int main() {
    cout<<LCM(20,65);
    return 0;
}