#include <stdio.h>

int getuid();
int getgid();

int main()
{
    printf("user id: %d\ngroup id: %d\n", getuid(), getgid());
    return 0;
}