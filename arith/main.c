#include <stdio.h>
int add(int, int);
int sub(int, int);
int main(int argc, char const *argv[])
{
    printf("add: %d\n", add(20,30));
    printf("sub: %d\n", sub(20,10));
    return 0;
}
