#include<stdio.h>
#include <mem.h>
#include <stdlib.h>
#include "nr_dictionary.h"

main() {
    nr_dictionary_t dict;
    nr_dictionary_init(&dict);
    printf("Size of char pointer: %d\n", sizeof(char*));
    int i;
    for (i = 0; i < 100; i++) {
        nr_dictionary_add(&dict, "testkey", "value");
    }
    nr_dictionary_add(&dict, "asdf", "fda");
    for (i = 0; i < dict.count; i++) {
        printf("Key: %s - Value: %s\n", dict.headers[i].key, dict.headers[i].value);
    }
    printf("Size: %d\n", dict.count);
    nr_dictionary_free(&dict);
    puts("Hello World");
}