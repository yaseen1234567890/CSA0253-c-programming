#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num){
if(num <= 1){
return false;
}
for(int i=2; i<num; i++){
if(num % i == 0){
return false;
}
}
return true;
}

int main(){
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
int count = 0;
int num = 2;
printf("%d prime numbers are: ", n);
while(count < n){
if(isPrime(num)){
printf("%d ", num);
count++;
}
num++;
}
printf("\n");
printf("The %dth prime number is ", n);
while(true){
if(isPrime(num)){
printf("%d\n", num);
break;
}
num++;
}
printf("%d prime numbers after %d are: ", n, num);
count = 0;
while(count < n){
if(isPrime(num)){
printf("%d ", num);
count++;
}
num++;
}
return 0;
}




