#include <stdlib.h>
#include "queue.h"

queue_t* create_queue(int size) {
  queue_t* queue = malloc(sizeof(queue_t));
  queue->head = 0;
  queue->tail = 0;
  queue->size = size;
  queue->count = 0;
  queue->buf = malloc(sizeof(data_t) * size);
  return queue;
}

bool is_full(queue_t* queue) {
  return queue->count == queue->size;
}

bool is_empty(queue_t* queue) {
  return queue->count == 0;
}

bool enqueue(queue_t* queue, data_t* data) {
  if (is_full(queue)) {
    return false;
  }
  queue->buf[queue->tail++] = data;
  queue->count++;
  if (queue->tail == queue->size) {
    queue->tail = 0;
  }
  return true;
}

bool dequeue(queue_t* queue, data_t* data) {
  if (is_empty(queue)) {
      return false;
  }
  *data = *(queue->buf[queue->head++]);
  if (queue->head == queue->size) {
    queue->head = 0;
  }
  queue->count--;
  return true;
}
