 #include <stdio.h>

void fibonacci( int );

int main() {
    int terms;

    printf("Enter number of terms: ");
    if (scanf("%d", &terms) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    fibonacci(terms);

    return 0;
}

void fibonacci(int n) {
    int first = 0, second = 1, next;

    if (n <= 0) {
        printf("Number of terms must be positive.\n");
        return;
    }

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
    printf("\n");
}
