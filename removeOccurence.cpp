#include <iostream>
using namespace std;

string removeOccurrence(string s, string part){
    while(s.find(part) <= s.length()){
        int i = s.find(part);
        s.erase(i,(part.length()));
    }
    return s;
}

int main() {

    string s = "hellobahellobabahfhjdbajfhba";
    string part = "ba";
    cout<<removeOccurrence(s, part);

    return 0;
}