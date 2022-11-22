#include "nmt_ffnn.h"
#include "nmt_ffnn_data.h"

NMTFeedForwardPrototype_t *create_on_demand(struct internal_t *self, char *in_memory_block_offset) {
  // self = memset(self, sizeof(NMTFeedForwardPrototype_t));
  memmove(self, NMTFeedForwardPrototype_t, sizeof(NMTFeedForwardPrototype_t));
  self = (NMTFeedForwardPrototype_t){.product_uuid=0, .product_name="User"};
  return *self;
}

int *stopword_updates_data(NMTFeedForwardData_t *self) {
  char text_lines[64];
  char line_marker = '';
  
  fgets(text_lines, 64, stdin);
  
  for(int index = 0; index < sizeof text_lines; i++) {
    line_marker = toupper(text_lines[index]);
    if (isalpha(line_marker))
      self->stop_words[line_marker-'A'];
    
    strtok(text_lines, self->stop_words);
  }
  
  return 0;
}