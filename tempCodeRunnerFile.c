#include <stdio.h>

double calculate(double, double);
int areaOfRect(int, int);

int main() {
    double result = calculate(5.0, 3.0);
    printf("The result is: %.2f\n", result);
    

    int length = 5;
    int width = 10;
    int area = areaOfRect(length, width);
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}

double calculate(double a, double b) {
    int sum = a + b;
    return sum;
}

int areaOfRect(int length, int width) {
    int area = length * width;
    return area;
}

