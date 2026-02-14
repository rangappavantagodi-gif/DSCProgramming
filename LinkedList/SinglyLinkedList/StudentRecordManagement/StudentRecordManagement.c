#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Student structure
struct Student {
    int roll;
    char name[50];
    float marks;
    struct Student *next;
};

// Create new student node
struct Student* createStudent(int roll, char name[], float marks) {
    struct Student* newNode = (struct Student*)malloc(sizeof(struct Student));

    if(newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newNode->roll = roll;
    strcpy(newNode->name, name);
    newNode->marks = marks;
    newNode->next = NULL;

    return newNode;
}

// Insert at end
struct Student* insertStudent(struct Student* head, int roll, char name[], float marks) {

    struct Student* newNode = createStudent(roll, name, marks);

    if(head == NULL)
        return newNode;

    struct Student* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Display all students
void displayStudents(struct Student* head) {

    if(head == NULL) {
        printf("No records found!\n");
        return;
    }

    struct Student* temp = head;
    printf("\nStudent Records:\n");

    while(temp != NULL) {
        printf("Roll: %d | Name: %s | Marks: %.2f\n",
               temp->roll, temp->name, temp->marks);
        temp = temp->next;
    }
}

// Search by roll number
void searchStudent(struct Student* head, int roll) {

    struct Student* temp = head;

    while(temp != NULL) {
        if(temp->roll == roll) {
            printf("Record Found:\n");
            printf("Roll: %d | Name: %s | Marks: %.2f\n",
                   temp->roll, temp->name, temp->marks);
            return;
        }
        temp = temp->next;
    }

    printf("Student not found!\n");
}

// Delete student by roll
struct Student* deleteStudent(struct Student* head, int roll) {

    struct Student *temp = head, *prev = NULL;

    if(temp != NULL && temp->roll == roll) {
        head = temp->next;
        free(temp);
        printf("Record deleted successfully!\n");
        return head;
    }

    while(temp != NULL && temp->roll != roll) {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL) {
        printf("Student not found!\n");
        return head;
    }

    prev->next = temp->next;
    free(temp);
    printf("Record deleted successfully!\n");

    return head;
}

// Main Menu
int main() {

    struct Student* head = NULL;
    int choice, roll;
    char name[50];
    float marks;
    
    printf("\n---- Student Record Management ----\n");
    printf("1. Add Student\n");
    printf("2. Display Students\n");
    printf("3. Search Student\n");
    printf("4. Delete Student\n");
    printf("5. Exit\n");
    while(1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &roll);
                printf("Enter Name: ");
                scanf("%s", name);
                printf("Enter Marks: ");
                scanf("%f", &marks);
                head = insertStudent(head, roll, name, marks);
                break;

            case 2:
                displayStudents(head);
                break;

            case 3:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);
                searchStudent(head, roll);
                break;

            case 4:
                printf("Enter Roll Number to delete: ");
                scanf("%d", &roll);
                head = deleteStudent(head, roll);
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
