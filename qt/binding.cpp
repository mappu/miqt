#include <string.h>
#include <stdlib.h>

#include "binding.h"

struct miqt_string* miqt_strdup(const char* src, size_t len) {
    struct miqt_string* ret = (struct miqt_string*)( malloc(len + sizeof(size_t)) );
    ret->len = len;
    memcpy(&ret->data, src, len);
    return ret;
}
