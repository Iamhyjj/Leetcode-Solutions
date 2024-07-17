#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        vector<vector<bool>> dp(s.size(),vector<bool>(s.size(),0));
        for(int left{0}; left < s.size() ; ++left){
            for(int length{1}; length <= s.size() ; ++length){
                int right = left + length - 1;
                if(right >= s.size()){
                    continue;
                }
                if(s[left] == s[right]){
                    if(length < 4){
                        dp[left][right] = 1;
                    }
                    else{
                        dp[left][right] = dp[left+1][right-1];
                    }
                }
            }
        }
        int maxLen = 1;
        string ret(1,s[0]);
        for(int i{0};i<s.size();++i){
            for(int j{i};j<s.size();++j){
                if(dp[i][j] && j-i+1 > maxLen){
                    maxLen = j-i+1;
                    ret = s.substr(i,maxLen);
                }
            }
        }
        return ret;
    }
};

int main(){
    Solution test;
    string s= test.longestPalindrome("aa");
    cout << s.size() << ' ' <<s;
    return 0;
}