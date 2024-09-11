#ifndef GEN_QPEN_H
#define GEN_QPEN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBrush;
class QColor;
class QPen;
#else
typedef struct QBrush QBrush;
typedef struct QColor QColor;
typedef struct QPen QPen;
#endif

QPen* QPen_new();
QPen* QPen_new2(uintptr_t param1);
QPen* QPen_new3(QColor* color);
QPen* QPen_new4(QBrush* brush, double width);
QPen* QPen_new5(QPen* pen);
QPen* QPen_new6(QBrush* brush, double width, uintptr_t s);
QPen* QPen_new7(QBrush* brush, double width, uintptr_t s, uintptr_t c);
QPen* QPen_new8(QBrush* brush, double width, uintptr_t s, uintptr_t c, uintptr_t j);
void QPen_OperatorAssign(QPen* self, QPen* pen);
void QPen_Swap(QPen* self, QPen* other);
uintptr_t QPen_Style(const QPen* self);
void QPen_SetStyle(QPen* self, uintptr_t style);
void QPen_DashPattern(const QPen* self, double** _out, size_t* _out_len);
void QPen_SetDashPattern(QPen* self, double* pattern, size_t pattern_len);
double QPen_DashOffset(const QPen* self);
void QPen_SetDashOffset(QPen* self, double doffset);
double QPen_MiterLimit(const QPen* self);
void QPen_SetMiterLimit(QPen* self, double limit);
double QPen_WidthF(const QPen* self);
void QPen_SetWidthF(QPen* self, double width);
int QPen_Width(const QPen* self);
void QPen_SetWidth(QPen* self, int width);
QColor* QPen_Color(const QPen* self);
void QPen_SetColor(QPen* self, QColor* color);
QBrush* QPen_Brush(const QPen* self);
void QPen_SetBrush(QPen* self, QBrush* brush);
bool QPen_IsSolid(const QPen* self);
uintptr_t QPen_CapStyle(const QPen* self);
void QPen_SetCapStyle(QPen* self, uintptr_t pcs);
uintptr_t QPen_JoinStyle(const QPen* self);
void QPen_SetJoinStyle(QPen* self, uintptr_t pcs);
bool QPen_IsCosmetic(const QPen* self);
void QPen_SetCosmetic(QPen* self, bool cosmetic);
bool QPen_OperatorEqual(const QPen* self, QPen* p);
bool QPen_OperatorNotEqual(const QPen* self, QPen* p);
bool QPen_IsDetached(QPen* self);
void QPen_Delete(QPen* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
