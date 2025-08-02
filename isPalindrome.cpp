#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool validPalindrome(string s){
    int lo = 0;
    int hi = s.size() - 1;
    while(lo < hi){
        bool isValidLo = false;
        bool isValidhi = false;
        s[lo] = tolower(s[lo]);
        s[hi] = tolower(s[hi]);
        if((s[lo] >= 48 && s[lo] <= 57) || (s[lo] >= 97 && s[lo] <= 122)){  //also can be done using isalnum()
            isValidLo = true;
        }else{
            lo++;
        }
        if((s[hi] >= 48 && s[hi] <= 57) || (s[hi] >= 97 && s[hi] <= 122)){  //also can be used isalnum()
            isValidhi = true;
        }else{
            hi--;
        }
        if(isValidhi && isValidLo){
            if(s[lo] == s[hi]){
                lo++;
                hi--;
            }else{
                return false;
            }
        }
    }
    return true;
}
    
int main() {
    string s = "A man, a plan, a canal: Panama";
    cout<<validPalindrome(s);
    return 0;
}




