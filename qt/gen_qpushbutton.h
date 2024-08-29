#ifndef GEN_QPUSHBUTTON_H
#define GEN_QPUSHBUTTON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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

QPushButton* QPushButton_new();
QPushButton* QPushButton_new2(const char* text, size_t text_Strlen);
QPushButton* QPushButton_new3(QIcon* icon, const char* text, size_t text_Strlen);
QPushButton* QPushButton_new4(QWidget* parent);
QPushButton* QPushButton_new5(const char* text, size_t text_Strlen, QWidget* parent);
QPushButton* QPushButton_new6(QIcon* icon, const char* text, size_t text_Strlen, QWidget* parent);
QMetaObject* QPushButton_MetaObject(QPushButton* self);
void QPushButton_Tr(const char* s, char** _out, int* _out_Strlen);
void QPushButton_TrUtf8(const char* s, char** _out, int* _out_Strlen);
QSize* QPushButton_SizeHint(QPushButton* self);
QSize* QPushButton_MinimumSizeHint(QPushButton* self);
bool QPushButton_AutoDefault(QPushButton* self);
void QPushButton_SetAutoDefault(QPushButton* self, bool autoDefault);
bool QPushButton_IsDefault(QPushButton* self);
void QPushButton_SetDefault(QPushButton* self, bool defaultVal);
void QPushButton_SetMenu(QPushButton* self, QMenu* menu);
QMenu* QPushButton_Menu(QPushButton* self);
void QPushButton_SetFlat(QPushButton* self, bool flat);
bool QPushButton_IsFlat(QPushButton* self);
void QPushButton_ShowMenu(QPushButton* self);
void QPushButton_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPushButton_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPushButton_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QPushButton_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QPushButton_Delete(QPushButton* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
