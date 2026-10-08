#include <stdio.h>

int main() {
    int age;
    float height;
    char grade;

    // Taking multiple inputs using scanf
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your grade (A/B/C): ");
    scanf(" %c", &grade); // Note the space before %c to ignore leading whitespace

    // Displaying the input data
    printf("\n--- User Details ---\n");
    printf("Age: %d years\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}
