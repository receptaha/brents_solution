#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H
#define PACKING_RATE 0.8

typedef struct Person {
    unsigned long long id;
    unsigned int age;
    char* name;
}Person;

typedef struct AddressSpace {
    unsigned long long record_count;
    unsigned long long hash_table_size;
    Person** hash_table;
}AddressSpace;

#endif