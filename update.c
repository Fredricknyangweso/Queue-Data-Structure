
#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void insert() {
    int element;

    if (rear == MAX - 1) {
        printf("Queue is full!\n");
        return;
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    if (front == -1) {
        front = 0;
    }

    rear++;
    queue[rear] = element;

    printf("Element inserted successfully!\n");
}

void update() {
    int oldElement, newElement, i, found = 0;

    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Enter element to update: ");
    scanf("%d", &oldElement);

    for (i = front; i <= rear; i++) {
        if (queue[i] == oldElement) {
            printf("Enter the new element: ");
            scanf("%d", &newElement);

            queue[i] = newElement;
            printf("Element updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element not found in the queue!\n");
    }
}

void display() {
    int i;

    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements: ");

    for (i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main() {
    int choice;

    do {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Insert element\n");
        printf("2. Update element\n");
        printf("3. Display queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;

            case 2:
                update();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
