#include <stdio.h>

int main() {
    float score;

    printf("Enter your score: ");
    scanf("%f", &score);

    if (score >= 90 && score <= 100) {
        printf("Letter Grade: A\n");
    }
    else if (score >= 80 && score < 90) {
        printf("Letter Grade: B\n");
    }
    else if (score >= 70 && score < 80) {
        printf("Letter Grade: C\n");
    }
    else if (score >= 60 && score < 70) {
        printf("Letter Grade: D\n");
    }
    else if (score >= 0 && score < 60) {
        printf("Letter Grade: F\n");
    }
    else {
        printf("Invalid score. Please enter a score from 0 to 100.\n");
    }

    return 0;
}
