class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int bits1 = 0, copy1 = num1, bits2 = 0, copy2 = num2;
        while (copy1 > 0) {
            if (copy1 & 1) bits1++;
            copy1 >>= 1;
        }
        while (copy2 > 0) {
            if (copy2 & 1) bits2++;
            copy2 >>= 1;
        }

        if (bits1 == bits2) return num1;
        else if (bits1 > bits2) {
            int ans = 0, bitcount = 0, copy1 = num1, temp = 1;
            while (copy1 > 0) {
                if (copy1 & 1) {
                    bitcount++;
                    if (bitcount > bits1 - bits2) ans += temp;
                }
                copy1 >>= 1;
                temp <<= 1;
            }
            return ans;
        }
        else {
            int ans = num1, bitcount = 0, temp = 1;
            while (bitcount < bits2 - bits1) {
                if (!(ans & temp)) {
                    ans += temp;
                    bitcount++;
                }
                temp <<= 1;
            }
            return ans;
        }
    }
};