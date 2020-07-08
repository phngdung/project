#include "order.h"

#include <stdio.h>

int failed(const char *msg) {
  printf("Test failed! %s\n", msg);
  return 1;
}

int main() {
  Order o1 = {"ABC", 1000};
  char d1[] = {3, 65, 66, 67, 4, 49, 48, 48, 48};
  Bytes b1 = {d1, 9};
  Bytes *b = serialize(&o1);
  if (b->len != b1.len) {
    return failed("Test (1) serialize: len");
  }
  for (int i = 0; i < b->len; ++i) {
    if (b->dat[i] != b1.dat[i]) {
      return failed("Test (1) serialize: contents");
    }
  }
  Order *o = deserialize(&b1);
  if (o->total != o1.total) {
    return failed("Test (1) deserialize: total");
  }
  if (strcmp(o->name, o1.name) != 0) {
    return failed ("Test (1) deserialize: name");
  }
   b = serialize(&o);
  if (b->len != b1.len) {
    return failed("Test (2) serialize: len");
  }

  for (int i = 0; i < b->len; ++i) {
         printf("b->dat[i] = %d\n",b->dat[i] );
        printf("b1.dat[i] = %d\n",b1.dat[i] );
    if (b->dat[i] != b1.dat[i]) {
      return failed("Test (2) serialize: contents");
    }
    }
  printf("Test Ok!");
  return 0;
}