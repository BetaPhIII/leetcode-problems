class Solution {
    public:
        string intToRoman(int num) {
            int count[13] = {0};
            int n = 0;
            string numerals[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL","X", "IX", "V", "IV", "I"};
            string roman;
            while(num>0){
                if(num>=1000){
                    n = num/1000;
                    count[0]+=n;
                    num%=1000;
                }
                else if(num>=100){
                    n = num/100;
                    if(n>=9){
                        count[1]++;
                        num-=900;
                    }
                    else if(n>=5){
                        count[2]++;
                        num-=500;
                    }
                    else if(n>=4){
                        count[3]++;
                        num-=400;
                    }
                    else{
                        count[4]+=n;
                        num%=100;
                    }
                }
                else if(num>=10){
                    n = num/10;
                    if(n >= 9){
                        count[5]++;
                        num-=90;
                    }
                    else if(n >= 5){
                        count[6]++;
                        num-=50;
                    }
                    else if(n >= 4){
                        count[7]++;
                        num-=40;
                    }
                    else{
                        count[8]+=n;
                        num%=10;
                    }
                }
                else if(num>=1){
                    if(num >= 9){
                        n = num/9;
                        count[9]+=n;
                        num-=9;
                    }
                    else if(num >= 5){
                        count[10]++;
                        num-=5;
                    }
                    else if(num >= 4){
                        n = num/4;
                        count[11]+=n;
                        num-=4;
                    }
                    else{
                        n = num/1;
                        count[12]+=n;
                        num%=1;
                    }
                }
            }
            for(int i = 0; i<13; i++){
                for(int j = 0; j<count[i]; j++){
                    roman+= numerals[i];
                }
            }
            return roman;
        }
    };