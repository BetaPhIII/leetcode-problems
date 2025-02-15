class Solution {
    public:
        int largestInteger(int num) {
            std::priority_queue<int, std::vector<int>, std::greater<int>> evens;
            std::priority_queue<int, std::vector<int>, std::greater<int>> odds;
            unsigned int n = num;
            unsigned int x = num;
            while(x>0){
                n = x;
                n%=10;
                (n%2) ? odds.push(n): evens.push(n);
                x/=10;
                std::cout << n;
            }
            x = num;
            n = num;
            unsigned int mul = 1;
            unsigned int newNum = 0;
            while(x>0){
                n = x;
                n%=10;
                if(n%2){
                    newNum+=odds.top()*mul;
                    odds.pop();
                }
                else{
                    newNum+=evens.top()*mul;
                    evens.pop();
                }
                x/=10;
                mul*=10;
            }
            return newNum;
        }
    };