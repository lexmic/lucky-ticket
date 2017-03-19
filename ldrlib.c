#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *load_memory_init(size_t init_elems) 
{
	char *load_ptr;
	
	if ( (load_ptr = (char *) malloc(init_elems * sizeof(char) ) ) ) {
		return load_ptr;
		free(load_ptr);
	} else {
		return NULL;
		exit(1);
	}
}

int program_weight_transform(size_t init_program_weight)
{
	if (0 < init_program_weight && init_program_weight <= 9) {
		if ( (init_program_weight == 1) ) {
			int loader_num = init_program_weight * 20000 + 9000;
			return loader_num;
		} else {
			int loader_num = init_program_weight * 10000 + 9000;
			return loader_num;	
		}
	} else {
		return 0;
	}
}

void pred_loadbar_init(size_t program_weight) 
{
	int i, u = 0;
	int time_counter = program_weight * 10;
	char *initer_ptr = load_memory_init(time_counter);
	
	if (program_weight_transform(program_weight) != 0) {
		for(i = 0; i < time_counter; i++) {
			if (i % 10 == 0) {
				initer_ptr[u] = '.';
				++u;
			}
			printf("Initializing loading process: [%s]", initer_ptr);
			printf("\r");
			fflush(stdout);
        	usleep( program_weight_transform(program_weight) ); 
		}
		printf("Initializing complete, starting detailed parsing:\n");
	} else {
		printf("PROGRAM_WEIGHT_INPUT_ERROR\n");
		exit(0);
	}
}

void part_process_loadbar(size_t operation_weight) 
{
	int k, point = 0;
	char *part_ptr = load_memory_init(10);
	
	for(k = 0; k <= 100; k++) {
		if (k % 10 == 0) {
			part_ptr[point] = '.';
			++point;		
		}		
		printf("[%s]%d%%", part_ptr, k);
		printf("\r");	
        fflush(stdout);
        usleep( program_weight_transform(operation_weight) );    
	}
	printf("\n");
}

void whole_process_loadbar(size_t ldr_program_weight) 
{
	int j, g = 0;
	char *array_ptr = load_memory_init(20);
	
	for(j = 0; j <= 100; j++) {
		if (j % 5 == 0) {
			array_ptr[g] = '#';
			++g;
		}		
		printf("%d%%[%s]", j, array_ptr);
		printf("\r");	
        fflush(stdout);
        usleep( program_weight_transform(ldr_program_weight) - 10000 );    
	}
	printf("\n");
	printf("Loading sucessfully complete!\n");
	printf("\n");
}






