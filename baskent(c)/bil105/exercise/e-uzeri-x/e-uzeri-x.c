/*
### Problem: Compute e^x Using Taylor Series Expansion

**Difficulty:** Easy

**Problem Statement:**

Write a program in C to calculate the value of e^x for a given value of x using the Taylor series expansion. The Taylor series expansion for e^x is given as:

e^x = 1 + (x/1!) + (x^2/2!) + (x^3/3!) + (x^4/4!) + ...

In this program:

1. Use only the first 10 terms of the Taylor series for computation due to the infinite nature of the series.
2. Factorial (n!) is defined as:
   n! = n * (n-1) * (n-2) ... * 3 * 2 * 1
3. After computing e^x, ask the user if they would like to compute the value for another x. If yes, repeat the computation. Otherwise, terminate the program.

---

**Constraints:**

- Input x: A floating-point number.
- The program should calculate and display e^x using 10 terms of the Taylor series.
- Factorials should be computed programmatically, and no built-in libraries for factorial calculation should be used.
- Input can be positive, negative, or zero.

---

**Example Input/Output:**

**Example 1:**

Input:
```
Enter a value for x: 1
```

Output:
```
The value of e^1 using 10 terms of the series is: 2.718282
Would you like to enter another value? (y/n): y
```

---

**Example 2:**

Input:
```
Enter a value for x: -2
```

Output:
```
The value of e^-2 using 10 terms of the series is: 0.135335
Would you like to enter another value? (y/n): n
```

---

**Hints:**

1. Use a loop to compute each term of the Taylor series.
2. Maintain a running sum to store the cumulative value of the series.
3. Factorials can be calculated iteratively inside the loop.
4. Use a precision of 6 decimal places for displaying the result.

---

**Tags:** Mathematics, Taylor Series, Iterative Computation, Factorials
*/

#include <stdio.h>
float us(int sayi,int us){
    int sayac=1,eski_sayi=sayi;
    while (sayac<us){
        sayi=sayi*eski_sayi;
        sayac++;
    }
    return sayi;
}
float faktoriyel(int sayi){
    int faktoriyel_sayi;
    if(sayi==0){
        faktoriyel_sayi=1;
    }
    else{
        faktoriyel_sayi=sayi*faktoriyel(sayi-1);
    }
    return faktoriyel_sayi;
}
float e_uzeri_x(int sayi){
    float sonuc=1;
    int sayac=1;
    while (sayac<11){
        sonuc=sonuc+(us(sayi,sayac))/faktoriyel(sayac);
        sayac++;
    }

    return sonuc;
}
int main() {
    int x;
    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("e^%d using 10 terms: %f\n", x, e_uzeri_x(x));
    return 0;
}