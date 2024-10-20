#ifndef GEN_QUTF8STRINGVIEW_H
#define GEN_QUTF8STRINGVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__hide_char8_t)
typedef QtPrivate::hide_char8_t QtPrivate__hide_char8_t;
#else
class QtPrivate__hide_char8_t;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__wrap_char)
typedef QtPrivate::wrap_char QtPrivate__wrap_char;
#else
class QtPrivate__wrap_char;
#endif
#else
typedef struct QtPrivate__hide_char8_t QtPrivate__hide_char8_t;
typedef struct QtPrivate__wrap_char QtPrivate__wrap_char;
#endif

void QtPrivate__hide_char8_t_Delete(QtPrivate__hide_char8_t* self);

void QtPrivate__wrap_char_Delete(QtPrivate__wrap_char* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
