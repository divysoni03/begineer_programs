#include <stdio.h>

// Function to solve Tower of Hanoi puzzle
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    // Base case: If there is only one disk, move it from source to destination
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Move n-1 disks from source to auxiliary peg using destination peg
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the nth disk from source to destination peg
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move the n-1 disks from auxiliary peg to destination peg using source peg
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int numDisks;

    // Input: Get the number of disks from the user
    printf("Enter the number of disks: ");
    scanf("%d", &numDisks);

    // Call the function to solve Tower of Hanoi
    towerOfHanoi(numDisks, 'A', 'B', 'C');

    return 0;
}
