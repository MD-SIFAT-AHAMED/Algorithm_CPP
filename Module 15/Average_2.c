// #include <stdio.h>

// int main() {
//     double A, B,C;
//     scanf("%lf %lf %lf", &A, &B ,&C);

//     double Average = (A * 2 + B * 3 + C * 5) / (2 + 3 + 5);
//     printf("MEDIA = %.1lf\n",Average);

//     return 0;
// }


#include <stdio.h>

int main() {
 
    double A,B,C,MEDIA;
    scanf("%lf %lf %lf", &A , &B , &C );
    MEDIA = (A * 2.0 + B * 3.0 + C * 5.0) / (2.0 + 3.0 +5.0);
    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;
}