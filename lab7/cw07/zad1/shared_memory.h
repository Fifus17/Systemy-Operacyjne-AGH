#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

char *attach_shared_memory(const char* filename, int size);
bool detach_shared_memory(char *shared_memory);
bool destroy_shared_memory(const char *filename);