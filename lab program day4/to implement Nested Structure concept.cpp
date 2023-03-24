#include<stdio.h>
#include<string.h>

struct address{
char street[50];
char city[50];
char state[50];
};

struct person{
char name[50];
int age;
struct address addr;
};

int main(){
struct person p1;
strcpy(p1.name,"John");
p1.age=25;
strcpy(p1.addr.street,"Main Street");
strcpy(p1.addr.city,"New York");
strcpy(p1.addr.state,"NY");

printf("Name: %s\n",p1.name);
printf("Age: %d\n",p1.age);
printf("Address: %s, %s, %s",p1.addr.street,p1.addr.city,p1.addr.state);

return 0;
}






