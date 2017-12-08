#include <stdlib.h>
#include <stdio.h>

struct linkedList
{
    char *data[2];
    struct linkedList *next;
};

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

int main(void)
{

    node *tuning = malloc(sizeof(node));

    node *cursor = malloc(sizeof(node));

    cursor = tuning;

    int stringLength = 6; //default string length

    printf("Number of strings: ");

    scanf("%d", &stringLength);

    int i = 1;

    for (i = 1; i <= stringLength; i++)
    {
        printf("String %d:", i);
        scanf(" %s", &cursor->data);

        if (i != stringLength)
        {
            cursor->next = malloc(sizeof(node));
            cursor = cursor->next;
        }
    }

    printList(tuning);

    // printf("%c\n", tuning->data);
    // printf("%c\n", tuning->next->data);

    // printf("%c\n", cursor->string);
    // cursor = cursor->next;
    // printf("%c\n", cursor->string);

    // printList(tuning);

    // tuning->next->string = 'A';
    // tuning->next->next->string = 'D';
    // tuning->next->next->next->string = 'G';
    // tuning->next->next->next->next->string = 'B';
    // tuning->next->next->next->next->next->string = 'E';

    // int tuningLength = stringLength(tuning);

    // printf("%d", tuningLength);
}