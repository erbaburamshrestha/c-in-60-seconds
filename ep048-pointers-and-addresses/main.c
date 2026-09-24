#include <stdio.h>

int main(void) {
    int age = 25;
    int *p = &age;      // p stores the address of age

    printf("%d\n", age);  // 25
    printf("%d\n", *p);   // 25  (value at that address)
    *p = 30;              // change age through the pointer
    printf("%d\n", age);  // 30
    return 0;
}
