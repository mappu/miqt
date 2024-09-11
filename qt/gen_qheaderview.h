#ifndef GEN_QHEADERVIEW_H
#define GEN_QHEADERVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QByteArray;
class QHeaderView;
class QMetaObject;
class QPoint;
class QSize;
class QWidget;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QByteArray QByteArray;
typedef struct QHeaderView QHeaderView;
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
#endif

QHeaderView* QHeaderView_new(uintptr_t orientation);
QHeaderView* QHeaderView_new2(uintptr_t orientation, QWidget* parent);
QMetaObject* QHeaderView_MetaObject(const QHeaderView* self);
void QHeaderView_Tr(const char* s, char** _out, int* _out_Strlen);
void QHeaderView_TrUtf8(const char* s, char** _out, int* _out_Strlen);
void QHeaderView_SetModel(QHeaderView* self, QAbstractItemModel* model);
uintptr_t QHeaderView_Orientation(const QHeaderView* self);
int QHeaderView_Offset(const QHeaderView* self);
int QHeaderView_Length(const QHeaderView* self);
QSize* QHeaderView_SizeHint(const QHeaderView* self);
void QHeaderView_SetVisible(QHeaderView* self, bool v);
int QHeaderView_SectionSizeHint(const QHeaderView* self, int logicalIndex);
int QHeaderView_VisualIndexAt(const QHeaderView* self, int position);
int QHeaderView_LogicalIndexAt(const QHeaderView* self, int position);
int QHeaderView_LogicalIndexAt2(const QHeaderView* self, int x, int y);
int QHeaderView_LogicalIndexAtWithPos(const QHeaderView* self, QPoint* pos);
int QHeaderView_SectionSize(const QHeaderView* self, int logicalIndex);
int QHeaderView_SectionPosition(const QHeaderView* self, int logicalIndex);
int QHeaderView_SectionViewportPosition(const QHeaderView* self, int logicalIndex);
void QHeaderView_MoveSection(QHeaderView* self, int from, int to);
void QHeaderView_SwapSections(QHeaderView* self, int first, int second);
void QHeaderView_ResizeSection(QHeaderView* self, int logicalIndex, int size);
void QHeaderView_ResizeSections(QHeaderView* self, uintptr_t mode);
bool QHeaderView_IsSectionHidden(const QHeaderView* self, int logicalIndex);
void QHeaderView_SetSectionHidden(QHeaderView* self, int logicalIndex, bool hide);
int QHeaderView_HiddenSectionCount(const QHeaderView* self);
void QHeaderView_HideSection(QHeaderView* self, int logicalIndex);
void QHeaderView_ShowSection(QHeaderView* self, int logicalIndex);
int QHeaderView_Count(const QHeaderView* self);
int QHeaderView_VisualIndex(const QHeaderView* self, int logicalIndex);
int QHeaderView_LogicalIndex(const QHeaderView* self, int visualIndex);
void QHeaderView_SetSectionsMovable(QHeaderView* self, bool movable);
bool QHeaderView_SectionsMovable(const QHeaderView* self);
void QHeaderView_SetFirstSectionMovable(QHeaderView* self, bool movable);
bool QHeaderView_IsFirstSectionMovable(const QHeaderView* self);
void QHeaderView_SetSectionsClickable(QHeaderView* self, bool clickable);
bool QHeaderView_SectionsClickable(const QHeaderView* self);
void QHeaderView_SetHighlightSections(QHeaderView* self, bool highlight);
bool QHeaderView_HighlightSections(const QHeaderView* self);
uintptr_t QHeaderView_SectionResizeMode(const QHeaderView* self, int logicalIndex);
void QHeaderView_SetSectionResizeMode(QHeaderView* self, uintptr_t mode);
void QHeaderView_SetSectionResizeMode2(QHeaderView* self, int logicalIndex, uintptr_t mode);
void QHeaderView_SetResizeContentsPrecision(QHeaderView* self, int precision);
int QHeaderView_ResizeContentsPrecision(const QHeaderView* self);
int QHeaderView_StretchSectionCount(const QHeaderView* self);
void QHeaderView_SetSortIndicatorShown(QHeaderView* self, bool show);
bool QHeaderView_IsSortIndicatorShown(const QHeaderView* self);
void QHeaderView_SetSortIndicator(QHeaderView* self, int logicalIndex, uintptr_t order);
int QHeaderView_SortIndicatorSection(const QHeaderView* self);
uintptr_t QHeaderView_SortIndicatorOrder(const QHeaderView* self);
bool QHeaderView_StretchLastSection(const QHeaderView* self);
void QHeaderView_SetStretchLastSection(QHeaderView* self, bool stretch);
bool QHeaderView_CascadingSectionResizes(const QHeaderView* self);
void QHeaderView_SetCascadingSectionResizes(QHeaderView* self, bool enable);
int QHeaderView_DefaultSectionSize(const QHeaderView* self);
void QHeaderView_SetDefaultSectionSize(QHeaderView* self, int size);
void QHeaderView_ResetDefaultSectionSize(QHeaderView* self);
int QHeaderView_MinimumSectionSize(const QHeaderView* self);
void QHeaderView_SetMinimumSectionSize(QHeaderView* self, int size);
int QHeaderView_MaximumSectionSize(const QHeaderView* self);
void QHeaderView_SetMaximumSectionSize(QHeaderView* self, int size);
int QHeaderView_DefaultAlignment(const QHeaderView* self);
void QHeaderView_SetDefaultAlignment(QHeaderView* self, int alignment);
void QHeaderView_DoItemsLayout(QHeaderView* self);
bool QHeaderView_SectionsMoved(const QHeaderView* self);
bool QHeaderView_SectionsHidden(const QHeaderView* self);
QByteArray* QHeaderView_SaveState(const QHeaderView* self);
bool QHeaderView_RestoreState(QHeaderView* self, QByteArray* state);
void QHeaderView_Reset(QHeaderView* self);
void QHeaderView_SetOffset(QHeaderView* self, int offset);
void QHeaderView_SetOffsetToSectionPosition(QHeaderView* self, int visualIndex);
void QHeaderView_SetOffsetToLastSection(QHeaderView* self);
void QHeaderView_HeaderDataChanged(QHeaderView* self, uintptr_t orientation, int logicalFirst, int logicalLast);
void QHeaderView_SectionMoved(QHeaderView* self, int logicalIndex, int oldVisualIndex, int newVisualIndex);
void QHeaderView_connect_SectionMoved(QHeaderView* self, void* slot);
void QHeaderView_SectionResized(QHeaderView* self, int logicalIndex, int oldSize, int newSize);
void QHeaderView_connect_SectionResized(QHeaderView* self, void* slot);
void QHeaderView_SectionPressed(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_SectionPressed(QHeaderView* self, void* slot);
void QHeaderView_SectionClicked(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_SectionClicked(QHeaderView* self, void* slot);
void QHeaderView_SectionEntered(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_SectionEntered(QHeaderView* self, void* slot);
void QHeaderView_SectionDoubleClicked(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_SectionDoubleClicked(QHeaderView* self, void* slot);
void QHeaderView_SectionCountChanged(QHeaderView* self, int oldCount, int newCount);
void QHeaderView_connect_SectionCountChanged(QHeaderView* self, void* slot);
void QHeaderView_SectionHandleDoubleClicked(QHeaderView* self, int logicalIndex);
void QHeaderView_connect_SectionHandleDoubleClicked(QHeaderView* self, void* slot);
void QHeaderView_GeometriesChanged(QHeaderView* self);
void QHeaderView_connect_GeometriesChanged(QHeaderView* self, void* slot);
void QHeaderView_SortIndicatorChanged(QHeaderView* self, int logicalIndex, uintptr_t order);
void QHeaderView_connect_SortIndicatorChanged(QHeaderView* self, void* slot);
void QHeaderView_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen);
void QHeaderView_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QHeaderView_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen);
void QHeaderView_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen);
void QHeaderView_Delete(QHeaderView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
