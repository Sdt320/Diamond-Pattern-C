# Diamond-Pattern-C
## Explanation:
1. **Initialization**: 

The variable k is set to 10, but it can be changed to any odd number to adjust the pattern size.
n is calculated as k / 2, which is used for positioning the asterisks.

2. **Nested Loops**:

The outer loop iterates through rows.
The inner loop iterates through columns.
The conditions inside the inner loop check if the current position should have an asterisk based on the diamond pattern logic.

3. **Pattern Printing**:
   - We calculate `n` as `k / 2`, which is the center offset for the pattern.
   - We iterate over each position in a `k x k` grid.
   - We print an asterisk (`*`) if the current position satisfies any of the conditions for being on the diamond:
     - `i + j == n` (top-left to bottom-right diagonal)
     - `j - i == n` (top-right to bottom-left diagonal)
     - `i - j == n` (bottom-left to top-right diagonal)
     - `i + j == k + n - 1` (bottom-right to top-left diagonal)

      Here's how the output will look with the provided C code for `k = 9`:

### Output:
```
        *         
      *   *       
    *       *     
  *           *   
*               * 
  *           *   
    *       *     
      *   *       
        *         
```

