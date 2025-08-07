#include <iostream>
#include <vector>
using namespace std;

bool permutationInString(string s1, string s2){
    if(s1.length() <= s2.length()){
        vector <int> freq(26,0);
        for(int i = 0; i < s1.length(); i++){
            freq[s1[i]-97]++;
        }
        for(int i = 0; i <= (s2.length()-s1.length()); i++){
            int matchStreak = 0;
            vector <int> freq2(freq);
            for(int j = i; j < (i+s1.length()); j++){
                if(freq2[s2[j]-97]){
                    matchStreak++;
                    freq2[s2[j]-97]--;
                }else{
                    break;
                }
            }
            if(matchStreak >= s1.length()){
                return true;
            }
        }
    }
    return false;
}

int main() {
    string s1 = "abc";
    string s2 = "absdjsndsicba";
    cout<<permutationInString(s1,s2);
    return 0;
}