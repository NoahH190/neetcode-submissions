class Solution {
public:
    int getSum(int a, int b) {
        int sum = 0;
        int cout = 0; 
        int cin = 0;
        
        for(int i = 0; i < 32; i++){
            int temp = 0; 
            int bit_a; 
            int bit_b; 
            cin = cout; 

            bit_a = a&1;
            bit_b = b&1;

            a >>= 1;
            b >>= 1; 

            temp = bit_a ^ bit_b ^ cin; 
            sum = sum | (temp << i);

            cout = (bit_a&bit_b) | (bit_a&cin) | (bit_b&cin);
        }

        return sum; 
    }
};
