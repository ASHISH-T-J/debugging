/* Fix the errors, recompile and match against the input provided*/

#include <stdio.h>

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", x , y);

    int sum = addNumbers(x, y);
    printf("Sum: %d\n",& sum);

    return 0;
}

int addNumbers(int a, int b) {
    int result = a + b;
    return result;
}

