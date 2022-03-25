# c-ring-buffer

```
❯  make
count : 0, head: 0, tail: 0
enqueue: aaa
enqueue: bbb
count : 2, head: 0, tail: 2
dequeue: aaa
count : 1, head: 1, tail: 2
dequeue: bbb
count : 0, head: 2, tail: 2
count : 0, head: 2, tail: 2
enqueue: aaa
enqueue: bbb
enqueue: ccc
enqueue: ddd
enqueue: eee
enqueue: fff
count : 6, head: 2, tail: 0
count : 6, head: 2, tail: 0
enqueue: ggg
enqueue: hhh
count : 8, head: 2, tail: 2
dequeue: aaa
count : 7, head: 3, tail: 2
dequeue: bbb
count : 6, head: 4, tail: 2
dequeue: ccc
count : 5, head: 5, tail: 2
dequeue: ddd
count : 4, head: 6, tail: 2
dequeue: eee
count : 3, head: 7, tail: 2
dequeue: fff
count : 2, head: 0, tail: 2
dequeue: ggg
count : 1, head: 1, tail: 2
dequeue: hhh
count : 0, head: 2, tail: 2
```
