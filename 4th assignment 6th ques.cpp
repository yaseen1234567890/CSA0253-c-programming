#include <stdio.h>
#include <unistd.h>

int main()
 {
    int a = 10,fork;
    if ((fork() == 0))
        a++;
    printf("%d\n", a);
    return 0;
}

