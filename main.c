#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

data_t input[] = {
  {0, "aaa"},
  {1, "bbb"},
  {2, "ccc"},
  {3, "ddd"},
  {4, "eee"},
  {5, "fff"},
  {6, "ggg"},
  {7, "hhh"},
  {8, "iii"}
};

void debug(queue_t* queue) {
  printf("count : %d, head: %d, tail: %d\n",
      queue->count,
      queue->head,
      queue->tail
  );
}

void dequeue_all(queue_t* queue) {
  while(!is_empty(queue)) {
    data_t *data = malloc(sizeof(data_t));
    if (!dequeue(queue, data)) {
      printf("empty\n");
      break;
    }
    printf("dequeue: %s\n", data->msg);
    debug(queue);
  }
}

void enqueue_input(queue_t* queue, int from, int to) {
  debug(queue);
  int i;
  for(i = from; i < to; i++) {
    if (!enqueue(queue, &input[i])) {
      printf("full\n");
      break;
    }
    printf("enqueue: %s\n", input[i].msg);
  }
  debug(queue);
}

int main() {
  queue_t* queue = create_queue(8);
  enqueue_input(queue, 0, 2);
  dequeue_all(queue);
  enqueue_input(queue, 0, 6);
  enqueue_input(queue, 6, 8);
  dequeue_all(queue);

  return 0;
}
