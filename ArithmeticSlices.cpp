class Solution {
public:
    int quanOfSlices(int slen)
    {
        return ((slen - 1)*(slen - 2))/2;
    }
    
    int numberOfArithmeticSlices(vector<int>& A) {
        if (A.size() < 3)
            return 0;
        int slen = 2;
        int squan = 0;
        for (int i = 2; i < A.size(); i++)
        {
            if (A[i] - A[i-1] == A[i-1] - A[i-2])
            {
                slen++;
                continue;
            }
            else if (slen > 2)
            {
                squan+= quanOfSlices(slen);
            }
            slen = 2;
        }
        if (slen > 2)
            squan += quanOfSlices(slen);
        return squan;
    }
};