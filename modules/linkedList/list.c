#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    struct tuningString
    {
        char string;
        struct tuningString *next;
    };

    int stringLength(struct tuningString * topString)
    {
        int count = 0;
        if (topString != NULL)
        {
            struct tuningString *cursor = topString;
            while (cursor->next != NULL)
            {
                count += 1;
                cursor = cursor->next;
            }
        }
        return count;
    }

    struct tuningString *tuning = NULL;

    void insertAfter(struct tuningString * node, char data)
    {
        node->next = malloc(sizeof(struct tuningString));
        node->next->string = data;
    }

    tuning = malloc(sizeof(struct tuningString));
    tuning->string = 'E';

    struct tuningString *cursor = malloc(sizeof(struct tuningString));

    cursor = tuning;

    // while (stringKey != 'X')
    // {
    //     puts("Input next string: ");
    //     scanf("%c", &stringKey);
        
    // }

    while(cursor != NULL) {
        char *newString;
        puts("Input next string: ");
        fgets(newString, sizeof newString, stdin);

        if(newString != "X") {
            cursor->string = *newString;
            cursor->next = malloc(sizeof(struct tuningString));
            cursor = cursor->next;
        } else {
            cursor->next = NULL;
        }
    }

    // void print_list(struct tuningString * head)
    // {
    //     struct tuningString *current = head;

    //     while (current != NULL)
    //     {
    //         printf("%c\n", current->string);
    //         current = current->next;
    //     }
    // }

    printf("%c\n", tuning->string);
    printf("%c\n", tuning->next->string);

    printf("%c\n", cursor->string);
    cursor = cursor->next;
    printf("%c\n", cursor->string);

    // print_list(tuning);

    // tuning->next->string = 'A';
    // tuning->next->next->string = 'D';
    // tuning->next->next->next->string = 'G';
    // tuning->next->next->next->next->string = 'B';
    // tuning->next->next->next->next->next->string = 'E';

    // int tuningLength = stringLength(tuning);

    // printf("%d", tuningLength);
}