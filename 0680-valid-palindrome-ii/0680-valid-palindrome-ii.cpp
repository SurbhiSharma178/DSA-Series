class Solution {

bool checkPalindrome(string s, long long int i,long long int j){
    while(i<=j){
    if(s[i] != s[j]){
        return false;
    }
    i++;
    j--;
    }
    return true;
}

public:
    bool validPalindrome(string s) {
        long long int i=0;
        long long int j= s.length()-1;
        while(i<=j){
            if(s[i]!= s[j]){
                return checkPalindrome(s, i+1, j) || checkPalindrome(s, i, j-1);
            }else{
                i++;
                j--;
            }
        }
        return true ;
    }
};