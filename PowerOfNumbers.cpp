// Rest of the code is already given

class Solution
{
    public:
    long long modfun(long long n, long long R)
    {
        if (n == 0) 
            return 0; 
        if (R == 0)  
            return 1; 
        long long y; 
        if (R % 2 == 0)
        { 
            y = modfun(n, R/2);  
            y = (y * y) % mod; 
        }
        else
        { 
            y = n % mod; 
            y = (y * modfun(n, R - 1) % mod) % mod; 
        } 
        return ((y + mod) % mod);  
    }
    long long power(int N,int R)
    {
        return modfun(N,R)%mod;
    }
};