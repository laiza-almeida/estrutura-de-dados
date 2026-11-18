#include <stdio.h>

int main(){
    int *pti;
    int veti[]={10,7,2,6,3};
    pti = veti;
    printf("%d", *(pti+2));
    return 0;
}