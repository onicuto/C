#include <stdio.h>

struct stud {
  unsigned int book;
  int mark;
  char fio[80];
};

struct tim {
  int day;
  int month;
  int year;
};
struct ved {
  struct tim time;
  struct stud student[25];
  char prepod[80];
  char pred[80];
};

func voz(struct ved) {}
