#include <stdio.h>
#include "head.h"

int getArraylength(int* a){

    int summary=sizeof(*a);
    int sub=sizeof(a[0]);
    printf("summary=%d,sub=%d\n",summary,sub);
    return summary/sub;
}
