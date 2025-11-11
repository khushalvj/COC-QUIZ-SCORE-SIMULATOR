#include <stdio.h>

// Calculate mean (average)
float average(int scores[], int n) {
 int sum = 0;
for (int i = 0; i < n; i++) {
 sum += scores[i];
}
return (n > 0) ? (float)sum / n : 0.0f;
}

// Find highest score
int findHighest(int scores[], int n) {
 int highest = scores[0];
for (int i = 1; i < n; i++) {
if (scores[i] > highest) {
highest = scores[i];
} }
    return highest;
}

// Find lowest score
int findLowest(int scores[], int n) {
int lowest = scores[0];
for (int i = 1; i < n; i++) {
if (scores[i] < lowest) {
lowest = scores[i];
}
}
return lowest;
}

// Print percentages for each student
void printPercentages(int scores[], int n, float totalMarks) {
printf("\nIndividual Percentages:\n");
 for (int i = 0; i < n; i++) {
float percentage = (scores[i] / totalMarks) * 100.0f;
printf("Student %d: %.2f%%\n", i + 1, percentage);
}
}

int main(void) {
    int n;
    float totalMarks;

    printf("How many students are there: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
     printf("Invalid number of students.\n");
    return 1;
    }

    printf("Enter total marks of the quiz (e.g., 50): ");
    if (scanf("%f", &totalMarks) != 1 || totalMarks <= 0.0f) {
    printf("Invalid total marks.\n");
    return 1;
    }

    int scores[n];

    printf("\nEnter %d scores:\n", n);
    for (int i = 0; i < n; i++) {
    if (scanf("%d", &scores[i]) != 1) {
    printf("Invalid input.\n");
     return 1;
    }
    }

    float mean = average(scores, n);
    int highest = findHighest(scores, n);
    int lowest = findLowest(scores, n);
    float classPercentage = (mean / totalMarks) * 100.0f;

    printf("\nSCORE REPORT:\n");
    printf("Class Average Score: %.2f\n", mean);
    printf("Class Average Percentage: %.2f%%\n", classPercentage);
    printf("Highest Score: %d\n", highest);
    printf("Lowest Score: %d\n", lowest);

    printPercentages(scores, n, totalMarks);

    printf("\nTHE END :)\n");
    return 0;
}
