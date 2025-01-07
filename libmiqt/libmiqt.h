#pragma once
#ifndef MIQT_LIBMIQT_LIBMIQT_H
#define MIQT_LIBMIQT_LIBMIQT_H

#include <string.h>

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

typedef const char const_char;

#ifdef __cplusplus
}
#endif

#endif
