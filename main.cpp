#include <stdio.h>
#include "complex.h" 
 
int main()
 {
     double a1,b1,a2,b2;
     printf ("??????? 4 ?????: \n");
     while(scanf ("%lf%lf%lf%lf", &a1,&b1,&a2,&b2) == 4) {
     complex_t x = {a1,b1}; 
     complex_t y = {a2,b2}; 
     complex_t a = add(x,y);
     complex_t s = sub(x,y);
     complex_t m = mul(x,y);
     complex_t d = div(x,y);
     printf ("a = (%5.2lf, %5.2lfi)\n", a.a, a.b ); 
     printf ("s = (%5.2lf, %5.2lfi)\n", s.a, s.b ); 
     printf ("m = (%5.2lf, %5.2lfi)\n", m.a, m.b ); 
     printf ("d = (%5.2lf, %5.2lfi)\n", d.a, d.b ); 
        return 0;   
     }
     return 0;
 }
