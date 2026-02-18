#include <stdio.h>

struct book {
  char name[80];
  char author[80];
  int year;
  int page;
  float price;
};

struct rec {
  int wid;
  int hei;
};

struct book catalog[10];
int main() {
  struct rec my_rec;
  struct rec *my_rec_ptr = &my_rec;

  my_rec.wid = 10;
  my_rec.hei = 20;
}
