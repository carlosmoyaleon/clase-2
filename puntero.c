#include <stdio.h>

int main(void)
{
    int* vector;
    int n_elementos;

    scanf("%i%", &n_elementos);
    
    vector = (int*) malloc(n_elementos*sizeof(int));

    free(vector);
}
