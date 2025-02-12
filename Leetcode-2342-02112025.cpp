class Solution {
    public:
        int maximumSum(vector<int>& nums) {
            int summedDigits[100][2] = {{0}};
            int max = -1;
    
            for(int num : nums) {
                int sum_digits = 0, temp = num;
                while(temp) { 
                    sum_digits += temp % 10;
                    temp /= 10;
                }
    
                if (num > summedDigits[sum_digits][0]) {
                    summedDigits[sum_digits][1] = summedDigits[sum_digits][0]; 
                    summedDigits[sum_digits][0] = num;
                } 
                else if (num > summedDigits[sum_digits][1]) {
                    summedDigits[sum_digits][1] = num; 
                }
    
                if (summedDigits[sum_digits][1] > 0) {
                    max = std::max(max, summedDigits[sum_digits][0] + summedDigits[sum_digits][1]);
                }
            }
    
            return max;
        }
    };
    