class Solution {
public:
    bool non_alpha_numeric(char c){
        return !(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9'));
    }
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0 , j = n - 1;
        while(i < j){
            while(i < n && non_alpha_numeric(s[i])) i++;
            while(j >= 0 && non_alpha_numeric(s[j])) j--;

            if('A' <= s[i] && s[i] <= 'Z') s[i] += ('a' - 'A');
            if('A' <= s[j] && s[j] <= 'Z') s[j] += ('a' - 'A');
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }

        return true;
    }
};
