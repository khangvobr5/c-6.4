#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trình có 2 nghiem phân biet: x1 = %.2f và x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Phuong trình có nghiem kép: x = %.2f\n", x1);
    } else {
        printf("Phuong trình vô nghiem trong tap so thuc.\n");
    }

    return 0;
}

