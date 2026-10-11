#include <stdio.h>
int main() {

struct Node{
    int data;
    struct Node *next;
};

struct Node * head  = malloc (sizeof(struct Node));
head-> data= 5;
head->next = mallock (sizeof(struct Node));
head->next-> data= 9;
head->next-> next = NULL;

return 0;
}

