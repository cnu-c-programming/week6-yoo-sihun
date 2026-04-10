#include <stdio.h>

int main() {
    char *names[5] = {"kim", "lee", "park", "choi", "jeong"}; [cite: 121]

    for (int i = 0; i < 5; i++) { [cite: 122]
        for (int j = 0; ; j++) { [cite: 123]
            char c = *(*(names + i) + j); [cite: 125]
            if (c == '\0') [cite: 127]
                break; [cite: 129]
            printf("%c", c); [cite: 131]
        }
        printf("\n"); [cite: 134]
    }

    return 0;
}
