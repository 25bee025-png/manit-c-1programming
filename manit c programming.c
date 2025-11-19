#include <stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d\n", sum);

    return 0;
}

#include <stdio.h>

void main() {
    int a, b, product;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    product = a * b;

    printf("Product = %d\n", product);
}
#include <stdio.h>

void main() {
    float a, b, result;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    result = a / b;

    printf("Quotient = %.2f\n", result);
}

#include <stdio.h>

void main() {
    float a, b, add, sub, mul, div;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;

    printf("Addition = %.2f\n", add);
    printf("Subtraction = %.2f\n", sub);
    printf("Multiplication = %.2f\n", mul);
    printf("Division = %.2f\n", div);
}
#include <stdio.h>

void main() {
    float p, r, t, si;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("Simple Interest = %.2f\n", si);
}
#include <stdio.h>

void main() {
    int hours, minutes;

    printf("Enter hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;

    printf("Minutes = %d\n", minutes);
}
#include <stdio.h>

void main() {
    int minutes;
    float hours;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60.0;
    printf("Hours = %f", hours);
}
#include <stdio.h>

void main() {
    float dollar, rupee;
    printf("Enter dollars: ");
    scanf("%f", &dollar);
    rupee = dollar * 48;
    printf("Rupees = %f", rupee);
}
#include <stdio.h>

void main() {
    float rupee, dollar;
    printf("Enter rupees: ");
    scanf("%f", &rupee);
    dollar = rupee / 48;
    printf("Dollars = %f", dollar);
}

#include <stdio.h>

void main() {
    float rupee, dollar;
    printf("Enter rupees: ");
    scanf("%f", &rupee);
    dollar = rupee / 48;
    printf("Dollars = %f", dollar);
}
#include <stdio.h>

void main() {
    float grams, kg;
    printf("Enter grams: ");
    scanf("%f", &grams);
    kg = grams / 1000;
    printf("Kilograms = %f", kg);
}
#include <stdio.h>

void main() {
    float grams, kg;
    printf("Enter grams: ");
    scanf("%f", &grams);
    kg = grams / 1000;
    printf("Kilograms = %f", kg);
}
#include <stdio.h>

void main() {
    float kg, grams;
    printf("Enter kilograms: ");
    scanf("%f", &kg);
    grams = kg * 1000;
    printf("Grams = %f", grams);
}
#include <stdio.h>

void main() {
    float bytes;
    printf("Enter bytes: ");
    scanf("%f", &bytes);
    printf("KB = %f\n", bytes / 1024);
    printf("MB = %f\n", bytes / (1024 * 1024));
    printf("GB = %f\n", bytes / (1024 * 1024 * 1024));
}
#include <stdio.h>

void main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    f = (9.0/5)*c + 32;
    printf("Fahrenheit = %f", f);
}
#include <stdio.h>

void main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (5.0/9) * (f - 32);
    printf("Celsius = %f", c);
}
#include <stdio.h>

void main() {
    float basic, da, hra, pf, gross, net;
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    da = 0.20 * basic;
    hra = 0.15 * basic;
    pf = 0.12 * basic;

    gross = basic + da + hra;
    net = gross - pf;

    printf("Gross Salary = %f\n", gross);
    printf("Net Salary = %f\n", net);
}
#include <stdio.h>

void main() {
    float base, height, area;
    printf("Enter base: ");
    scanf("%f", &base);
    printf("Enter height: ");
    scanf("%f", &height);
    area = 0.5 * base * height;
    printf("Area = %f", area);
}
#include <stdio.h>

void main() {
    float r, area;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = 3.14 * r * r;
    printf("Area = %f", area);
}
#include <stdio.h>

void main() {
    float length, width, area;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter width: ");
    scanf("%f", &width);
    area = length * width;
    printf("Area = %f", area);
}
#include <stdio.h>

void main() {
    float side, area;
    printf("Enter side: ");
    scanf("%f", &side);
    area = side * side;
    printf("Area = %f", area);
}
#include <stdio.h>

void main() {
    float r, h, area;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Enter height: ");
    scanf("%f", &h);
    area = 2 * 3.14 * r * (h + r);
    printf("Area = %f", area);
}
#include <stdio.h>

void main() {
    float r, l, area;
    printf("Enter radius: ");
    scanf("%f", &r);
    printf("Enter slant height: ");
    scanf("%f", &l);
    area = 3.14 * r * (r + l);
    printf("Area = %f", area);
}
#include <stdio.h>

void main() {
    int a, b, temp;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d", a, b);
}
#include <stdio.h>
void main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    if(a > b) {
        printf("Largest: %d\nSmallest: %d\n", a, b);
    } else {
        printf("Largest: %d\nSmallest: %d\n", b, a);
    }
}
#include <stdio.h>
void main() {
    int a, b, c, largest, smallest;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a >= b && a >= c)
        largest = a;
    else if(b >= a && b >= c)
        largest = b;
    else
        largest = c;

    if(a <= b && a <= c)
        smallest = a;
    else if(b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
}
#include <stdio.h>
void main() {
    float gross, allowance, deduction, net;
    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if(gross > 10000) {
        allowance = 0.10 * gross;
        deduction = 0.03 * gross;
    } else if(gross > 5000) {
        allowance = 0.07 * gross;
        deduction = 0.02 * gross;
    } else {
        allowance = 0.05 * gross;
        deduction = 0.01 * gross;
    }
    net = gross + allowance - deduction;
    printf("Net Salary: %.2f\n", net);
}
#include <stdio.h>
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 7 == 0)
        printf("%d is divisible by 7.\n", num);
    else
        printf("%d is not divisible by 7.\n", num);
}
#include <stdio.h>
void main() {
    float grossSales, discount, netSales;
    printf("Enter gross sales: ");
    scanf("%f", &grossSales);

    if(grossSales > 20000)
        discount = 0.15 * grossSales;
    else if(grossSales > 10000)
        discount = 0.10 * grossSales;
    else
        discount = 0.05 * grossSales;

    netSales = grossSales - discount;
    printf("Net Sales: %.2f\n", netSales);
}
#include <stdio.h>
void main() {
    int sub1, sub2, sub3, total;
    float avg;
    printf("Enter marks for three subjects: ");
    scanf("%d%d%d", &sub1, &sub2, &sub3);

    total = sub1 + sub2 + sub3;
    avg = total / 3.0;

    printf("Total: %d\nAverage: %.2f\n", total, avg);

    if(sub1 < 35 || sub2 < 35 || sub3 < 35) {
        printf("Fail (marks in a subject < 35)\n");
    } else {
        if(avg >= 70)
            printf("Distinction\n");
        else if(avg >= 60)
            printf("First Class\n");
        else if(avg >= 50)
            printf("Second Class\n");
        else if(avg >= 35)
            printf("Third Class\n");
        else
            printf("Fail\n");
    }
}





