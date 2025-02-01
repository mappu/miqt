#pragma once
#ifndef MIQT_QT6_GEN_QSTYLEFACTORY_H
#define MIQT_QT6_GEN_QSTYLEFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QStyle;
class QStyleFactory;
#else
typedef struct QStyle QStyle;
typedef struct QStyleFactory QStyleFactory;
#endif

struct miqt_array /* of struct miqt_string */  QStyleFactory_keys();
QStyle* QStyleFactory_create(struct miqt_string param1);
void QStyleFactory_delete(QStyleFactory* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
