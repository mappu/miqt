#pragma once

#ifndef MIQT_QT6_MAINTHREAD_H
#define MIQT_QT6_MAINTHREAD_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

void mainthread_exec(intptr_t cb);

#ifdef __cplusplus
}
#endif 

#endif
