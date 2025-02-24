class Solution {
    public:
        bool isPalindrome(int x) {
            std::string str = std::to_string(x);
            int j = str.length()-1;
            for(int i = 0; i<str.length() && j>=i; i++){
                if(str[i] != str[j]){
                    return false;
                }
                j--;
            }
            return true;
        }
    };