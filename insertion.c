
#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Function to insert an element into the queue
void insert() {
    int element;

    // Check if the queue is full
    if (rear == MAX - 1) {
        printf("Queue Overflow! Queue is full.\n");
    } else {
        printf("Enter the element to insert: ");
        scanf("%d", &element);

        // Set front to 0 for the first element
        if (front == -1) {
            front = 0;
        }

        // Insert the element at the rear
        rear++;
        queue[rear] = element;

        printf("%d inserted successfully.\n", element);
    }
}

// Function to display the queue
void display() {
    int i;

    if (front == -1) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements: ");

        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Insert element\n");
        printf("2. Display queue\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;

            case 2:
                display();
                break;

            case 3:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}
