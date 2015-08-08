#include <stdio.h>
#include <add.h>
#include <sub.h>

int main(void) {
    int result;

    result = add(1,2);
    printf("add(1,2)=%i\n", result);
    result = sub(1,2);
    printf("sub(1,2)=%i\n", result);

    return 0;
}
