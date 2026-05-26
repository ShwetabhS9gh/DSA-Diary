class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int countt = 0;

        for (int num : arr) {
            if (num % 2 != 0) {
                countt++;
                
                if (countt == 3)
                    return true;
            } else {
                countt = 0;
            }
        }

        return false;
    }
};