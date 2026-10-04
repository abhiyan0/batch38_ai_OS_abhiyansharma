#include <stdio.h>
#include <stdlib.h>

int global_var = 150;           // Data segment (initialized global)
int bss_var;                    // BSS segment (uninitialized global)

int main() {
    int local_var = 30;         // Stack segment (local variable)
    static int local_static = 20; // Data segment (static local)
    
    int *heap_var = (int *)malloc(sizeof(int)); // Heap segment allocation
    *heap_var = 500;

    printf(".......Variable Addresses.......\n\n");
    printf("global_var:     %p (Data Segment)\n", (void *)&global_var);
    printf("bss_var:        %p (BSS Segment)\n", (void *)&bss_var);
    printf("local_var:      %p (Stack Segment)\n", (void *)&local_var);
    printf("local_static:   %p (Data Segment)\n", (void *)&local_static);
    printf("heap_var ptr:   %p (Stack - Pointer Variable)\n", (void *)&heap_var);
    printf("heap data:      %p (Heap - Allocated Data)\n", (void *)heap_var);

    free(heap_var);
    return 0;
}
