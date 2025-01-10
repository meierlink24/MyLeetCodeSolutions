
class Solution {

public:

    bool isPalindrome(int x) {

        // Handle negative numbers and numbers ending with 0 (except 0 itself)

        if (x < 0 || (x % 10 == 0 && x != 0)) {

            return false;

        }


        std::vector<int> digits; // Digits holder


        // Extracting each digit out of int x

        while (x > 0) {

            int y = x % 10;

            digits.push_back(y);

            x = x / 10;

        }


        // Check if the number is a palindrome

        int n = digits.size();

        for (int i = 0; i < n / 2; i++) {

            if (digits[i] != digits[n - 1 - i]) {

                return false; // Not a palindrome

            }

        }

        return true; // If all digits matched

    }

};