# Summary of Debugging and Corrections

## Debugging Issues and Fixes:
1. **Loop Condition**: Fixed loop condition in `calculateAverage` function to iterate only over valid elements within the array.
2. **Data Type Issue**: Corrected data type used in the calculation of the average to ensure accurate floating-point division.
3. **Overflow Handling**: Changed the data type of the sum variable to `long long int` to avoid overflow for very large numbers.
4. **Handling Empty Array**: Added exception handling in the `calculateAverage` function to handle empty arrays without causing undefined behavior or crashes.

## Program Modifications:
- Modified the code to accept user inputs for the array elements, ensuring greater flexibility and usability.
- Implemented input validation to handle cases of invalid user input for the number of elements.

The corrected program now functions optimally, providing accurate averages and robust error handling for various scenarios.
