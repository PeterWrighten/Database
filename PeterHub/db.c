#include<stdbool.h>
#include<stdio.h>
#include<string.h>

typedef struct {
    char* buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

InputBuffer* new_input_buffer() {
    
}