#pragma once
#ifndef MIQT_QT6_NETWORK_GEN_QPASSWORDDIGESTOR_H
#define MIQT_QT6_NETWORK_GEN_QPASSWORDDIGESTOR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
#endif

struct miqt_string miqt_QPasswordDigestor_DeriveKeyPbkdf12(int algorithm, struct miqt_string password, struct miqt_string salt, int iterations, unsigned long long dkLen);
struct miqt_string miqt_QPasswordDigestor_DeriveKeyPbkdf22(int algorithm, struct miqt_string password, struct miqt_string salt, int iterations, unsigned long long dkLen);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
