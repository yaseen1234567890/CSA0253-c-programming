#include <stdio.h> 

int tmp=20; 

void func()
 {    
    static int tmp=10;    
    printf("%d ",tmp); 
}

int main() 
{    
    printf("%d ",tmp);    
    func();              
    printf("%d ",tmp);   
    return 0;             
} 

