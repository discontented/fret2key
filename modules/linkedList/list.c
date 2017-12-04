#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    struct tuningString
    {
        char string;
        struct tuningString *next;
    };

    typedef struct tuningString *t_node; //alias for tuning struct pointer

    // int stringLength(t_node topString)
    // {
    //     int count = 0;
    //     if (topString != NULL)
    //     {
    //         t_node cursor = topString;
    //         while (cursor->next != NULL)
    //         {
    //             count += 1;
    //             cursor = cursor->next;
    //         }
    //     }
    //     return count;
    // }

    t_node tuning = NULL;

    tuning->string = 'E';
    tuning->next->string = 'A';
    tuning->next->next->string = 'D';
    tuning->next->next->next->string = 'G';
    tuning->next->next->next->next->string = 'B';
    tuning->next->next->next->next->next->string = 'E';

    // int tuningLength = stringLength(tuning);

    // printf("%d", tuningLength);
}