#include <stdio.h>

// Function to solve Tower of Hanoi using recursion
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int disks = 3;
    printf("Tower of Hanoi steps for %d disks:\n", disks);
    towerOfHanoi(disks, 'A', 'B', 'C');
    return 0;
}
