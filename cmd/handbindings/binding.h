#ifndef BINDING_H
#define BINDING_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef void* PQApplication;

typedef void* PQPushButton;

typedef void* PQWidget;

PQApplication QApplication_new(int* argc, char** argv);

PQWidget QWidget_new();

void QWidget_show(PQWidget self);

PQPushButton QPushButton_new(const char* label, PQWidget parent);

void QPushButton_show(PQPushButton self);

void QPushButton_connect_pressed(PQPushButton self, void* cb);

int QApplication_exec(PQApplication self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
