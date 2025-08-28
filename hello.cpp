#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    char operation;
    cin>>x;
    cin>>y;
    cin>>operation;
    if(operation=='+'){
        cout<<x+y;

    }
    if(operation=='-'){
        cout<<x-y;
    }
    if(operation=='*'){
        cout<<x*y;
    }
    if(operation=='/'){
        cout<<x/y;
        
    }
}