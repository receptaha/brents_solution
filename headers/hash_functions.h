#ifndef HASH_FUNCTIONS_H
#define HASH_FUNCTIONS_H

unsigned int hash_1(unsigned long key, unsigned int address_size);
unsigned int hash_2(unsigned long key, unsigned int address_size);

AddressSpace* init_address_space();

void print_hash_table(AddressSpace* as);

void restore_hash_table(AddressSpace* as);
void force_insert(AddressSpace* as, Person* per);

Person* newRecord(unsigned long long id, int age, char* name);
int spaceFinder(Person* per, AddressSpace* as);
int insert(AddressSpace* as, unsigned long long id, int age, char* name);
void get(AddressSpace* as, unsigned long long id);
#endif
