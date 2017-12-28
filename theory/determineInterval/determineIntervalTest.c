#include "determineInterval.h"

int main(void) {
  char tonic[2];
  char subTonic[2];

  printf("Tonic: ");
  scanf("%s", tonic);

  printf("Comparative Note: ");
  scanf("%s", subTonic);
  int distance = noteDifference(tonic, subTonic);
  printf("Note difference: %d\n", distance);
  printf("Interval: %s\n", determineInterval(tonic, subTonic) );
  return 0;
}
