class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> C = {};
        int count = 0;
        int freq[9999][2] = {{0}};
        for(int i = 0; i<A.size(); i++){
            freq[A[i]][1]++;
            freq[B[i]][1]++;
            if(A[i] == B[i]){
                count++;
            }
            else{
                if(freq[A[i]][1] == 2){
                    count++;
                }
                if(freq[B[i]][1] == 2){
                    count++;
                }
            }
            C.push_back(count);
        }
        return C;
    }
};