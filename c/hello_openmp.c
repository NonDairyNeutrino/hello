#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char *argv[]){
  #pragma omp parallel
  {
    printf("Hello World from thread %d\n", omp_get_thread_num());
  }
  #pragma omp parallel for
  for(int i = 0; i < 32; i++) {
	int thread_id = omp_get_thread_num();
	printf("I am printing %d from thread %d\n", i, thread_id);
  }
  return EXIT_SUCCESS;
}
