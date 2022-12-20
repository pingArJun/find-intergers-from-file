#include <stdio.h>
#include <stdlib.h>

int main() {
  // Declare variables
  int num, sum = 0, count = 0;
  double average;

  // Open input file
  FILE *in_file = fopen("input.txt", "r");
  if (in_file == NULL) {
    printf("Error opening input file\n");
    return 1;
  }

  // Read integers from input file and calculate sum
  while (fscanf(in_file, "%d", &num) == 1) {
    sum += num;
    count++;
  }

  // Calculate average
  average = (double)sum / count;

  // Close input file
  fclose(in_file);

  // Open output file
  FILE *out_file = fopen("output.txt", "w");
  if (out_file == NULL) {
    printf("Error opening output file\n");
    return 1;
  }

  // Write sum and average to output file
  fprintf(out_file, "Sum: %d\n", sum);
  fprintf(out_file, "Average: %.2f\n", average);

  // Close output file
  fclose(out_file);

  return 0;
}
