# AssociativeArray-in-C ( does not work on Ubuntu), Works on Mac OS 
LOOK AT HASHTABLE INSTEAD.


Code is from 

https://rosettacode.org/wiki/Associative_arrays/Creation/C


```
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

   int size;
   void **keys;
   void **values;
} hash_t;
hash_t *hash_new (int size) {

   hash_t *h = calloc(1, sizeof (hash_t));
   h->keys = calloc(size, sizeof (void *));
   h->values = calloc(size, sizeof (void *));
   h->size = size;
   return h;
}

int hash_index (hash_t *h, void *key) {

   int i = (int) key % h->size;
   while (h->keys[i] && h->keys[i] != key)
       i = (i + 1) % h->size;
   return i;
}

void hash_insert (hash_t *h, void *key, void *value) {

   int i = hash_index(h, key);
   h->keys[i] = key;
   h->values[i] = value;
}

void *hash_lookup (hash_t *h, void *key) {

   int i = hash_index(h, key);
   return h->values[i];
}
int main () {

   hash_t *h = hash_new(15);
   hash_insert(h, "hello", "world");
   hash_insert(h, "shashi", "kiran");
   hash_insert(h, "a", "b");
   printf("hello => %s\n", hash_lookup(h, "hello"));
   printf("herp => %s\n", hash_lookup(h, "herp"));
   printf("shashi => %s\n", hash_lookup(h, "shashi"));
   printf("a => %s\n", hash_lookup(h, "a"));
   return 0;
}

```
Output:

```

hello => world
herp => (null)
shashi => kiran
Arsikere => GV Basavaraju
Byndoor => Gururaj Gantihole
a => b

```
