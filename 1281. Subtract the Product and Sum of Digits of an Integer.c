#include <math.h>

int subtractProductAndSum(int n){

int flag=0,product=1,sum=0;

while(n>0){
flag=n%10;
product *= flag;
sum +=flag;
n=n/10;
}
    return product-sum;
}