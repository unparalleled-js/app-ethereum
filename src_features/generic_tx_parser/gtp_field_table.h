#ifndef GTP_FIELD_TABLE_H_
#define GTP_FIELD_TABLE_H_

#include <stdint.h>
#include <stdbool.h>

typedef struct {
    uint8_t type;
    const char *key;
    const char *value;
} s_field_table_entry;

void field_table_init(void);
void field_table_cleanup(void);
bool add_to_field_table(uint8_t type, const char *key, const char *value);
size_t field_table_size(void);
bool get_from_field_table(int index, s_field_table_entry *entry);

#endif  // !GTP_FIELD_TABLE_H_
