#include <stdlib.h>

char *ft_strdup(char *src) {
    // Calculate the length of the source string
    int length = 0;
    while (src[length] != '\0') {
        length++;
    }

    // Allocate memory for the duplicate string
    char *duplicate = (char *)malloc(length + 1); // +1 for the null terminator

    // Check if memory allocation was successful
    if (duplicate == NULL) {
        return NULL;
    }

    // Copy the source string to the duplicate string
    for (int i = 0; i <= length; i++) {
        duplicate[i] = src[i];
    }

    return duplicate;
}
