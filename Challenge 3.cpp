Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000 







#include<bits/stdc++.h>
using namespace std;
int roman(char c){
        switch(c){
            case 'I':
                return 1;
                break;
            case 'V':
                return 5;
                break;
            case 'X':
                return 10;
                break;
            case 'L':
                return 50;
                break;
            case 'C':
                return 100;
                break;
            case 'D':
                return 500;
                break;
            case 'M':
                return 1000;
                break;
            default:
                return -1;
                break;
        }
    }
    int romanToInt(string s){
        if(s.size() == 1) return roman(s[0]);
        int j = s.size()-1;
        int ans = roman(s[j]);
        while(j > 0){
            if(roman(s[j-1]) >= roman(s[j])){
                ans += roman(s[j-1]);
            }
            else{
                ans -= roman(s[j-1]);
            }
            j--;
        }
        return ans;
    }
    int main()
    {
        string s="LVIII";
        printf("%d",romanToInt(s));
        return 0;
    }
