// Program demonstrating break and continue
#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {

        // Skip number 5
        if (i == 5) {
            continue;   // skips the rest of the loop for i = 5
        }

        // Stop the loop when i reaches 8
        if (i == 8) {
            break;      // exits the loop completely
        }

        printf("%d\n", i);
    }

    return 0;
}
