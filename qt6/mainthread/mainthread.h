#pragma once

#ifndef QT_MAINTHREAD_H
#define QT_MAINTHREAD_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void mainthread_exec(intptr_t cb);

#ifdef __cplusplus
}
#endif 

#endif
