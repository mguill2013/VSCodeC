#include <stdio.h> // For printf, scanf, getchar
#include <ctype.h> // Required for all ctype.h functions

int main() {
    char ch; // Declare a character variable

    printf("--- Character Handling Functions (ctype.h Practice ---\n");
    printf("Enter a character: ");
    
    // Read a single character, then consume the leftover newline.
    // Using scanf("%c%c*c") to handle potential newline in the buffer from previous inputs.
    // If running this alone, scanf("%c", &ch) would suffice, but this approach is more robust.
    scanf("%c", &ch);
    getchar(); // Consume any leftover newline character if scanf didn't (e.g., if input was exactly 1 char + Enter)

    printf("\n--- Analysis of '%c' ---\n", ch);

    // 1. isdigit()
    if (isdigit(ch)) {
        printf(" - '%c' is a digit.\n", ch);
    } else {
        printf(" - '%c' is NOT a digit.\n", ch);
    }

    // 2. isalpha()
    if (isalpha(ch)) {
        printf(" - '%c' is an alphabetic character.\n", ch);
    } else {
        printf(" - '%c' is NOT an alphabetic character.\n", ch);
    }

    // 3. isalnum()
    if (isalnum(ch)) {
        printf(" - '%c' is an alphanumeric character.\n", ch);
    } else {
        printf(" - '%c' is NOT an alphanumeric character.\n", ch);
    }
    
    // 4. isxdigit()
    if (isxdigit(ch)) {
        printf(" - '%c' is a hexadecimal digit.\n", ch);
    } else {
        printf(" - '%c' is NOT a hexadecimal digit.\n", ch);
    }

    // 5. islower()
    if (islower(ch)) {
        printf(" - '%c' is a lowercase letter.\n", ch);
    } else {
        printf(" - '%c' is NOT a lowercase letter.\n", ch);
    }

    // 6. isupper()
    if (isupper(ch)) {
        printf(" - '%c' is an uppercase letter.\n", ch);
    } else {
        printf(" - '%c' is NOT an uppercase letter.\n", ch);
    }

    // 7. isspace()
    if (isspace(ch)) {
        printf(" - '%c' is a whitespace character.\n", ch);
    } else {
        printf(" - '%c' is NOT a whitespace character.\n", ch);
    }

    // 8. ispunct()
    if (ispunct(ch)) {
        printf(" - '%c' is a punctuation character.\n", ch);
    } else {
        printf(" - '%c' is NOT a punctuation character.\n", ch);
    }

    // 9. iscntrl()
    if (iscntrl(ch)) {
        printf(" - '%c' is a control character.\n", ch);
    } else {
        printf(" - '%c' is NOT a control character.\n", ch);
    }

    // 10. isprint()
    if (isprint(ch)) {
        printf(" - '%c' is a printable character.\n", ch);
    } else {
        printf(" - '%c' is NOT a printable character.\n", ch);
    }

    // 11. isgraph()
    if (isgraph(ch)) {
        printf(" - '%c' is a graphical character.\n", ch);
    } else {
        printf(" - '%c' is NOT a graphical character.\n", ch);
    }

    printf("\n--- Character Case Conversion ---\n");

    // 12. tolower()
    printf(" - tolower('%c') returns: '%c' (ASCII: %d)\n", ch, tolower(ch), tolower(ch));

    // 13. toupper()
    printf(" - toupper('%c') returns: '%c' (ASCII: %d)\n", ch, toupper(ch), toupper(ch));
    
    return 0;
}