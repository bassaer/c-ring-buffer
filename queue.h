#ifndef LIB_H
#define LIB_H

#define true 1
#define false 0

typedef int bool;

typedef struct {
  int id;
  char msg[256];
} data_t;

typedef struct {
  int head;
  int tail;
  int size;
  int count;
  data_t** buf;
} queue_t;

bool is_full(queue_t* queue);
bool is_empty(queue_t* queue);
bool enqueue(queue_t* queue, data_t* data);
bool dequeue(queue_t* queue, data_t* data);
queue_t* create_queue(int size);

#endif
