#pragma once
#ifndef MIQT_LIBMIQT_LIBMIQT_H
#define MIQT_LIBMIQT_LIBMIQT_H

#include <stdint.h>
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

// Qt classes projected as plain structs, with the same layout as the Qt class.

struct miqt_qcolor {
    int cspec;
    unsigned short a1;
    unsigned short a2;
    unsigned short a3;
    unsigned short a4;
    unsigned short a5;
    unsigned short pad;
};

struct miqt_qmargins {
    int left;
    int top;
    int right;
    int bottom;
};

struct miqt_qmarginsf {
    double left;
    double top;
    double right;
    double bottom;
};

struct miqt_qmodelindex {
    int r;
    int c;
    uintptr_t i;
    uintptr_t m;
};

struct miqt_qpoint {
    int xp;
    int yp;
};

struct miqt_qpointf {
    double xp;
    double yp;
};

struct miqt_qvector3d {
    float x;
    float y;
    float z;
};

struct miqt_qrect {
    int x1;
    int y1;
    int x2;
    int y2;
};

struct miqt_qrectf {
    double xp;
    double yp;
    double w;
    double h;
};

struct miqt_qsize {
    int wd;
    int ht;
};

struct miqt_qsizef {
    double wd;
    double ht;
};

struct miqt_qrgba64 {
    uint64_t rgba;
};

typedef const char const_char;

#ifdef __cplusplus
}

template <typename To, typename From>
static inline To miqt_to_cabi(const From& src) {
    static_assert(sizeof(To) == sizeof(From), "Qt class layout differs from its libmiqt struct");
    To dest;
    memcpy(static_cast<void*>(&dest), static_cast<const void*>(&src), sizeof(To));
    return dest;
}

template <typename To, typename From>
static inline To miqt_from_cabi(const From& src) {
    return miqt_to_cabi<To, From>(src);
}
#endif

#endif
