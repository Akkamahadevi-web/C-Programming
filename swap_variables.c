#include <stdio.h>

int main() {
    int a = 10, b = 20, temp;

    printf("--- Before Swapping ---\n");
    printf("a = %d, b = %d\n", a, b);

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("\n--- After Swapping ---\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
