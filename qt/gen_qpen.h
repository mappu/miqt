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
QPen* QPen_new2(QColor* color);
QPen* QPen_new3(QPen* pen);
void QPen_OperatorAssign(QPen* self, QPen* pen);
void QPen_Swap(QPen* self, QPen* other);
void QPen_DashPattern(QPen* self, double** _out, size_t* _out_len);
void QPen_SetDashPattern(QPen* self, double* pattern, size_t pattern_len);
double QPen_DashOffset(QPen* self);
void QPen_SetDashOffset(QPen* self, double doffset);
double QPen_MiterLimit(QPen* self);
void QPen_SetMiterLimit(QPen* self, double limit);
double QPen_WidthF(QPen* self);
void QPen_SetWidthF(QPen* self, double width);
int QPen_Width(QPen* self);
void QPen_SetWidth(QPen* self, int width);
QColor* QPen_Color(QPen* self);
void QPen_SetColor(QPen* self, QColor* color);
QBrush* QPen_Brush(QPen* self);
void QPen_SetBrush(QPen* self, QBrush* brush);
bool QPen_IsSolid(QPen* self);
bool QPen_IsCosmetic(QPen* self);
void QPen_SetCosmetic(QPen* self, bool cosmetic);
bool QPen_OperatorEqual(QPen* self, QPen* p);
bool QPen_OperatorNotEqual(QPen* self, QPen* p);
bool QPen_IsDetached(QPen* self);
void QPen_Delete(QPen* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
