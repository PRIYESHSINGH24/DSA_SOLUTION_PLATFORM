#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char str[], int start, int end) {
    if (start >= end) return;  // Base case
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverseString(str, start + 1, end - 1);  // Recursive step
}

int main() {
    char str[] = "hello";
    reverseString(str, 0, strlen(str) - 1);
    printf("Reversed string is: %s\n", str);
    return 0;
}
