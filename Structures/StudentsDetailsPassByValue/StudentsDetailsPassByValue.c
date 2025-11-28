#include <stdio.h>

struct student{
        char name[30];
        int age;
        int marks;
    };

void readStudentDetails(struct student students[], int numberOfStudents);
void displayStudentDetails(struct student students[], int numberOfStudents);

int main() {
    int numberOfStudents;
    printf("Enter number of students: ");
    scanf("%d", &numberOfStudents);
    struct student students[numberOfStudents];
    readStudentDetails(students, numberOfStudents);
    displayStudentDetails(students,numberOfStudents);
    return 0;
}
void readStudentDetails(struct student students[], int numberOfStudents){
    for(int i=0; i<numberOfStudents;i++){
        printf("Enter details for student: %d\n",i+1);
        printf("Name : ");
        scanf("%s",&students[i].name);
        printf("Age : ");
        scanf("%d",&students[i].age);
        printf("Marks : ");
        scanf("%d",&students[i].marks);
    }
}

void displayStudentDetails(struct student students[], int numberOfStudents){
     printf("--Students Details--\n");
    for(int i=0; i<numberOfStudents; i++){
       printf("Student %d:\n",i+1);
       printf("Name: %s\n",students[i].name);
       printf("Age: %d\n",students[i].age);
       printf("Marks: %d\n",students[i].marks);
    }
}
