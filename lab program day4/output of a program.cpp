#include "stdio.h"
int main(){
int i;
static int count;
for(i=NULL;i<=5;){
count++;
i+=2;
}
printf("%d",count);
}


