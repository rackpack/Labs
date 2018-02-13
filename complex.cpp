#include <stdio.h>
#include "complex.h" 

complex_t add(complex_t x, complex_t y) 
 {
     complex_t t;
     t.a = x.a + y.a;
     t.b = x.b + y.b; 
     return t;
 }
 
complex_t sub(complex_t x, complex_t y)
 {
     complex_t t;
     t.a = x.a - y.a;
     t.b = x.b - y.b; 
     return t;
 } 
 
 complex_t mul(complex_t x, complex_t y)
 {
     complex_t t;
     t.a = x.a * y.a - x.b * y.b;
     t.b = x.a * y.b + x.b * y.a; 
     return t;
 }
 
 complex_t div(complex_t x, complex_t y) 
 {
     complex_t t;
     t.a = (x.a * y.a + x.b * y.b)/(y.a*y.a+y.b*y.b);
     t.b = (x.a * y.b - x.b * y.a)/(y.a*y.a+y.b*y.b); 
     return t;
 }
