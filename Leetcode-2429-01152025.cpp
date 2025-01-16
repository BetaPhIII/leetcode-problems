class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int set_x = countBits(num2);
        int x = 0;
        for(int i = (sizeof(num1)*8)-1; (i >= 0 && set_x>0); i--){
            unsigned int mask = 1 << i;
            if(num1 & mask){
                x |= mask;
                set_x--;
            }
        }
        for(int i = 0;(set_x>0) && (i<(sizeof(num1)*8)-1);i++){
            unsigned int mask = 1 << i;
            if(!(x & mask)){
                x |= mask;
                set_x--;
            }
        }
        
        return x;
    }
    int countBits(int num){
        int count = 0;
        unsigned int bits = sizeof(num)*8;
        for (int i = bits - 1; i >= 0; i--) {
            int mask = 1 << i;
            if(num & mask){count++;}
        }
        return count;
    }
};