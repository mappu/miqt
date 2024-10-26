#ifndef GEN_QRADIOBUTTON_H
#define GEN_QRADIOBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QRadioButton;
class QSize;
class QWidget;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QRadioButton QRadioButton;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QRadioButton* QRadioButton_new(QWidget* parent);
QRadioButton* QRadioButton_new2();
QRadioButton* QRadioButton_new3(struct miqt_string text);
QRadioButton* QRadioButton_new4(struct miqt_string text, QWidget* parent);
QMetaObject* QRadioButton_MetaObject(const QRadioButton* self);
void* QRadioButton_Metacast(QRadioButton* self, const char* param1);
struct miqt_string QRadioButton_Tr(const char* s);
struct miqt_string QRadioButton_TrUtf8(const char* s);
QSize* QRadioButton_SizeHint(const QRadioButton* self);
QSize* QRadioButton_MinimumSizeHint(const QRadioButton* self);
struct miqt_string QRadioButton_Tr2(const char* s, const char* c);
struct miqt_string QRadioButton_Tr3(const char* s, const char* c, int n);
struct miqt_string QRadioButton_TrUtf82(const char* s, const char* c);
struct miqt_string QRadioButton_TrUtf83(const char* s, const char* c, int n);
void QRadioButton_Delete(QRadioButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
