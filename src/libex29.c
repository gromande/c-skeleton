#include <stdio.h>
#include <ctype.h>
#include "dbg.h"

int print_a_message(const char *msg) {
    printf("A STRING: %s\n", msg);
    return 0;
}

/*typedef char (*convert_cb) (char c);

char to_upper(char c) {
  return toupper(c);
}

char to_lower(char c) {
  return tolower(c);
}*/

int uppercase(const char *msg) {
    int i = 0;

    // BUG: \0 termination problems
    for(i = 0; msg[i] != '\0'; i++) {
        printf("%c", toupper(msg[i]));
    }

    printf("\n");

    return 0;
}

int lowercase(const char *msg) {
    int i = 0;

    // BUG: \0 termination problems
    for(i = 0; msg[i] != '\0'; i++) {
        printf("%c", tolower(msg[i]));
    }

    printf("\n");

    return 0;
}

int fail_on_purpose(const char *msg) {
    return 1;
}
