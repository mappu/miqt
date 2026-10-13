#pragma once
#include <stdbool.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
bool test_qt_consumers(void* view, const char* name, size_t len, const char* filename);
void* test_external_view();
void* test_external_latin1_view();
#ifdef __cplusplus
}
#endif
