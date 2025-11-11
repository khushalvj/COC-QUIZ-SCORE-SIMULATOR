#include <stdio.h>

// To calculate mean (average)
float findMean(int scores[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return (float)sum / n;
}

// To find highest score
int findHighest(int scores[], int n) {
    int highest = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

// To find lowest score
int findLowest(int scores[], int n) {
    int lowest = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

// To print percentages
void printPercentages(int scores[], int n, float totalMarks) {
    printf("\nIndividual Percentages:\n");
    for (int i = 0; i < n; i++) {
        float percentage = (scores[i] / totalMarks) * 100;
        printf("Student %d: %.2f%%\n", i + 1, percentage);
    }
}

int main() {
    int n;
    float totalMarks;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter total marks of the quiz (e.g. 50): ");
    scanf("%f", &totalMarks);

    int scores[n];

    printf("\nEnter %d scores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    float mean = findMean(scores, n);
    int highest = findHighest(scores, n);
    int lowest = findLowest(scores, n);

    float classPercentage = (mean / totalMarks) * 100;

    printf("\nSCORE REPORT:\n");
    printf("Class Average Score: %.2f\n", mean);
    printf("Class Average Percentage: %.2f%%\n", classPercentage);
    printf("Highest Score: %d\n", highest);
    printf("Lowest Score: %d\n", lowest);

    printPercentages(scores, n, totalMarks);

    printf("    THE END :)    \n");

    return 0;
}
