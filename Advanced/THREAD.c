#include <stdio.h>
 #include <pthread.h> 
 int cpt = 0; 
 pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER; 
 
void *incr(void *arg) { 
int i; 
printf("[%d]: adr de i = %p, adr de cpt = %p\n", (int)pthread_self(), &i, &cpt); 
for(i=0; i < 1000000; i++) {
 if ( i % 10000 == 0) { 
 printf("[%d]: i = %d\n", (int)pthread_self(), i);
  } 
  pthread_mutex_lock(&mutex);
   cpt++;
    pthread_mutex_unlock(&mutex);
	 }
	  printf("[%d]: FIN\n", (int)pthread_self()); 
	   return NULL;
	   }
	   
int main() { 
pthread_t tid[2]; 
pthread_create(tid, NULL, incr, NULL); 
pthread_create(tid+1, NULL, incr, NULL); 
pthread_join(tid[0], NULL);
 pthread_join(tid[1], NULL);
  printf("cpt = %d", cpt); 
  return 0;
   }
