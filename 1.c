#include<stdio.h>
#include<string.h>
struct Student {
    int id;
    char name[100];
};

int main()
{

    struct  Student s1,s2,s3;

    s1.id = 1;
    strcpy(s1.name,"Raj");

    printf("ID = %d\n",s1.id);
    printf("NAME = %s\n\n",s1.name);
    


    s2.id = 2;
    strcpy(s2.name,"Rahul");

    printf("ID = %d\n",s2.id);
    printf("NAME = %s",s2.name);
    
}