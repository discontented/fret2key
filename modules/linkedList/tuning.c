#include "tuning.h"

int stringLength = 6;

typedef struct linkedList node;

void printList(node *head)
{
    node *current = head;

    while (current != NULL)
    {
        printf("%s\n", current->data);
        current = current->next;
    }
}

void setTuning(node *head) {
    int i = 1;

    node *cursor = malloc(sizeof(node));

    cursor = head;

    for (i = 1; i <= stringLength; i++) {
        printf("String %d: ", i);
        scanf("%s", &cursor->data);

        if (i != stringLength)
        {
            cursor->next = malloc(sizeof(node));
            cursor = cursor->next;
        }
    }
}

void stringPrompt()
{
    printf("Number of strings: ");
    scanf("%d", &stringLength);
}

int getStringLen()
{
    return stringLength;
}