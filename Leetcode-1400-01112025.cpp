class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.length()<k){
            return false;
        }
        std::unordered_map<char, int> countMap;

        for(const auto& c : s){
            countMap[c]++;
        }

        int oddCounts=0;
        for(const auto& pair : countMap){
            if((pair.second)%2){
                oddCounts++;
            }
        }
        if(oddCounts>k){
            return false;
        }
        return true;
    }
};