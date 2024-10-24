//c structures
#include <stdio.h>  //scanf(), printf()
#include <string.h> //strcpy()

struct Student{
    char name[30];
    float height;
    char reg_no[15];
    char email[20];
    int phone;
} student1, student2;

int main(){
    //struct Student student1, student2;

    // strcpy(student1.name ,"James");
    printf("Enter your name: ");
    scanf("%s", &student1.name);
    student1.height = 5.7;
    strcpy(student1.reg_no, "C1100/G/23054/24");
    strcpy(student1.email, "james@gmail.com");
    student1.phone = 123652;

    printf("Name: %s \n", student1.name);
    /*
    printf("Height: %f \n", student1.height);
    printf("Reg Number %s \n", student1.reg_no);
    printf("Email : %s \n",student1.email);
    printf("Phone number: %d \n",student1.phone);
    */

    return 0;
}