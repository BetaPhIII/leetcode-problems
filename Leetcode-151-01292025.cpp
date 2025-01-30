class Solution {
public:
    string reverseWords(string s) {
        vector<string> tokens = {};
        string temp = "";

        for(const auto& c: s) {
            if(c!= ' ' && c!= '\0'){
                temp+=c;
            }
            else if(!temp.empty()){
                tokens.push_back(temp);
                temp = "";
            }
        }

        for(int i = tokens.size()-1; i>=0; i--){
            if(!temp.empty()){
                temp+= " ";
            }
            temp+=tokens[i];
        }
        return temp;
    }
};