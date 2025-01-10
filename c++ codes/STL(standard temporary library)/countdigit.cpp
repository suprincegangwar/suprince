class Solution {
public:
    int count(string num1, string num2, int min_sum, int max_sum) {
        long long n1 = stoll(num1) , n2 = stoll(num2);
        int result = 0 ;
        for(long long i  = n1 ; i<= n2 ; i++){
            long long  t = i , p = 0;
            while(t!=0){
                p += t%10; 
                t = t/10;
            }
            if(p >= min_sum && p<=max_sum){
                result++;
            }
        }
    return result; }
};