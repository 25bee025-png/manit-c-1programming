#include <stdio.h>
void main() {
    int i;
    for(i = 1; i <= 10; i++)
        printf("%d ", i);
}
#include <stdio.h>
void main() {
    int i;
    for(i = 1; i <= 10; i++)
        printf("%d ", 2*i-1);
}
#include <stdio.h>
void main() {
    int i;
    for(i = 1; i <= 10; i++)
        printf("%d ", 2*i);
}
#include <stdio.h>
void main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        printf("%d ", i);
}
#include <stdio.h>
void main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        printf("%d ", 2*i-1);
}
#include <stdio.h>
void main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        printf("%d ", 2*i);
}
#include <stdio.h>
void main() {
    int i, n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        sum += i;
    printf("Sum: %d", sum);
}
#include <stdio.h>
void main() {
    int i, n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        sum += 2*i-1;
    printf("Sum: %d", sum);
}
#include <stdio.h>
void main() {
    int i, n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        sum += 2*i;
    printf("Sum: %d", sum);
}
#include <stdio.h>
void main() {
    int i, n, fact = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial: %d", fact);
}
#include <stdio.h>
void main() {
    int i;
    for(i = 0; i < 5; i++)
        printf("YourName\n");
}
#include <stdio.h>
void main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        printf("YourName\n");
}#include <stdio.h>
void main() {
    int i, sum = 0;
    for(i = 1; i <= 100; i++)
        if(i % 13 == 0) sum += i;
    printf("Sum: %d", sum);
}
#include <stdio.h>
void main() {
    int i, n = 10, val, sum = 0;
    float mean;
    for(i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &val);
        sum += val;
    }
    mean = sum / (float)n;
    printf("Sum = %d, Mean = %.2f", sum, mean);
}
#include <stdio.h>
void main() {
    int i, n, val, sum = 0;
    float mean;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &val);
        sum += val;
    }
    mean = sum / (float)n;
    printf("Sum = %d, Mean = %.2f", sum, mean);
}
#include <stdio.h>
void main() {
    int i, num, largest, smallest;
    printf("Enter number 1: ");
    scanf("%d", &num);
    largest = smallest = num;
    for(i = 2; i <= 100; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num > largest) largest = num;
        if(num < smallest) smallest = num;
    }
    printf("Largest = %d, Smallest = %d", largest, smallest);
}
#include <stdio.h>
void main() {
    int i, num, largest, smallest;
    printf("Enter number 1: ");
    scanf("%d", &num);
    largest = smallest = num;
    for(i = 2; i <= 100; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num > largest) largest = num;
        if(num < smallest) smallest = num;
    }
    printf("Largest = %d, Smallest = %d", largest, smallest);
}
#include <stdio.h>
void main() {
    int i, n = 200, val, pos = 0, neg = 0, zero = 0;
    for(i = 0; i < n; i++) {
        printf("Enter a value: ");
        scanf("%d", &val);
        if(val > 0) pos++;
        else if(val < 0) neg++;
        else zero++;
    }
    printf("+ve: %d, -ve: %d, zeroes: %d", pos, neg, zero);
}
#include <stdio.h>
void main() {
    int i, boys = 0, girls = 0;
    char sex;
    for(i = 0; i < 50; i++) {
        printf("Enter sex (M/F): ");
        scanf(" %c", &sex);
        if(sex == 'M' || sex == 'm') boys++;
        else if(sex == 'F' || sex == 'f') girls++;
    }
    printf("Boys: %d, Girls: %d", boys, girls);
}
#include <stdio.h>
void main() {
    int i;
    for(i=1; i<=100; i++)
        if(i%5==0) printf("%d ", i);
}
#include <stdio.h>
void main() {
    int i;
    for(i=1; i<=100; i++)
        if(i%3==0) printf("%d ", i);
}
#include <stdio.h>
void main() {
    int n, d, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n > 0) {
        rev = rev*10 + n%10;
        n = n/10;
    }
    while(rev > 0) {
        d = rev%10;
        printf("%d ", d);
        rev = rev/10;
    }
}
#include <stdio.h>
void main() {
    int n, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n==0) count=1;
    while(n != 0) {
        count++;
        n = n/10;
    }
    printf("Digits: %d", count);
}
#include <stdio.h>
void main() {
    int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n != 0) {
        sum += n%10;
        n = n/10;
    }
    printf("Sum: %d", sum);
}
#include <stdio.h>
void main() {
    int n, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n != 0) {
        rev = rev*10 + n%10;
        n /= 10;
    }
    printf("Reverse: %d", rev);
}
#include <stdio.h>
void main() {
    int n, temp, rev = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    if(rev == n) printf("Palindrome");
    else printf("Not Palindrome");
}
#include <stdio.h>
void main() {
    int n, temp, sum = 0, r;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while(temp != 0) {
        r = temp%10;
        sum += r*r*r;
        temp = temp/10;
    }
    if(sum == n) printf("Armstrong");
    else printf("Not Armstrong");
}
#include <stdio.h>
void main() {
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        if(n%i == 0) printf("%d ", i);
    }
}
#include <stdio.h>
void main() {
    int n, i, sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i=1; i<n; i++)
        if(n%i==0) sum += i;
    if(sum == n) printf("Perfect");
    else printf("Not Perfect");
}
#include <stdio.h>
void main() {
    int n, i, flag = 1;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n<=1) flag=0;
    for(i=2; i<=n/2; i++) {
        if(n%i==0) {
            flag = 0; break;
        }
    }
    if(flag == 1) printf("Prime");
    else printf("Not Prime");
}
#include <stdio.h>
void main() {
    int i, j, flag;
    for(i=2; i<=500; i++) {
        flag = 1;
        for(j=2; j<=i/2; j++)
            if(i%j==0) { flag=0; break; }
        if(flag==1) printf("%d ", i);
    }
}
#include <stdio.h>
void main() {
    int i, j, flag, count=0;
    for(i=2; i<=500; i++) {
        flag = 1;
        for(j=2; j<=i/2; j++)
            if(i%j==0) { flag=0; break; }
        if(flag==1) count++;
    }
    printf("Prime count: %d", count);
}
#include <stdio.h>
void main() {
    int n, sq, temp;
    printf("Enter number: ");
    scanf("%d", &n);
    sq = n*n;
    temp = n;
    while(n > 0) {
        if(n%10 != sq%10) break;
        n /= 10;
        sq /= 10;
    }
    if(n==0) printf("Automorphic");
    else printf("Not Automorphic");
}
#include <stdio.h>
void main() {
    int n, a=1, b=1, c, i;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("%d %d ", a, b);
    for(i=3;i<=n;i++) {
        c=a+b;
        printf("%d ", c);
        a=b;
        b=c;
    }
}
#include <stdio.h>
void main() {
    int i, j;
    for(i=1;i<=3;i++) {
        for(j=1;j<=3;j++)
            printf("%d %d\n", i, j);
    }
}
#include <stdio.h>
void main() {
    int i, j;
    for(i=1;i<=5;i++) {
        for(j=1;j<=5;j++)
            printf("%d %d\n", i, j);
    }
}
