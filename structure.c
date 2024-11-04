#include <stdio.h>

struct Person {
    char name[50];
    int age; 
    float marks;
};

int main() {
    
    struct Person person1;
    

    // person1.age = 25;
    printf("Enter Age of Person 1: ");
    scanf("%d", &person1.age);

    // person1.marks = 175.5;
    printf("Enter the Marks of Person 1: ");
    scanf("%f", &person1.marks);

    // char name1[50];

    // printf("Enter Name of Student: ");
    // scanf("%c", name1);

    snprintf(person1.name, sizeof(person1.name), "alice");

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Marks: %.2f cm\n", person1.marks);

    return 0;
}
