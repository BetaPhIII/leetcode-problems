class Solution {
public:
    int minimumLength(string s) {
        int minLength = s.length();
        int chars[26][2] = {{0}};
        for(const auto& c : s){
            chars[((int)c)-97][0] = c;
            chars[((int)c)-97][1]++; 
        }
        for(int i = 0; i<26; i++){
            while(chars[i][1]>=3){
                chars[i][1]-=2;
                minLength-=2;
            }
        }
        return minLength;
    }
};