#include <stdio.h>

int main() {

  int num;
  printf("Enter a number (1 to 10) :\n");
  scanf("%d", &num);

  if (num > 10) {
    printf("To perform such action ,The src code will require some additional "
           "features,that may get out of syllabus taught yet,So terminating "
           "such requests.");
  }

  for (int i = 0; i < 10; i++) {

    if (num == i) {
      switch (num) {
      case 0:
        printf("Zero");
        break;
      case 1:
        printf("One");
        break;
      case 2:
        printf("Two");
        break;
      case 3:
        printf("Three");
        break;
      case 4:
        printf("Four");
        break;
      case 5:
        printf("Five");
        break;
      case 6:
        printf("Six");
        break;
      case 7:
        printf("Seven");
        break;
      case 8:
        printf("Eight");
        break;
      case 9:
        printf("Nine");
        break;
      case 10:
        printf("Ten");
        break;
      }
    }
  }

  return 0;
}
