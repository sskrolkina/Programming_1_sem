#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,d,e,f,z1,z2;

    scanf("%f",&a);

    b = (a + 2) / sqrt(2 * a);
    c = a / (sqrt(2 * a) + 2);
    d = 2 / (a - sqrt(2 * a));
    e = (sqrt(a) - sqrt(2)) / (a + 2);
    f = 1 / ((sqrt(a) + sqrt(2)));
    z1 = (b - c + d) * e;
    z2 = f;

    printf("%f\n%f",z1,z2);

    return 0;

}