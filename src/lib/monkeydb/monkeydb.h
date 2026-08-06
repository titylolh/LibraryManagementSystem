#ifndef MONKEYDB_H_
#define MONKEYDB_H_

#define MONKEYDB_OK 0
#define MONKEYDB_NULL 1
#define MONKEYDB_NO_MEMORY 2
#define MONKEYDB_EMPTY 3
#define MONKEYDB_FULL 4

#define MONKEYDB_TABLE_MAXELEMENTS 1000

typedef enum {
    MONKEYDB_TYPE_INT,
    MONKEYDB_TYPE_FLOAT,
    MONKEYDB_TYPE_DOUBLE,
    MONKEYDB_TYPE_CHAR,
    MONKEYDB_TYPE_STRING
} MonkeyDBType;

typedef struct {
    unsigned short id;
    MonkeyDBType type;
    void *data;
} Cell;

typedef struct rows {
    unsigned short RWID;
    void *data;
} Row;

typedef struct column {
    unsigned short CLID;
    char* name;
    MonkeyDBType type;
} Column;

typedef struct table {
    unsigned short TBID;
    char* name;
    Column* columns;
    Row* rows;
} Table; 

typedef struct database {
    unsigned short DBID;
    char* name;
    Table* tables[MONKEYDB_TABLE_MAXELEMENTS];
    unsigned short capacity;
    unsigned short size;
} Database;

void read();

void write();

#endif