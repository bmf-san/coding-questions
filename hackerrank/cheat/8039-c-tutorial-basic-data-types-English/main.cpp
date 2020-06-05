#include <iostream>

int main()
{
    int i;
    long l;
    char c;
    float f;
    double d;

    scanf("%i %li %c %f %lf", &i, &l, &c, &f, &d);
    printf("%d\n%ld\n%c\n%f\n%lf", i, l, c, f, d);
    return 0;
}