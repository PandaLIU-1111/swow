/*
  +--------------------------------------------------------------------------+
  | Swow                                                                     |
  +--------------------------------------------------------------------------+
  | Licensed under the Apache License, Version 2.0 (the "License");          |
  | you may not use this file except in compliance with the License.         |
  | You may obtain a copy of the License at                                  |
  | http://www.apache.org/licenses/LICENSE-2.0                               |
  | Unless required by applicable law or agreed to in writing, software      |
  | distributed under the License is distributed on an "AS IS" BASIS,        |
  | WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. |
  | See the License for the specific language governing permissions and      |
  | limitations under the License. See accompanying LICENSE file.            |
  +--------------------------------------------------------------------------+
  | Author: Yun Dou <dixyes@gmail.com>                                       |
  +--------------------------------------------------------------------------+
 */
// weak symbol reference by dl

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#ifdef __GNUC__
#include <dlfcn.h>
#endif

#include "config.h"

#ifdef CAT_HAVE_PQ


// weak function pointer for PQbackendPID
__attribute__((weak, alias("swow_PQbackendPID_redirect"))) extern int PQbackendPID(const void *conn);
// resolved function holder
int (*swow_PQbackendPID_resolved)(const void *conn);
// resolver for PQbackendPID
int swow_PQbackendPID_resolver(const void *conn) {
    swow_PQbackendPID_resolved = (int (*)(const void *conn))dlsym(NULL, "PQbackendPID");

    if (swow_PQbackendPID_resolved == NULL) {
        fprintf(stderr, "failed resolve PQbackendPID: %s\n", dlerror());
        abort();
    } 

    return PQbackendPID(conn);
}
int (*swow_PQbackendPID_resolved)(const void *conn) = swow_PQbackendPID_resolver;
int swow_PQbackendPID_redirect(const void *conn) {
    return swow_PQbackendPID_resolved(conn);
}

// weak function pointer for PQclear
__attribute__((weak, alias("swow_PQclear_redirect"))) extern void PQclear(void *res);
// resolved function holder
void (*swow_PQclear_resolved)(void *res);
// resolver for PQclear
void swow_PQclear_resolver(void *res) {
    swow_PQclear_resolved = (void (*)(void *res))dlsym(NULL, "PQclear");

    if (swow_PQclear_resolved == NULL) {
        fprintf(stderr, "failed resolve PQclear: %s\n", dlerror());
        abort();
    } 

    PQclear(res);
    return;
}
void (*swow_PQclear_resolved)(void *res) = swow_PQclear_resolver;
void swow_PQclear_redirect(void *res) {
    return swow_PQclear_resolved(res);
}

// weak function pointer for PQcmdTuples
__attribute__((weak, alias("swow_PQcmdTuples_redirect"))) extern char * PQcmdTuples(void *res);
// resolved function holder
char * (*swow_PQcmdTuples_resolved)(void *res);
// resolver for PQcmdTuples
char * swow_PQcmdTuples_resolver(void *res) {
    swow_PQcmdTuples_resolved = (char * (*)(void *res))dlsym(NULL, "PQcmdTuples");

    if (swow_PQcmdTuples_resolved == NULL) {
        fprintf(stderr, "failed resolve PQcmdTuples: %s\n", dlerror());
        abort();
    } 

    return PQcmdTuples(res);
}
char * (*swow_PQcmdTuples_resolved)(void *res) = swow_PQcmdTuples_resolver;
char * swow_PQcmdTuples_redirect(void *res) {
    return swow_PQcmdTuples_resolved(res);
}

// weak function pointer for PQconnectPoll
__attribute__((weak, alias("swow_PQconnectPoll_redirect"))) extern int PQconnectPoll(void *conn);
// resolved function holder
int (*swow_PQconnectPoll_resolved)(void *conn);
// resolver for PQconnectPoll
int swow_PQconnectPoll_resolver(void *conn) {
    swow_PQconnectPoll_resolved = (int (*)(void *conn))dlsym(NULL, "PQconnectPoll");

    if (swow_PQconnectPoll_resolved == NULL) {
        fprintf(stderr, "failed resolve PQconnectPoll: %s\n", dlerror());
        abort();
    } 

    return PQconnectPoll(conn);
}
int (*swow_PQconnectPoll_resolved)(void *conn) = swow_PQconnectPoll_resolver;
int swow_PQconnectPoll_redirect(void *conn) {
    return swow_PQconnectPoll_resolved(conn);
}

// weak function pointer for PQconnectStart
__attribute__((weak, alias("swow_PQconnectStart_redirect"))) extern void * PQconnectStart(const char *conninfo);
// resolved function holder
void * (*swow_PQconnectStart_resolved)(const char *conninfo);
// resolver for PQconnectStart
void * swow_PQconnectStart_resolver(const char *conninfo) {
    swow_PQconnectStart_resolved = (void * (*)(const char *conninfo))dlsym(NULL, "PQconnectStart");

    if (swow_PQconnectStart_resolved == NULL) {
        fprintf(stderr, "failed resolve PQconnectStart: %s\n", dlerror());
        abort();
    } 

    return PQconnectStart(conninfo);
}
void * (*swow_PQconnectStart_resolved)(const char *conninfo) = swow_PQconnectStart_resolver;
void * swow_PQconnectStart_redirect(const char *conninfo) {
    return swow_PQconnectStart_resolved(conninfo);
}

// weak function pointer for PQconsumeInput
__attribute__((weak, alias("swow_PQconsumeInput_redirect"))) extern int PQconsumeInput(void *conn);
// resolved function holder
int (*swow_PQconsumeInput_resolved)(void *conn);
// resolver for PQconsumeInput
int swow_PQconsumeInput_resolver(void *conn) {
    swow_PQconsumeInput_resolved = (int (*)(void *conn))dlsym(NULL, "PQconsumeInput");

    if (swow_PQconsumeInput_resolved == NULL) {
        fprintf(stderr, "failed resolve PQconsumeInput: %s\n", dlerror());
        abort();
    } 

    return PQconsumeInput(conn);
}
int (*swow_PQconsumeInput_resolved)(void *conn) = swow_PQconsumeInput_resolver;
int swow_PQconsumeInput_redirect(void *conn) {
    return swow_PQconsumeInput_resolved(conn);
}

// weak function pointer for PQerrorMessage
__attribute__((weak, alias("swow_PQerrorMessage_redirect"))) extern char * PQerrorMessage(const void *conn);
// resolved function holder
char * (*swow_PQerrorMessage_resolved)(const void *conn);
// resolver for PQerrorMessage
char * swow_PQerrorMessage_resolver(const void *conn) {
    swow_PQerrorMessage_resolved = (char * (*)(const void *conn))dlsym(NULL, "PQerrorMessage");

    if (swow_PQerrorMessage_resolved == NULL) {
        fprintf(stderr, "failed resolve PQerrorMessage: %s\n", dlerror());
        abort();
    } 

    return PQerrorMessage(conn);
}
char * (*swow_PQerrorMessage_resolved)(const void *conn) = swow_PQerrorMessage_resolver;
char * swow_PQerrorMessage_redirect(const void *conn) {
    return swow_PQerrorMessage_resolved(conn);
}

// weak function pointer for PQescapeByteaConn
__attribute__((weak, alias("swow_PQescapeByteaConn_redirect"))) extern unsigned char * PQescapeByteaConn(void *conn, const unsigned char *from, size_t from_length, size_t *to_length);
// resolved function holder
unsigned char * (*swow_PQescapeByteaConn_resolved)(void *conn, const unsigned char *from, size_t from_length, size_t *to_length);
// resolver for PQescapeByteaConn
unsigned char * swow_PQescapeByteaConn_resolver(void *conn, const unsigned char *from, size_t from_length, size_t *to_length) {
    swow_PQescapeByteaConn_resolved = (unsigned char * (*)(void *conn, const unsigned char *from, size_t from_length, size_t *to_length))dlsym(NULL, "PQescapeByteaConn");

    if (swow_PQescapeByteaConn_resolved == NULL) {
        fprintf(stderr, "failed resolve PQescapeByteaConn: %s\n", dlerror());
        abort();
    } 

    return PQescapeByteaConn(conn, from, from_length, to_length);
}
unsigned char * (*swow_PQescapeByteaConn_resolved)(void *conn, const unsigned char *from, size_t from_length, size_t *to_length) = swow_PQescapeByteaConn_resolver;
unsigned char * swow_PQescapeByteaConn_redirect(void *conn, const unsigned char *from, size_t from_length, size_t *to_length) {
    return swow_PQescapeByteaConn_resolved(conn, from, from_length, to_length);
}

// weak function pointer for PQescapeStringConn
__attribute__((weak, alias("swow_PQescapeStringConn_redirect"))) extern size_t PQescapeStringConn(void *conn, char *to, const char *from, size_t length, int *error);
// resolved function holder
size_t (*swow_PQescapeStringConn_resolved)(void *conn, char *to, const char *from, size_t length, int *error);
// resolver for PQescapeStringConn
size_t swow_PQescapeStringConn_resolver(void *conn, char *to, const char *from, size_t length, int *error) {
    swow_PQescapeStringConn_resolved = (size_t (*)(void *conn, char *to, const char *from, size_t length, int *error))dlsym(NULL, "PQescapeStringConn");

    if (swow_PQescapeStringConn_resolved == NULL) {
        fprintf(stderr, "failed resolve PQescapeStringConn: %s\n", dlerror());
        abort();
    } 

    return PQescapeStringConn(conn, to, from, length, error);
}
size_t (*swow_PQescapeStringConn_resolved)(void *conn, char *to, const char *from, size_t length, int *error) = swow_PQescapeStringConn_resolver;
size_t swow_PQescapeStringConn_redirect(void *conn, char *to, const char *from, size_t length, int *error) {
    return swow_PQescapeStringConn_resolved(conn, to, from, length, error);
}

// weak function pointer for PQfinish
__attribute__((weak, alias("swow_PQfinish_redirect"))) extern void PQfinish(void *conn);
// resolved function holder
void (*swow_PQfinish_resolved)(void *conn);
// resolver for PQfinish
void swow_PQfinish_resolver(void *conn) {
    swow_PQfinish_resolved = (void (*)(void *conn))dlsym(NULL, "PQfinish");

    if (swow_PQfinish_resolved == NULL) {
        fprintf(stderr, "failed resolve PQfinish: %s\n", dlerror());
        abort();
    } 

    PQfinish(conn);
    return;
}
void (*swow_PQfinish_resolved)(void *conn) = swow_PQfinish_resolver;
void swow_PQfinish_redirect(void *conn) {
    return swow_PQfinish_resolved(conn);
}

// weak function pointer for PQflush
__attribute__((weak, alias("swow_PQflush_redirect"))) extern int PQflush(void *conn);
// resolved function holder
int (*swow_PQflush_resolved)(void *conn);
// resolver for PQflush
int swow_PQflush_resolver(void *conn) {
    swow_PQflush_resolved = (int (*)(void *conn))dlsym(NULL, "PQflush");

    if (swow_PQflush_resolved == NULL) {
        fprintf(stderr, "failed resolve PQflush: %s\n", dlerror());
        abort();
    } 

    return PQflush(conn);
}
int (*swow_PQflush_resolved)(void *conn) = swow_PQflush_resolver;
int swow_PQflush_redirect(void *conn) {
    return swow_PQflush_resolved(conn);
}

// weak function pointer for PQfmod
__attribute__((weak, alias("swow_PQfmod_redirect"))) extern int PQfmod(const void *res, int field_num);
// resolved function holder
int (*swow_PQfmod_resolved)(const void *res, int field_num);
// resolver for PQfmod
int swow_PQfmod_resolver(const void *res, int field_num) {
    swow_PQfmod_resolved = (int (*)(const void *res, int field_num))dlsym(NULL, "PQfmod");

    if (swow_PQfmod_resolved == NULL) {
        fprintf(stderr, "failed resolve PQfmod: %s\n", dlerror());
        abort();
    } 

    return PQfmod(res, field_num);
}
int (*swow_PQfmod_resolved)(const void *res, int field_num) = swow_PQfmod_resolver;
int swow_PQfmod_redirect(const void *res, int field_num) {
    return swow_PQfmod_resolved(res, field_num);
}

// weak function pointer for PQfname
__attribute__((weak, alias("swow_PQfname_redirect"))) extern char * PQfname(const void *res, int field_num);
// resolved function holder
char * (*swow_PQfname_resolved)(const void *res, int field_num);
// resolver for PQfname
char * swow_PQfname_resolver(const void *res, int field_num) {
    swow_PQfname_resolved = (char * (*)(const void *res, int field_num))dlsym(NULL, "PQfname");

    if (swow_PQfname_resolved == NULL) {
        fprintf(stderr, "failed resolve PQfname: %s\n", dlerror());
        abort();
    } 

    return PQfname(res, field_num);
}
char * (*swow_PQfname_resolved)(const void *res, int field_num) = swow_PQfname_resolver;
char * swow_PQfname_redirect(const void *res, int field_num) {
    return swow_PQfname_resolved(res, field_num);
}

// weak function pointer for PQfreemem
__attribute__((weak, alias("swow_PQfreemem_redirect"))) extern void PQfreemem(void *ptr);
// resolved function holder
void (*swow_PQfreemem_resolved)(void *ptr);
// resolver for PQfreemem
void swow_PQfreemem_resolver(void *ptr) {
    swow_PQfreemem_resolved = (void (*)(void *ptr))dlsym(NULL, "PQfreemem");

    if (swow_PQfreemem_resolved == NULL) {
        fprintf(stderr, "failed resolve PQfreemem: %s\n", dlerror());
        abort();
    } 

    PQfreemem(ptr);
    return;
}
void (*swow_PQfreemem_resolved)(void *ptr) = swow_PQfreemem_resolver;
void swow_PQfreemem_redirect(void *ptr) {
    return swow_PQfreemem_resolved(ptr);
}

// weak function pointer for PQfsize
__attribute__((weak, alias("swow_PQfsize_redirect"))) extern int PQfsize(const void *res, int field_num);
// resolved function holder
int (*swow_PQfsize_resolved)(const void *res, int field_num);
// resolver for PQfsize
int swow_PQfsize_resolver(const void *res, int field_num) {
    swow_PQfsize_resolved = (int (*)(const void *res, int field_num))dlsym(NULL, "PQfsize");

    if (swow_PQfsize_resolved == NULL) {
        fprintf(stderr, "failed resolve PQfsize: %s\n", dlerror());
        abort();
    } 

    return PQfsize(res, field_num);
}
int (*swow_PQfsize_resolved)(const void *res, int field_num) = swow_PQfsize_resolver;
int swow_PQfsize_redirect(const void *res, int field_num) {
    return swow_PQfsize_resolved(res, field_num);
}

// weak function pointer for PQftable
__attribute__((weak, alias("swow_PQftable_redirect"))) extern unsigned int PQftable(const void *res, int field_num);
// resolved function holder
unsigned int (*swow_PQftable_resolved)(const void *res, int field_num);
// resolver for PQftable
unsigned int swow_PQftable_resolver(const void *res, int field_num) {
    swow_PQftable_resolved = (unsigned int (*)(const void *res, int field_num))dlsym(NULL, "PQftable");

    if (swow_PQftable_resolved == NULL) {
        fprintf(stderr, "failed resolve PQftable: %s\n", dlerror());
        abort();
    } 

    return PQftable(res, field_num);
}
unsigned int (*swow_PQftable_resolved)(const void *res, int field_num) = swow_PQftable_resolver;
unsigned int swow_PQftable_redirect(const void *res, int field_num) {
    return swow_PQftable_resolved(res, field_num);
}

// weak function pointer for PQftype
__attribute__((weak, alias("swow_PQftype_redirect"))) extern unsigned int PQftype(const void *res, int field_num);
// resolved function holder
unsigned int (*swow_PQftype_resolved)(const void *res, int field_num);
// resolver for PQftype
unsigned int swow_PQftype_resolver(const void *res, int field_num) {
    swow_PQftype_resolved = (unsigned int (*)(const void *res, int field_num))dlsym(NULL, "PQftype");

    if (swow_PQftype_resolved == NULL) {
        fprintf(stderr, "failed resolve PQftype: %s\n", dlerror());
        abort();
    } 

    return PQftype(res, field_num);
}
unsigned int (*swow_PQftype_resolved)(const void *res, int field_num) = swow_PQftype_resolver;
unsigned int swow_PQftype_redirect(const void *res, int field_num) {
    return swow_PQftype_resolved(res, field_num);
}

// weak function pointer for PQgetCopyData
__attribute__((weak, alias("swow_PQgetCopyData_redirect"))) extern int PQgetCopyData(void *conn, char **buffer, int async);
// resolved function holder
int (*swow_PQgetCopyData_resolved)(void *conn, char **buffer, int async);
// resolver for PQgetCopyData
int swow_PQgetCopyData_resolver(void *conn, char **buffer, int async) {
    swow_PQgetCopyData_resolved = (int (*)(void *conn, char **buffer, int async))dlsym(NULL, "PQgetCopyData");

    if (swow_PQgetCopyData_resolved == NULL) {
        fprintf(stderr, "failed resolve PQgetCopyData: %s\n", dlerror());
        abort();
    } 

    return PQgetCopyData(conn, buffer, async);
}
int (*swow_PQgetCopyData_resolved)(void *conn, char **buffer, int async) = swow_PQgetCopyData_resolver;
int swow_PQgetCopyData_redirect(void *conn, char **buffer, int async) {
    return swow_PQgetCopyData_resolved(conn, buffer, async);
}

// weak function pointer for PQgetisnull
__attribute__((weak, alias("swow_PQgetisnull_redirect"))) extern int PQgetisnull(const void *res, int tup_num, int field_num);
// resolved function holder
int (*swow_PQgetisnull_resolved)(const void *res, int tup_num, int field_num);
// resolver for PQgetisnull
int swow_PQgetisnull_resolver(const void *res, int tup_num, int field_num) {
    swow_PQgetisnull_resolved = (int (*)(const void *res, int tup_num, int field_num))dlsym(NULL, "PQgetisnull");

    if (swow_PQgetisnull_resolved == NULL) {
        fprintf(stderr, "failed resolve PQgetisnull: %s\n", dlerror());
        abort();
    } 

    return PQgetisnull(res, tup_num, field_num);
}
int (*swow_PQgetisnull_resolved)(const void *res, int tup_num, int field_num) = swow_PQgetisnull_resolver;
int swow_PQgetisnull_redirect(const void *res, int tup_num, int field_num) {
    return swow_PQgetisnull_resolved(res, tup_num, field_num);
}

// weak function pointer for PQgetlength
__attribute__((weak, alias("swow_PQgetlength_redirect"))) extern int PQgetlength(const void *res, int tup_num, int field_num);
// resolved function holder
int (*swow_PQgetlength_resolved)(const void *res, int tup_num, int field_num);
// resolver for PQgetlength
int swow_PQgetlength_resolver(const void *res, int tup_num, int field_num) {
    swow_PQgetlength_resolved = (int (*)(const void *res, int tup_num, int field_num))dlsym(NULL, "PQgetlength");

    if (swow_PQgetlength_resolved == NULL) {
        fprintf(stderr, "failed resolve PQgetlength: %s\n", dlerror());
        abort();
    } 

    return PQgetlength(res, tup_num, field_num);
}
int (*swow_PQgetlength_resolved)(const void *res, int tup_num, int field_num) = swow_PQgetlength_resolver;
int swow_PQgetlength_redirect(const void *res, int tup_num, int field_num) {
    return swow_PQgetlength_resolved(res, tup_num, field_num);
}

// weak function pointer for PQgetResult
__attribute__((weak, alias("swow_PQgetResult_redirect"))) extern void * PQgetResult(void *conn);
// resolved function holder
void * (*swow_PQgetResult_resolved)(void *conn);
// resolver for PQgetResult
void * swow_PQgetResult_resolver(void *conn) {
    swow_PQgetResult_resolved = (void * (*)(void *conn))dlsym(NULL, "PQgetResult");

    if (swow_PQgetResult_resolved == NULL) {
        fprintf(stderr, "failed resolve PQgetResult: %s\n", dlerror());
        abort();
    } 

    return PQgetResult(conn);
}
void * (*swow_PQgetResult_resolved)(void *conn) = swow_PQgetResult_resolver;
void * swow_PQgetResult_redirect(void *conn) {
    return swow_PQgetResult_resolved(conn);
}

// weak function pointer for PQgetvalue
__attribute__((weak, alias("swow_PQgetvalue_redirect"))) extern char * PQgetvalue(const void *res, int tup_num, int field_num);
// resolved function holder
char * (*swow_PQgetvalue_resolved)(const void *res, int tup_num, int field_num);
// resolver for PQgetvalue
char * swow_PQgetvalue_resolver(const void *res, int tup_num, int field_num) {
    swow_PQgetvalue_resolved = (char * (*)(const void *res, int tup_num, int field_num))dlsym(NULL, "PQgetvalue");

    if (swow_PQgetvalue_resolved == NULL) {
        fprintf(stderr, "failed resolve PQgetvalue: %s\n", dlerror());
        abort();
    } 

    return PQgetvalue(res, tup_num, field_num);
}
char * (*swow_PQgetvalue_resolved)(const void *res, int tup_num, int field_num) = swow_PQgetvalue_resolver;
char * swow_PQgetvalue_redirect(const void *res, int tup_num, int field_num) {
    return swow_PQgetvalue_resolved(res, tup_num, field_num);
}

// weak function pointer for PQlibVersion
__attribute__((weak, alias("swow_PQlibVersion_redirect"))) extern int PQlibVersion(void);
// resolved function holder
int (*swow_PQlibVersion_resolved)(void);
// resolver for PQlibVersion
int swow_PQlibVersion_resolver(void) {
    swow_PQlibVersion_resolved = (int (*)(void))dlsym(NULL, "PQlibVersion");

    if (swow_PQlibVersion_resolved == NULL) {
        fprintf(stderr, "failed resolve PQlibVersion: %s\n", dlerror());
        abort();
    } 

    return PQlibVersion();
}
int (*swow_PQlibVersion_resolved)(void) = swow_PQlibVersion_resolver;
int swow_PQlibVersion_redirect(void) {
    return swow_PQlibVersion_resolved();
}

// weak function pointer for PQnfields
__attribute__((weak, alias("swow_PQnfields_redirect"))) extern int PQnfields(const void *res);
// resolved function holder
int (*swow_PQnfields_resolved)(const void *res);
// resolver for PQnfields
int swow_PQnfields_resolver(const void *res) {
    swow_PQnfields_resolved = (int (*)(const void *res))dlsym(NULL, "PQnfields");

    if (swow_PQnfields_resolved == NULL) {
        fprintf(stderr, "failed resolve PQnfields: %s\n", dlerror());
        abort();
    } 

    return PQnfields(res);
}
int (*swow_PQnfields_resolved)(const void *res) = swow_PQnfields_resolver;
int swow_PQnfields_redirect(const void *res) {
    return swow_PQnfields_resolved(res);
}

// weak function pointer for PQntuples
__attribute__((weak, alias("swow_PQntuples_redirect"))) extern int PQntuples(const void *res);
// resolved function holder
int (*swow_PQntuples_resolved)(const void *res);
// resolver for PQntuples
int swow_PQntuples_resolver(const void *res) {
    swow_PQntuples_resolved = (int (*)(const void *res))dlsym(NULL, "PQntuples");

    if (swow_PQntuples_resolved == NULL) {
        fprintf(stderr, "failed resolve PQntuples: %s\n", dlerror());
        abort();
    } 

    return PQntuples(res);
}
int (*swow_PQntuples_resolved)(const void *res) = swow_PQntuples_resolver;
int swow_PQntuples_redirect(const void *res) {
    return swow_PQntuples_resolved(res);
}

// weak function pointer for PQnotifies
__attribute__((weak, alias("swow_PQnotifies_redirect"))) extern void * PQnotifies(void *conn);
// resolved function holder
void * (*swow_PQnotifies_resolved)(void *conn);
// resolver for PQnotifies
void * swow_PQnotifies_resolver(void *conn) {
    swow_PQnotifies_resolved = (void * (*)(void *conn))dlsym(NULL, "PQnotifies");

    if (swow_PQnotifies_resolved == NULL) {
        fprintf(stderr, "failed resolve PQnotifies: %s\n", dlerror());
        abort();
    } 

    return PQnotifies(conn);
}
void * (*swow_PQnotifies_resolved)(void *conn) = swow_PQnotifies_resolver;
void * swow_PQnotifies_redirect(void *conn) {
    return swow_PQnotifies_resolved(conn);
}

// weak function pointer for PQoidValue
__attribute__((weak, alias("swow_PQoidValue_redirect"))) extern unsigned int PQoidValue(const void *res);
// resolved function holder
unsigned int (*swow_PQoidValue_resolved)(const void *res);
// resolver for PQoidValue
unsigned int swow_PQoidValue_resolver(const void *res) {
    swow_PQoidValue_resolved = (unsigned int (*)(const void *res))dlsym(NULL, "PQoidValue");

    if (swow_PQoidValue_resolved == NULL) {
        fprintf(stderr, "failed resolve PQoidValue: %s\n", dlerror());
        abort();
    } 

    return PQoidValue(res);
}
unsigned int (*swow_PQoidValue_resolved)(const void *res) = swow_PQoidValue_resolver;
unsigned int swow_PQoidValue_redirect(const void *res) {
    return swow_PQoidValue_resolved(res);
}

// weak function pointer for PQparameterStatus
__attribute__((weak, alias("swow_PQparameterStatus_redirect"))) extern const char * PQparameterStatus(const void *conn, const char *paramName);
// resolved function holder
const char * (*swow_PQparameterStatus_resolved)(const void *conn, const char *paramName);
// resolver for PQparameterStatus
const char * swow_PQparameterStatus_resolver(const void *conn, const char *paramName) {
    swow_PQparameterStatus_resolved = (const char * (*)(const void *conn, const char *paramName))dlsym(NULL, "PQparameterStatus");

    if (swow_PQparameterStatus_resolved == NULL) {
        fprintf(stderr, "failed resolve PQparameterStatus: %s\n", dlerror());
        abort();
    } 

    return PQparameterStatus(conn, paramName);
}
const char * (*swow_PQparameterStatus_resolved)(const void *conn, const char *paramName) = swow_PQparameterStatus_resolver;
const char * swow_PQparameterStatus_redirect(const void *conn, const char *paramName) {
    return swow_PQparameterStatus_resolved(conn, paramName);
}

// weak function pointer for PQprotocolVersion
__attribute__((weak, alias("swow_PQprotocolVersion_redirect"))) extern int PQprotocolVersion(const void *conn);
// resolved function holder
int (*swow_PQprotocolVersion_resolved)(const void *conn);
// resolver for PQprotocolVersion
int swow_PQprotocolVersion_resolver(const void *conn) {
    swow_PQprotocolVersion_resolved = (int (*)(const void *conn))dlsym(NULL, "PQprotocolVersion");

    if (swow_PQprotocolVersion_resolved == NULL) {
        fprintf(stderr, "failed resolve PQprotocolVersion: %s\n", dlerror());
        abort();
    } 

    return PQprotocolVersion(conn);
}
int (*swow_PQprotocolVersion_resolved)(const void *conn) = swow_PQprotocolVersion_resolver;
int swow_PQprotocolVersion_redirect(const void *conn) {
    return swow_PQprotocolVersion_resolved(conn);
}

// weak function pointer for PQputCopyData
__attribute__((weak, alias("swow_PQputCopyData_redirect"))) extern int PQputCopyData(void *conn, const char *buffer, int nbytes);
// resolved function holder
int (*swow_PQputCopyData_resolved)(void *conn, const char *buffer, int nbytes);
// resolver for PQputCopyData
int swow_PQputCopyData_resolver(void *conn, const char *buffer, int nbytes) {
    swow_PQputCopyData_resolved = (int (*)(void *conn, const char *buffer, int nbytes))dlsym(NULL, "PQputCopyData");

    if (swow_PQputCopyData_resolved == NULL) {
        fprintf(stderr, "failed resolve PQputCopyData: %s\n", dlerror());
        abort();
    } 

    return PQputCopyData(conn, buffer, nbytes);
}
int (*swow_PQputCopyData_resolved)(void *conn, const char *buffer, int nbytes) = swow_PQputCopyData_resolver;
int swow_PQputCopyData_redirect(void *conn, const char *buffer, int nbytes) {
    return swow_PQputCopyData_resolved(conn, buffer, nbytes);
}

// weak function pointer for PQputCopyEnd
__attribute__((weak, alias("swow_PQputCopyEnd_redirect"))) extern int PQputCopyEnd(void *conn, const char *errormsg);
// resolved function holder
int (*swow_PQputCopyEnd_resolved)(void *conn, const char *errormsg);
// resolver for PQputCopyEnd
int swow_PQputCopyEnd_resolver(void *conn, const char *errormsg) {
    swow_PQputCopyEnd_resolved = (int (*)(void *conn, const char *errormsg))dlsym(NULL, "PQputCopyEnd");

    if (swow_PQputCopyEnd_resolved == NULL) {
        fprintf(stderr, "failed resolve PQputCopyEnd: %s\n", dlerror());
        abort();
    } 

    return PQputCopyEnd(conn, errormsg);
}
int (*swow_PQputCopyEnd_resolved)(void *conn, const char *errormsg) = swow_PQputCopyEnd_resolver;
int swow_PQputCopyEnd_redirect(void *conn, const char *errormsg) {
    return swow_PQputCopyEnd_resolved(conn, errormsg);
}

// weak function pointer for PQresetStart
__attribute__((weak, alias("swow_PQresetStart_redirect"))) extern int PQresetStart(void *conn);
// resolved function holder
int (*swow_PQresetStart_resolved)(void *conn);
// resolver for PQresetStart
int swow_PQresetStart_resolver(void *conn) {
    swow_PQresetStart_resolved = (int (*)(void *conn))dlsym(NULL, "PQresetStart");

    if (swow_PQresetStart_resolved == NULL) {
        fprintf(stderr, "failed resolve PQresetStart: %s\n", dlerror());
        abort();
    } 

    return PQresetStart(conn);
}
int (*swow_PQresetStart_resolved)(void *conn) = swow_PQresetStart_resolver;
int swow_PQresetStart_redirect(void *conn) {
    return swow_PQresetStart_resolved(conn);
}

// weak function pointer for PQresultErrorField
__attribute__((weak, alias("swow_PQresultErrorField_redirect"))) extern char * PQresultErrorField(const void *res, int fieldcode);
// resolved function holder
char * (*swow_PQresultErrorField_resolved)(const void *res, int fieldcode);
// resolver for PQresultErrorField
char * swow_PQresultErrorField_resolver(const void *res, int fieldcode) {
    swow_PQresultErrorField_resolved = (char * (*)(const void *res, int fieldcode))dlsym(NULL, "PQresultErrorField");

    if (swow_PQresultErrorField_resolved == NULL) {
        fprintf(stderr, "failed resolve PQresultErrorField: %s\n", dlerror());
        abort();
    } 

    return PQresultErrorField(res, fieldcode);
}
char * (*swow_PQresultErrorField_resolved)(const void *res, int fieldcode) = swow_PQresultErrorField_resolver;
char * swow_PQresultErrorField_redirect(const void *res, int fieldcode) {
    return swow_PQresultErrorField_resolved(res, fieldcode);
}

// weak function pointer for PQresultStatus
__attribute__((weak, alias("swow_PQresultStatus_redirect"))) extern int PQresultStatus(const void *res);
// resolved function holder
int (*swow_PQresultStatus_resolved)(const void *res);
// resolver for PQresultStatus
int swow_PQresultStatus_resolver(const void *res) {
    swow_PQresultStatus_resolved = (int (*)(const void *res))dlsym(NULL, "PQresultStatus");

    if (swow_PQresultStatus_resolved == NULL) {
        fprintf(stderr, "failed resolve PQresultStatus: %s\n", dlerror());
        abort();
    } 

    return PQresultStatus(res);
}
int (*swow_PQresultStatus_resolved)(const void *res) = swow_PQresultStatus_resolver;
int swow_PQresultStatus_redirect(const void *res) {
    return swow_PQresultStatus_resolved(res);
}

// weak function pointer for PQsendPrepare
__attribute__((weak, alias("swow_PQsendPrepare_redirect"))) extern int PQsendPrepare(void *conn, const char *stmtName, const char *query, int nParams, const unsigned int *paramTypes);
// resolved function holder
int (*swow_PQsendPrepare_resolved)(void *conn, const char *stmtName, const char *query, int nParams, const unsigned int *paramTypes);
// resolver for PQsendPrepare
int swow_PQsendPrepare_resolver(void *conn, const char *stmtName, const char *query, int nParams, const unsigned int *paramTypes) {
    swow_PQsendPrepare_resolved = (int (*)(void *conn, const char *stmtName, const char *query, int nParams, const unsigned int *paramTypes))dlsym(NULL, "PQsendPrepare");

    if (swow_PQsendPrepare_resolved == NULL) {
        fprintf(stderr, "failed resolve PQsendPrepare: %s\n", dlerror());
        abort();
    } 

    return PQsendPrepare(conn, stmtName, query, nParams, paramTypes);
}
int (*swow_PQsendPrepare_resolved)(void *conn, const char *stmtName, const char *query, int nParams, const unsigned int *paramTypes) = swow_PQsendPrepare_resolver;
int swow_PQsendPrepare_redirect(void *conn, const char *stmtName, const char *query, int nParams, const unsigned int *paramTypes) {
    return swow_PQsendPrepare_resolved(conn, stmtName, query, nParams, paramTypes);
}

// weak function pointer for PQsendQuery
__attribute__((weak, alias("swow_PQsendQuery_redirect"))) extern int PQsendQuery(void *conn, const char *query);
// resolved function holder
int (*swow_PQsendQuery_resolved)(void *conn, const char *query);
// resolver for PQsendQuery
int swow_PQsendQuery_resolver(void *conn, const char *query) {
    swow_PQsendQuery_resolved = (int (*)(void *conn, const char *query))dlsym(NULL, "PQsendQuery");

    if (swow_PQsendQuery_resolved == NULL) {
        fprintf(stderr, "failed resolve PQsendQuery: %s\n", dlerror());
        abort();
    } 

    return PQsendQuery(conn, query);
}
int (*swow_PQsendQuery_resolved)(void *conn, const char *query) = swow_PQsendQuery_resolver;
int swow_PQsendQuery_redirect(void *conn, const char *query) {
    return swow_PQsendQuery_resolved(conn, query);
}

// weak function pointer for PQsendQueryParams
__attribute__((weak, alias("swow_PQsendQueryParams_redirect"))) extern int PQsendQueryParams(void *conn, const char *command, int nParams,  const unsigned int *paramTypes, const char *const *paramValues, const int *paramLengths, const int *paramFormats, int resultFormat);
// resolved function holder
int (*swow_PQsendQueryParams_resolved)(void *conn, const char *command, int nParams,  const unsigned int *paramTypes, const char *const *paramValues, const int *paramLengths, const int *paramFormats, int resultFormat);
// resolver for PQsendQueryParams
int swow_PQsendQueryParams_resolver(void *conn, const char *command, int nParams,  const unsigned int *paramTypes, const char *const *paramValues, const int *paramLengths, const int *paramFormats, int resultFormat) {
    swow_PQsendQueryParams_resolved = (int (*)(void *conn, const char *command, int nParams,  const unsigned int *paramTypes, const char *const *paramValues, const int *paramLengths, const int *paramFormats, int resultFormat))dlsym(NULL, "PQsendQueryParams");

    if (swow_PQsendQueryParams_resolved == NULL) {
        fprintf(stderr, "failed resolve PQsendQueryParams: %s\n", dlerror());
        abort();
    } 

    return PQsendQueryParams(conn, command, nParams, paramTypes, paramValues, paramLengths, paramFormats, resultFormat);
}
int (*swow_PQsendQueryParams_resolved)(void *conn, const char *command, int nParams,  const unsigned int *paramTypes, const char *const *paramValues, const int *paramLengths, const int *paramFormats, int resultFormat) = swow_PQsendQueryParams_resolver;
int swow_PQsendQueryParams_redirect(void *conn, const char *command, int nParams,  const unsigned int *paramTypes, const char *const *paramValues, const int *paramLengths, const int *paramFormats, int resultFormat) {
    return swow_PQsendQueryParams_resolved(conn, command, nParams, paramTypes, paramValues, paramLengths, paramFormats, resultFormat);
}

// weak function pointer for PQsendQueryPrepared
__attribute__((weak, alias("swow_PQsendQueryPrepared_redirect"))) extern int PQsendQueryPrepared(void *conn, const char *stmtName, int nParams, const char *const *paramValues, const int *paramLengths, const int *paramFormats, int resultFormat);
// resolved function holder
int (*swow_PQsendQueryPrepared_resolved)(void *conn, const char *stmtName, int nParams, const char *const *paramValues, const int *paramLengths, const int *paramFormats, int resultFormat);
// resolver for PQsendQueryPrepared
int swow_PQsendQueryPrepared_resolver(void *conn, const char *stmtName, int nParams, const char *const *paramValues, const int *paramLengths, const int *paramFormats, int resultFormat) {
    swow_PQsendQueryPrepared_resolved = (int (*)(void *conn, const char *stmtName, int nParams, const char *const *paramValues, const int *paramLengths, const int *paramFormats, int resultFormat))dlsym(NULL, "PQsendQueryPrepared");

    if (swow_PQsendQueryPrepared_resolved == NULL) {
        fprintf(stderr, "failed resolve PQsendQueryPrepared: %s\n", dlerror());
        abort();
    } 

    return PQsendQueryPrepared(conn, stmtName, nParams, paramValues, paramLengths, paramFormats, resultFormat);
}
int (*swow_PQsendQueryPrepared_resolved)(void *conn, const char *stmtName, int nParams, const char *const *paramValues, const int *paramLengths, const int *paramFormats, int resultFormat) = swow_PQsendQueryPrepared_resolver;
int swow_PQsendQueryPrepared_redirect(void *conn, const char *stmtName, int nParams, const char *const *paramValues, const int *paramLengths, const int *paramFormats, int resultFormat) {
    return swow_PQsendQueryPrepared_resolved(conn, stmtName, nParams, paramValues, paramLengths, paramFormats, resultFormat);
}

// weak function pointer for PQsetnonblocking
__attribute__((weak, alias("swow_PQsetnonblocking_redirect"))) extern int PQsetnonblocking(void *conn, int arg);
// resolved function holder
int (*swow_PQsetnonblocking_resolved)(void *conn, int arg);
// resolver for PQsetnonblocking
int swow_PQsetnonblocking_resolver(void *conn, int arg) {
    swow_PQsetnonblocking_resolved = (int (*)(void *conn, int arg))dlsym(NULL, "PQsetnonblocking");

    if (swow_PQsetnonblocking_resolved == NULL) {
        fprintf(stderr, "failed resolve PQsetnonblocking: %s\n", dlerror());
        abort();
    } 

    return PQsetnonblocking(conn, arg);
}
int (*swow_PQsetnonblocking_resolved)(void *conn, int arg) = swow_PQsetnonblocking_resolver;
int swow_PQsetnonblocking_redirect(void *conn, int arg) {
    return swow_PQsetnonblocking_resolved(conn, arg);
}

// weak function pointer for PQsetNoticeProcessor
__attribute__((weak, alias("swow_PQsetNoticeProcessor_redirect"))) extern void * PQsetNoticeProcessor(void *conn, void *proc, void *arg);
// resolved function holder
void * (*swow_PQsetNoticeProcessor_resolved)(void *conn, void *proc, void *arg);
// resolver for PQsetNoticeProcessor
void * swow_PQsetNoticeProcessor_resolver(void *conn, void *proc, void *arg) {
    swow_PQsetNoticeProcessor_resolved = (void * (*)(void *conn, void *proc, void *arg))dlsym(NULL, "PQsetNoticeProcessor");

    if (swow_PQsetNoticeProcessor_resolved == NULL) {
        fprintf(stderr, "failed resolve PQsetNoticeProcessor: %s\n", dlerror());
        abort();
    } 

    return PQsetNoticeProcessor(conn, proc, arg);
}
void * (*swow_PQsetNoticeProcessor_resolved)(void *conn, void *proc, void *arg) = swow_PQsetNoticeProcessor_resolver;
void * swow_PQsetNoticeProcessor_redirect(void *conn, void *proc, void *arg) {
    return swow_PQsetNoticeProcessor_resolved(conn, proc, arg);
}

// weak function pointer for PQsocket
__attribute__((weak, alias("swow_PQsocket_redirect"))) extern int PQsocket(const void *conn);
// resolved function holder
int (*swow_PQsocket_resolved)(const void *conn);
// resolver for PQsocket
int swow_PQsocket_resolver(const void *conn) {
    swow_PQsocket_resolved = (int (*)(const void *conn))dlsym(NULL, "PQsocket");

    if (swow_PQsocket_resolved == NULL) {
        fprintf(stderr, "failed resolve PQsocket: %s\n", dlerror());
        abort();
    } 

    return PQsocket(conn);
}
int (*swow_PQsocket_resolved)(const void *conn) = swow_PQsocket_resolver;
int swow_PQsocket_redirect(const void *conn) {
    return swow_PQsocket_resolved(conn);
}

// weak function pointer for PQstatus
__attribute__((weak, alias("swow_PQstatus_redirect"))) extern int PQstatus(const void *conn);
// resolved function holder
int (*swow_PQstatus_resolved)(const void *conn);
// resolver for PQstatus
int swow_PQstatus_resolver(const void *conn) {
    swow_PQstatus_resolved = (int (*)(const void *conn))dlsym(NULL, "PQstatus");

    if (swow_PQstatus_resolved == NULL) {
        fprintf(stderr, "failed resolve PQstatus: %s\n", dlerror());
        abort();
    } 

    return PQstatus(conn);
}
int (*swow_PQstatus_resolved)(const void *conn) = swow_PQstatus_resolver;
int swow_PQstatus_redirect(const void *conn) {
    return swow_PQstatus_resolved(conn);
}

// weak function pointer for PQtransactionStatus
__attribute__((weak, alias("swow_PQtransactionStatus_redirect"))) extern int PQtransactionStatus(const void *conn);
// resolved function holder
int (*swow_PQtransactionStatus_resolved)(const void *conn);
// resolver for PQtransactionStatus
int swow_PQtransactionStatus_resolver(const void *conn) {
    swow_PQtransactionStatus_resolved = (int (*)(const void *conn))dlsym(NULL, "PQtransactionStatus");

    if (swow_PQtransactionStatus_resolved == NULL) {
        fprintf(stderr, "failed resolve PQtransactionStatus: %s\n", dlerror());
        abort();
    } 

    return PQtransactionStatus(conn);
}
int (*swow_PQtransactionStatus_resolved)(const void *conn) = swow_PQtransactionStatus_resolver;
int swow_PQtransactionStatus_redirect(const void *conn) {
    return swow_PQtransactionStatus_resolved(conn);
}

// weak function pointer for PQunescapeBytea
__attribute__((weak, alias("swow_PQunescapeBytea_redirect"))) extern unsigned char * PQunescapeBytea(const unsigned char *strtext, size_t *retbuflen);
// resolved function holder
unsigned char * (*swow_PQunescapeBytea_resolved)(const unsigned char *strtext, size_t *retbuflen);
// resolver for PQunescapeBytea
unsigned char * swow_PQunescapeBytea_resolver(const unsigned char *strtext, size_t *retbuflen) {
    swow_PQunescapeBytea_resolved = (unsigned char * (*)(const unsigned char *strtext, size_t *retbuflen))dlsym(NULL, "PQunescapeBytea");

    if (swow_PQunescapeBytea_resolved == NULL) {
        fprintf(stderr, "failed resolve PQunescapeBytea: %s\n", dlerror());
        abort();
    } 

    return PQunescapeBytea(strtext, retbuflen);
}
unsigned char * (*swow_PQunescapeBytea_resolved)(const unsigned char *strtext, size_t *retbuflen) = swow_PQunescapeBytea_resolver;
unsigned char * swow_PQunescapeBytea_redirect(const unsigned char *strtext, size_t *retbuflen) {
    return swow_PQunescapeBytea_resolved(strtext, retbuflen);
}

// weak function pointer for pdo_get_bool_param
__attribute__((weak, alias("swow_pdo_get_bool_param_redirect"))) extern bool pdo_get_bool_param(bool *bval, void *value);
// resolved function holder
bool (*swow_pdo_get_bool_param_resolved)(bool *bval, void *value);
// resolver for pdo_get_bool_param
bool swow_pdo_get_bool_param_resolver(bool *bval, void *value) {
    swow_pdo_get_bool_param_resolved = (bool (*)(bool *bval, void *value))dlsym(NULL, "pdo_get_bool_param");

    if (swow_pdo_get_bool_param_resolved == NULL) {
        fprintf(stderr, "failed resolve pdo_get_bool_param: %s\n", dlerror());
        abort();
    } 

    return pdo_get_bool_param(bval, value);
}
bool (*swow_pdo_get_bool_param_resolved)(bool *bval, void *value) = swow_pdo_get_bool_param_resolver;
bool swow_pdo_get_bool_param_redirect(bool *bval, void *value) {
    return swow_pdo_get_bool_param_resolved(bval, value);
}

// weak function pointer for pdo_handle_error
__attribute__((weak, alias("swow_pdo_handle_error_redirect"))) extern void pdo_handle_error(void *dbh, void *stmt);
// resolved function holder
void (*swow_pdo_handle_error_resolved)(void *dbh, void *stmt);
// resolver for pdo_handle_error
void swow_pdo_handle_error_resolver(void *dbh, void *stmt) {
    swow_pdo_handle_error_resolved = (void (*)(void *dbh, void *stmt))dlsym(NULL, "pdo_handle_error");

    if (swow_pdo_handle_error_resolved == NULL) {
        fprintf(stderr, "failed resolve pdo_handle_error: %s\n", dlerror());
        abort();
    } 

    pdo_handle_error(dbh, stmt);
    return;
}
void (*swow_pdo_handle_error_resolved)(void *dbh, void *stmt) = swow_pdo_handle_error_resolver;
void swow_pdo_handle_error_redirect(void *dbh, void *stmt) {
    return swow_pdo_handle_error_resolved(dbh, stmt);
}

// weak function pointer for pdo_parse_params
__attribute__((weak, alias("swow_pdo_parse_params_redirect"))) extern int pdo_parse_params(void *stmt, void *inquery, void *outquery);
// resolved function holder
int (*swow_pdo_parse_params_resolved)(void *stmt, void *inquery, void *outquery);
// resolver for pdo_parse_params
int swow_pdo_parse_params_resolver(void *stmt, void *inquery, void *outquery) {
    swow_pdo_parse_params_resolved = (int (*)(void *stmt, void *inquery, void *outquery))dlsym(NULL, "pdo_parse_params");

    if (swow_pdo_parse_params_resolved == NULL) {
        fprintf(stderr, "failed resolve pdo_parse_params: %s\n", dlerror());
        abort();
    } 

    return pdo_parse_params(stmt, inquery, outquery);
}
int (*swow_pdo_parse_params_resolved)(void *stmt, void *inquery, void *outquery) = swow_pdo_parse_params_resolver;
int swow_pdo_parse_params_redirect(void *stmt, void *inquery, void *outquery) {
    return swow_pdo_parse_params_resolved(stmt, inquery, outquery);
}

// weak function pointer for pdo_throw_exception
__attribute__((weak, alias("swow_pdo_throw_exception_redirect"))) extern void pdo_throw_exception(unsigned int driver_errcode, char *driver_errmsg, void *pdo_error);
// resolved function holder
void (*swow_pdo_throw_exception_resolved)(unsigned int driver_errcode, char *driver_errmsg, void *pdo_error);
// resolver for pdo_throw_exception
void swow_pdo_throw_exception_resolver(unsigned int driver_errcode, char *driver_errmsg, void *pdo_error) {
    swow_pdo_throw_exception_resolved = (void (*)(unsigned int driver_errcode, char *driver_errmsg, void *pdo_error))dlsym(NULL, "pdo_throw_exception");

    if (swow_pdo_throw_exception_resolved == NULL) {
        fprintf(stderr, "failed resolve pdo_throw_exception: %s\n", dlerror());
        abort();
    } 

    pdo_throw_exception(driver_errcode, driver_errmsg, pdo_error);
    return;
}
void (*swow_pdo_throw_exception_resolved)(unsigned int driver_errcode, char *driver_errmsg, void *pdo_error) = swow_pdo_throw_exception_resolver;
void swow_pdo_throw_exception_redirect(unsigned int driver_errcode, char *driver_errmsg, void *pdo_error) {
    return swow_pdo_throw_exception_resolved(driver_errcode, driver_errmsg, pdo_error);
}

// weak function pointer for php_pdo_register_driver
__attribute__((weak, alias("swow_php_pdo_register_driver_redirect"))) extern int php_pdo_register_driver(const void *driver);
// resolved function holder
int (*swow_php_pdo_register_driver_resolved)(const void *driver);
// resolver for php_pdo_register_driver
int swow_php_pdo_register_driver_resolver(const void *driver) {
    swow_php_pdo_register_driver_resolved = (int (*)(const void *driver))dlsym(NULL, "php_pdo_register_driver");

    if (swow_php_pdo_register_driver_resolved == NULL) {
        fprintf(stderr, "failed resolve php_pdo_register_driver: %s\n", dlerror());
        abort();
    } 

    return php_pdo_register_driver(driver);
}
int (*swow_php_pdo_register_driver_resolved)(const void *driver) = swow_php_pdo_register_driver_resolver;
int swow_php_pdo_register_driver_redirect(const void *driver) {
    return swow_php_pdo_register_driver_resolved(driver);
}

// weak function pointer for php_pdo_unregister_driver
__attribute__((weak, alias("swow_php_pdo_unregister_driver_redirect"))) extern void php_pdo_unregister_driver(const void *driver);
// resolved function holder
void (*swow_php_pdo_unregister_driver_resolved)(const void *driver);
// resolver for php_pdo_unregister_driver
void swow_php_pdo_unregister_driver_resolver(const void *driver) {
    swow_php_pdo_unregister_driver_resolved = (void (*)(const void *driver))dlsym(NULL, "php_pdo_unregister_driver");

    if (swow_php_pdo_unregister_driver_resolved == NULL) {
        fprintf(stderr, "failed resolve php_pdo_unregister_driver: %s\n", dlerror());
        abort();
    } 

    php_pdo_unregister_driver(driver);
    return;
}
void (*swow_php_pdo_unregister_driver_resolved)(const void *driver) = swow_php_pdo_unregister_driver_resolver;
void swow_php_pdo_unregister_driver_redirect(const void *driver) {
    return swow_php_pdo_unregister_driver_resolved(driver);
}
#endif
