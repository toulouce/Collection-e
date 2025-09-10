//Distance finder between two points in EUCLIDEAN space(who tf uses non-euclidean space anyway)
//Autocomplete almost write it all though
#include <stdio.h>
#include <math.h>
struct point {
    double x;
    double y;
};
double distance(struct point p1, struct point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main(void) { 
    double Distance = 0.0;
    struct point p1 = {};
    struct point p2 = {};
    printf("Enter x axis coordinates for point 1: ");
    scanf("%lf", &p1.x);
    printf("Enter y axis coordinates for point 1: ");
    scanf("%lf", &p1.y);
    printf("Enter x axis coordinates for point 2: ");
    scanf("%lf", &p2.x);
    printf("Enter y axis coordinates for point 2: ");
    scanf("%lf", &p2.y);
    Distance = distance(p1, p2);
    printf("The distance between the two points is: %.2lf\n", Distance);
    return 0;
}
