class Solution {
    public:
        string clearDigits(string s) {
            int index = 0;
            while (index < s.length()) {
                if (s[index] >= 48 && s[index] <= 57) {
                    s.erase(index, 1);
                    if (index > 0) {
                        s.erase(index - 1, 1);
                        index--;
                    }
                } else {
                    index++;
                }
            }
            return s;
        }
    };