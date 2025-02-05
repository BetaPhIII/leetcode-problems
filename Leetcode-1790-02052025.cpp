class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int arr1[26] = {};
        int arr2[26] = {};
        int nonequal = 0;
        for(int i = 0; i<s1.length(); i++){
            if(s1[i]!=s2[i]){
                nonequal++;
            }
            arr1[(int)s1[i]-97] += 1;
        }
        for(const auto& c: s2){
            arr2[(int)c-97] += 1;
        }
        for(int i = 0; i<26; i++){
            if(arr1[i] != arr2[i]){
                nonequal++;
            }
        }
        return (nonequal==2 || nonequal==0);
    }
};