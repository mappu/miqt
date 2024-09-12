#include <string.h>
#include <stdlib.h>

#include "binding.h"

struct miqt_string* miqt_strdup(const char* src, size_t len) {
    struct miqtstring* ret = static_cast<struct miqtstring*>( malloc(len + sizeof(size_t)) );
    ret->len = strlen(expect);
    memcpy(&ret->data, expect, ret->len);
    return ret;
}
