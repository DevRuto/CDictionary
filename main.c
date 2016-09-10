#include<stdio.h>
#include <mem.h>
#include <stdlib.h>
#include "nr_dictionary.h"

void main3() {
    nr_dictionary_t dict;
    printf("%d\n", sizeof(dict));
    nr_dictionary_init(&dict);
    printf("%d\n", sizeof(dict));
    nr_dictionary_add(&dict, "a", "asdf");
    printf("%d\n", sizeof(dict.headers));
    nr_dictionary_free(&dict);
    printf("%d\n", sizeof(dict.headers));
}

void main() {
    nr_dictionary_t dict;
    nr_dictionary_init(&dict);
    printf("Size of char pointer: %d\n", sizeof(char*));
    int i;
    nr_dictionary_add(&dict, "a", "value");
    nr_dictionary_add(&dict, "b", "value");
    nr_dictionary_add(&dict, "c", "value");
    nr_dictionary_add(&dict, "d", "value");
    nr_dictionary_add(&dict, "e", "value");
    nr_dictionary_add(&dict, "f", "value");
    nr_dictionary_remove(&dict, "c");
    nr_dictionary_add(&dict, "g", "value");
    nr_dictionary_add(&dict, "h", "value");
    nr_dictionary_add(&dict, "asdf", "fda");
    for (i = 0; i < dict.count; i++) {
        printf("Key: %s - Value: %s\n", dict.headers[i].key, dict.headers[i].value);
    }
    printf("Size: %d\n", dict.count);
    nr_dictionary_free(&dict);
    puts("Hello World");
}