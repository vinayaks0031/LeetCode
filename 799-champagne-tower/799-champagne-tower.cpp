class Solution {
public:
double champagneTower(int poured, int query_row, int query_glass) {
        double pyramid[101][101] = {0.0};
    
        pyramid[0][0] = poured;
    
        for (int i = 0; i < 100; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (pyramid[i][j] >= 1)
                {  
                    pyramid[i + 1][j]     += (pyramid[i][j] - 1) / 2.0;
                    pyramid[i + 1][j + 1] += (pyramid[i][j] - 1) / 2.0;
                    pyramid[i][j] = 1;
                }
            }
        }
        return pyramid[query_row][query_glass];
    }
};