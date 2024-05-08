#include <stdio.h>

int count_digit(int number) {
    if (number == 0)
        return 0;
    return 1 + count_digit(number / 10);
}

int main() {
    int num;

    printf("Enter any number : ");
    scanf("%d", &num);

    printf("Your entered total digits are : %d", count_digit(num));

    return 0;
}
