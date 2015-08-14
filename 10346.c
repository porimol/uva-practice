#include <stdio.h>

int main()
{

    int cig, ret, total = 0, div, mod;

    while(scanf("%d %d", &cig, &ret) == 2){

        total = cig;

        while(cig >= ret){
            div = cig / ret;
            mod = cig % ret;
            total += div;

            cig = div + mod;
        }

        printf("%d\n", total);
    }

    return 0;
}
