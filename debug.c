#include <stdio.h>

long long calculateAverage(int numbers[], int size) {
    if (size == 0) {
        return -1.0; // Or throw an exception
    }

    long long sum = 0;  // Use a larger data type to avoid overflow
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return (double)sum / size;
}

int main() {
    int numbers[] = {5, 10, 15, 20, 25};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    double average = calculateAverage(numbers, size);

    if (average == -1.0) {
        printf("Error: Empty array\n");
    } else {
        printf("Average: %f\n", average);
    }

    return 0;
}
