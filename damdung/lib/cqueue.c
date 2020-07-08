#include <cqueue.h>
#include <stdlib.h>
size_t size;
Queue queue_create(){
  Queue q;
  q=new_dllist();
  return q;
}
void queue_push(Queue q, Jval data){
	size++;
	dll_insert_b(q->flink, data);
  }
int queue_pop(Queue q){
	if (dll_empty(q)) return 0;
	size--;
   	Dllist p= q->blink;
   	Jval val= p->val;
   	dll_delete_node(q->blink);
    return val.i;
}
Jval queue_front(Queue q){
	return q->blink->val;
}
Jval queue_back(Queue q){
	return q->flink->val;
}
int queue_empty(Queue q){
 return dll_empty(q);
}

void queue_free(Queue q){
	free_dllist(q);
}

 size_t queue_size(Queue q){
 	return size;
 	 }