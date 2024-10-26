#ifndef GEN_QPUSHBUTTON_H
#define GEN_QPUSHBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QIcon;
class QMenu;
class QMetaObject;
class QPushButton;
class QSize;
class QWidget;
#else
typedef struct QIcon QIcon;
typedef struct QMenu QMenu;
typedef struct QMetaObject QMetaObject;
typedef struct QPushButton QPushButton;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QPushButton* QPushButton_new(QWidget* parent);
QPushButton* QPushButton_new2();
QPushButton* QPushButton_new3(struct miqt_string text);
QPushButton* QPushButton_new4(QIcon* icon, struct miqt_string text);
QPushButton* QPushButton_new5(struct miqt_string text, QWidget* parent);
QPushButton* QPushButton_new6(QIcon* icon, struct miqt_string text, QWidget* parent);
QMetaObject* QPushButton_MetaObject(const QPushButton* self);
void* QPushButton_Metacast(QPushButton* self, const char* param1);
struct miqt_string QPushButton_Tr(const char* s);
struct miqt_string QPushButton_TrUtf8(const char* s);
QSize* QPushButton_SizeHint(const QPushButton* self);
QSize* QPushButton_MinimumSizeHint(const QPushButton* self);
bool QPushButton_AutoDefault(const QPushButton* self);
void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault);
bool QPushButton_IsDefault(const QPushButton* self);
void QPushButton_SetDefault(QPushButton* self, bool defaultVal);
void QPushButton_SetMenu(QPushButton* self, QMenu* menu);
QMenu* QPushButton_Menu(const QPushButton* self);
void QPushButton_SetFlat(QPushButton* self, bool flat);
bool QPushButton_IsFlat(const QPushButton* self);
void QPushButton_ShowMenu(QPushButton* self);
struct miqt_string QPushButton_Tr2(const char* s, const char* c);
struct miqt_string QPushButton_Tr3(const char* s, const char* c, int n);
struct miqt_string QPushButton_TrUtf82(const char* s, const char* c);
struct miqt_string QPushButton_TrUtf83(const char* s, const char* c, int n);
void QPushButton_Delete(QPushButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
