class Solution {
  public:
   std::vector<std::string> result;
    // The input string of digits
    std::string s;
    // The target value to achieve
    int target;

    /**
     * @brief The main backtracking function to find expressions.
     * * @param index The current position in the string 's'.
     * @param path The expression string built so far.
     * @param current_val The evaluated value of the expression in 'path'.
     * @param last_operand The value of the last operand added to the expression.
     */
    void backtrack(int index, std::string path, long current_val, long last_operand) {
        // Base case: If we have processed the entire string
        if (index == s.length()) {
            // If the final evaluated value equals the target, add the expression to results
            if (current_val == target) {
                result.push_back(path);
            }
            return;
        }

        // Iterate through all possible next operands
        for (int i = index; i < s.length(); ++i) {
            // Get the substring for the current operand
            std::string current_operand_str = s.substr(index, i - index + 1);

            // Pruning: Avoid numbers with leading zeros unless it's the number 0 itself
            if (current_operand_str.length() > 1 && current_operand_str[0] == '0') {
                break;
            }

            long current_operand_num = std::stol(current_operand_str);

            if (index == 0) {
                // This is the first number in the expression, no operator yet
                backtrack(i + 1, current_operand_str, current_operand_num, current_operand_num);
            } else {
                // Try adding operators
                
                // Addition
                backtrack(i + 1, path + "+" + current_operand_str, current_val + current_operand_num, current_operand_num);

                // Subtraction
                backtrack(i + 1, path + "-" + current_operand_str, current_val - current_operand_num, -current_operand_num);

                // Multiplication
                // Key Insight: To handle precedence, we adjust the current value.
                // (current_val - last_operand) undoes the previous operation.
                // Then we add (last_operand * current_operand_num) to apply multiplication correctly.
                backtrack(i + 1, path + "*" + current_operand_str, (current_val - last_operand) + (last_operand * current_operand_num), last_operand * current_operand_num);
            }
        }
    }

    vector<string> findExpr(string &s, int target) {
                    if (s.empty()) {
                    return {};
                }
                this->s = s;
                this->target = target;
                backtrack(0, "", 0, 0);
                return result;
    }
};