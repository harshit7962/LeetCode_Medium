class Solution {
public:
    int trailingZeroes(int n) {
        long long int count=0, i=5;
        for(int i=5;i<=n;i=i*5) count+=(n/i);
        
        return count;
    }
};
