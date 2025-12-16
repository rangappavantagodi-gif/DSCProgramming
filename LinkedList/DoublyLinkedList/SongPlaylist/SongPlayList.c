#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SONG {
    char songName[30];
    char singerName[30];
    int year;
};

// Doubly Linked List Node
struct NODE {
    struct SONG song;
    struct NODE *prev;
    struct NODE *next;
};

// Create a new node
struct NODE* createNode(char song[], char singer[], int year) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    strcpy(newNode->song.songName, song);
    strcpy(newNode->song.singerName, singer);
    newNode->song.year = year;

    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

// Insert node at end
struct NODE* insertEnd(struct NODE *head, char song[], char singer[], int year) {
    struct NODE *newNode = createNode(song, singer, year);

    if (head == NULL) {
        return newNode;
    }

    struct NODE *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

// Create playlist using insertEnd
struct NODE* createPlayList() {
    struct NODE *head = NULL;

    head = insertEnd(head, "Jothe Jotheyali", "S. P. Balasubrahmanyam", 1981);
    head = insertEnd(head, "Mungaru Male", "Sonu Nigam", 2006);
    head = insertEnd(head, "Anisuthide", "Sonu Nigam", 2006);
    head = insertEnd(head, "Ee Sanje Yakagide", "Sonu Nigam", 2007);
    head = insertEnd(head, "Belageddu", "Vijay Prakash", 2016);

    return head;
}

// Move to next song
struct NODE* nextSong(struct NODE *current) {
    if (current == NULL || current->next == NULL) {
        printf("No next song available\n");
        return current;
    }

    current = current->next;
    printf("Now Playing: %s\n", current->song.songName);
    printf("Singer: %s\n", current->song.singerName);
    printf("Year: %d\n", current->song.year);
    return current;
}

// Move to previous song
struct NODE* prevSong(struct NODE *current) {
    if (current == NULL || current->prev == NULL) {
        printf("No previous song available\n");
        return current;
    }

    current = current->prev;
    printf("Now Playing: %s\n", current->song.songName);
    printf("Singer: %s\n", current->song.singerName);
    printf("Year: %d\n", current->song.year);
    return current;
}

// Main function
int main() {
    struct NODE *current = createPlayList();

    printf("Now Playing: %s\n", current->song.songName);
    printf("Singer: %s\n", current->song.singerName);
    printf("Year: %d\n", current->song.year);
    int choice;
    while(1){
        printf("Menu:\n");
        printf("1 for previous song\n");
        printf("2 for next song\n");
        printf("3 for exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1: current = prevSong(current); break;
            case 2: current = nextSong(current); break;
            case 3: printf("Exiting playlist...\n");exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
