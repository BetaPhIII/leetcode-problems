class ProductOfNumbers {
    public:
        vector<int> nums{1};
    
        void add(int num) {
            if (num != 0) {
                nums.push_back(num * nums.back());
            } else {
                nums.clear();
                nums.push_back(1);
            }
        }
    
        int getProduct(int k) {
            return k < nums.size() ? nums.back() / nums[nums.size() - k - 1] : 0;
        }
    };
    
    /**
     * Your ProductOfNumbers object will be instantiated and called as such:
     * ProductOfNumbers* obj = new ProductOfNumbers();
     * obj->add(num);
     * int param_2 = obj->getProduct(k);
     */