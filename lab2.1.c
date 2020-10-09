#include<stdio.h>
#include<math.h>
#include<locale.h>
void main()
{
    float a1, a2, b1, b2, c1, c2, x1, x2, x3, S;
    setlocale(LC_ALL, "russian");
    printf("Введите координаты, по которым будет построен треугольник\nВведите координаты первой точки:\n");
    scanf_s("%f%f", &a1, &a2);
    printf("Введите координаты второй точки:\n");
    scanf_s("%f%f", &b1, &b2);
    printf("Введите координаты третьей точки:\n");
    scanf_s("%f%f", &c1, &c2);
    x1 = sqrt(pow(b1 - a1, 2) + pow(b2 - a2, 2));
    x2 = sqrt(pow(c1 - b1, 2) + pow(c2 - b2, 2));
    x3 = sqrt(pow(c1 - a1, 2) + pow(c2 - a2, 2));
    S = sqrt(((x1 + x2 + x3) / 2)*((x1 + x2 + x3) / 2 - x1)*((x1 + x2 + x3) / 2 - x2)*((x1 + x2 + x3) / 2 - x3));
    if (x1*x1 + x2*x2 == x3*x3 && x1 != 0 && x2 != 0 && x3 != 0 && S!=0) printf("Треугольник прямоугольный\n");
    else if (x1*x1 + x3*x3 == x2*x2 && x1 != 0 && x2 != 0 && x3 != 0 && S != 0) printf("Треугольник прямоугольный\n");
    else if (x3*x3 + x2*x2 == x1*x1 && x1 != 0 && x2 != 0 && x3 != 0 && S != 0) printf("Треугольник прямоугольный\n");
    else if (x1*x1 + x2*x2 < x3*x3 && S != 0) printf("Треугольник тупоугольный\n");
    else if (x1*x1 + x3*x3 < x2*x2 && S != 0) printf("Треугольник тупоугольный\n");
    else if (x3*x3 + x2*x2 < x1*x1 && S != 0) printf("Треугольник тупоугольный\n");
    else if (a1 == b1 && a1 == c1 && b1 == c1 && a2 == b2 && a2 == c2 && b2 == c2) printf("Это координаты точки\n");
    else if (S == 0) printf("Это координаты прямой\n");
    else printf("Треугольник остроугольный\n");
}