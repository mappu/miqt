#pragma once
#ifndef MIQT_LIBMIQT_LIBMIQT_H
#define MIQT_LIBMIQT_LIBMIQT_H

#include <string.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

struct miqt_string {
    size_t len;
    char* data;
};

struct miqt_array {
    size_t len;
    void* data;
};

struct miqt_map {
    size_t len;
    void* keys;
    void* values;
};

struct miqt_string* miqt_strdup(const char* src, size_t len);

typedef const char const_char;

#ifdef __cplusplus
}
#endif

#endif
