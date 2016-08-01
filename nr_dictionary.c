#include <stddef.h>
#include <malloc.h>
#include "nr_dictionary.h"

void nr_dictionary_realloc(nr_dictionary_t *dict) {
    if (!dict) return;
    dict->headers = realloc(dict->headers, dict->count*sizeof(*dict->headers));
}

void nr_dictionary_init(nr_dictionary_t *dict) {
    dict->headers = malloc(1*sizeof(char*));
    dict->count = 0;
}

void nr_dictionary_add(nr_dictionary_t* dict, char* key, char* value) {
    size_t index = dict->count++;
    nr_dictionary_realloc(dict);
    //dict->headers = realloc(dict->headers, sizeof(dict->headers)+sizeof(key)+sizeof(value));
    dict->headers[index].key = key;
    dict->headers[index].value = value;
}

void nr_dictionary_free(nr_dictionary_t *dict) {
    free(dict->headers);
}