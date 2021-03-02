#include <stdio.h>
#include <stdlib.h>

int a[20];

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void insert_beg_of_list(Node *current, int data);

void print_list(Node *current);


void insert_beg_of_list(Node *current, int data) {
    //keep track of first node
    Node *head = current;

    while(current->next != head) {
        current = current->next;
    }
    current->next = (Node*)malloc(sizeof(Node));
    current = current->next;
    current->data = data;
    current->next = head;


}


void print_list(Node *current) {

    Node *head = current;
    current = current->next;
    while(current != head){
        printf(" %d ", current->data);
        current = current->next;
    }

}



int main() {

    Node *head = (Node *)malloc(sizeof(Node));
    head->next = head;  

    int data = 10;
    int usr_input = 22220;
    int i;
    int m;




        scanf("%d", &usr_input);

        for (i=0; i<usr_input; i++) {

            scanf("%d", &data);
            insert_beg_of_list(head, data);

        }


            printf("The list is ");
            print_list(head);
            printf("\n\n");





    return 0;
}