#ifndef NMT_FFNN_H
#define NMT_FFNN_H

#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
/* date = November 19th 2022 0:34 pm */
typedef struct NMTFeedForwardPrototype_t {
  unsigned long long product_uuid;
  const char *product_name;
} NMTFeedForwardPrototype_t; // data-structure

typedef struct NMTFeedForwardImpl_v {
  int (*create)(struct internal_t *self, char *in_memory_block_offset);
  int (*run)(struct internal_t *self, int nums, char *args[]);
  int (*update)(struct internal_t *self);
  void (*destroy)(struct interal_t *self);
} NMTFeedForwardImpl_v; // virtual table

#endif //NMT_FFNN_H
