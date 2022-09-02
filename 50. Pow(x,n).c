#include <math.h>

double recursive_function(double x, unsigned int n){
    double j=x;
    
    if(n==0){
    return  1;
}
else{
    if(n%2!=0){
    j=x * recursive_function(x, n/2) * recursive_function(x, n/2);
    }
    else
        j=recursive_function(x, n/2) * recursive_function(x, n/2);
    }
return j;
}
                          
double myPow(double x, int n){
double j=1;
unsigned int y= n;
    
if(n==0){
    return 1;}
if(x==0){
    return 0;}
    
j=(n>0)? recursive_function(x,y): 1/recursive_function(x,-y);
return j;
}