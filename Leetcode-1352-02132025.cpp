class ProductOfNumbers {
    public:
        int buffer[40000] = {0};
        int index = 39999;
    
        void add(int num) {
            this->buffer[this->index] = num;
            this->index--;
            
        }
        
        int getProduct(int k) {
            int size = 40000;
            int product = 1;
            while(k>0){
                product*=this->buffer[this->index+k];
                k--;
            }
            return product;
        }
    };
    
    /**
     * Your ProductOfNumbers object will be instantiated and called as such:
     * ProductOfNumbers* obj = new ProductOfNumbers();
     * obj->add(num);
     * int param_2 = obj->getProduct(k);
     */