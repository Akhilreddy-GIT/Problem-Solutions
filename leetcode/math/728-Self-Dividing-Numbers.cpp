class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;

        for (int i = left; i <= right; i++) {
            int temp = i;
            bool valid = true;

            while (temp != 0) {
                int last = temp % 10;

                if (last == 0) {
                    valid = false;
                    break;
                }

                if (i % last != 0) {
                    valid = false;
                    break;
                }

                temp = temp / 10;
            }
            if (valid) {
                result.push_back(i);
            }
        }
        return result;
    }
};