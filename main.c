#include <stdio.h>
#include "drivers/lib.h"

int main()
{
    int res = add(1,3);
    printf("This will work until you mess it up!  The answer is %d. \n", res);
    return 0;
}
