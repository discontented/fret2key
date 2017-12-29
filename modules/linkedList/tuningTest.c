#include "tuning.h"

int main(void)
{
    node *tuning = malloc(sizeof(node));
    tuning = NULL;

    stringPrompt();

    printf("%d\n", getStringLen());

    setTuning(tuning);

    printList(tuning);
}