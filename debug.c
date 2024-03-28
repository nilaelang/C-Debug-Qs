#include <stdio.h>

double calculateAverage(int numbers[], int size) {
  if (size == 0) {
    return -1.0;  // Handle empty array case
  }

  int i,sum = 0;
  for (i = 0; i < size; i++) {
    sum += numbers[i];
  }
  return (double)sum / size;
}

int main() {
  int i,numElements;

  printf("Enter the number of elements (positive integer): ");
  while (scanf("%d", &numElements) != 1 || numElements <= 0) {
    printf("Invalid input. Please enter a positive integer: ");
    scanf("%d"); // Discard invalid input
  }

  int numbers[numElements];

  printf("Enter %d numbers:\n", numElements);
  for (i = 0; i < numElements; i++) {
    scanf("%d", &numbers[i]);
  }

  double average = calculateAverage(numbers, numElements);

  if (average == -1.0) {
    printf("Error: Cannot calculate average for an empty array.\n");
  } else {
    printf("Average: %.2f\n", average);
  }

  return 0;
}
