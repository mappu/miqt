#pragma once
#ifndef MIQT_QT6_GEN_QFACTORYINTERFACE_H
#define MIQT_QT6_GEN_QFACTORYINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QFactoryInterface;
#else
typedef struct QFactoryInterface QFactoryInterface;
#endif

struct miqt_array /* of struct miqt_string */  QFactoryInterface_keys(const QFactoryInterface* self);

void QFactoryInterface_delete(QFactoryInterface* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
