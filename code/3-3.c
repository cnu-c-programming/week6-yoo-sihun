#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    int (*p1)[2][3] = &arr;
    int (*p2)[3] = &arr[0];
    int *p3 = &arr[0][0];

    printf("%p\n", (void*)p1);
    printf("%p\n", (void*)p2);
    printf("%p\n", (void*)p3);
    printf("\n");

    printf("%lu\n", (unsigned long long)((char*)(p1 + 1) - (char*)p1));
    printf("%lu\n", (unsigned long long)((char*)(p2 + 1) - (char*)p2));
    printf("%lu\n", (unsigned long long)((char*)(p3 + 1) - (char*)p3));

    return 0;
}
