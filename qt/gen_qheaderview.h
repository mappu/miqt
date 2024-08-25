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
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QByteArray QByteArray;
typedef struct QHeaderView QHeaderView;
typedef struct QMetaObject QMetaObject;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
#endif

QMetaObject* QHeaderView_MetaObject(QHeaderView* self);
void QHeaderView_Tr(char* s, char** _out, int* _out_Strlen);
void QHeaderView_TrUtf8(char* s, char** _out, int* _out_Strlen);
void QHeaderView_SetModel(QHeaderView* self, QAbstractItemModel* model);
int QHeaderView_Offset(QHeaderView* self);
int QHeaderView_Length(QHeaderView* self);
QSize* QHeaderView_SizeHint(QHeaderView* self);
void QHeaderView_SetVisible(QHeaderView* self, bool v);
int QHeaderView_SectionSizeHint(QHeaderView* self, int logicalIndex);
int QHeaderView_VisualIndexAt(QHeaderView* self, int position);
int QHeaderView_LogicalIndexAt(QHeaderView* self, int position);
int QHeaderView_LogicalIndexAt2(QHeaderView* self, int x, int y);
int QHeaderView_LogicalIndexAtWithPos(QHeaderView* self, QPoint* pos);
int QHeaderView_SectionSize(QHeaderView* self, int logicalIndex);
int QHeaderView_SectionPosition(QHeaderView* self, int logicalIndex);
int QHeaderView_SectionViewportPosition(QHeaderView* self, int logicalIndex);
void QHeaderView_MoveSection(QHeaderView* self, int from, int to);
void QHeaderView_SwapSections(QHeaderView* self, int first, int second);
void QHeaderView_ResizeSection(QHeaderView* self, int logicalIndex, int size);
bool QHeaderView_IsSectionHidden(QHeaderView* self, int logicalIndex);
void QHeaderView_SetSectionHidden(QHeaderView* self, int logicalIndex, bool hide);
int QHeaderView_HiddenSectionCount(QHeaderView* self);
void QHeaderView_HideSection(QHeaderView* self, int logicalIndex);
void QHeaderView_ShowSection(QHeaderView* self, int logicalIndex);
int QHeaderView_Count(QHeaderView* self);
int QHeaderView_VisualIndex(QHeaderView* self, int logicalIndex);
int QHeaderView_LogicalIndex(QHeaderView* self, int visualIndex);
void QHeaderView_SetSectionsMovable(QHeaderView* self, bool movable);
bool QHeaderView_SectionsMovable(QHeaderView* self);
void QHeaderView_SetFirstSectionMovable(QHeaderView* self, bool movable);
bool QHeaderView_IsFirstSectionMovable(QHeaderView* self);
void QHeaderView_SetSectionsClickable(QHeaderView* self, bool clickable);
bool QHeaderView_SectionsClickable(QHeaderView* self);
void QHeaderView_SetHighlightSections(QHeaderView* self, bool highlight);
bool QHeaderView_HighlightSections(QHeaderView* self);
void QHeaderView_SetResizeContentsPrecision(QHeaderView* self, int precision);
int QHeaderView_ResizeContentsPrecision(QHeaderView* self);
int QHeaderView_StretchSectionCount(QHeaderView* self);
void QHeaderView_SetSortIndicatorShown(QHeaderView* self, bool show);
bool QHeaderView_IsSortIndicatorShown(QHeaderView* self);
int QHeaderView_SortIndicatorSection(QHeaderView* self);
bool QHeaderView_StretchLastSection(QHeaderView* self);
void QHeaderView_SetStretchLastSection(QHeaderView* self, bool stretch);
bool QHeaderView_CascadingSectionResizes(QHeaderView* self);
void QHeaderView_SetCascadingSectionResizes(QHeaderView* self, bool enable);
int QHeaderView_DefaultSectionSize(QHeaderView* self);
void QHeaderView_SetDefaultSectionSize(QHeaderView* self, int size);
void QHeaderView_ResetDefaultSectionSize(QHeaderView* self);
int QHeaderView_MinimumSectionSize(QHeaderView* self);
void QHeaderView_SetMinimumSectionSize(QHeaderView* self, int size);
int QHeaderView_MaximumSectionSize(QHeaderView* self);
void QHeaderView_SetMaximumSectionSize(QHeaderView* self, int size);
void QHeaderView_DoItemsLayout(QHeaderView* self);
bool QHeaderView_SectionsMoved(QHeaderView* self);
bool QHeaderView_SectionsHidden(QHeaderView* self);
QByteArray* QHeaderView_SaveState(QHeaderView* self);
bool QHeaderView_RestoreState(QHeaderView* self, QByteArray* state);
void QHeaderView_Reset(QHeaderView* self);
void QHeaderView_SetOffset(QHeaderView* self, int offset);
void QHeaderView_SetOffsetToSectionPosition(QHeaderView* self, int visualIndex);
void QHeaderView_SetOffsetToLastSection(QHeaderView* self);
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
void QHeaderView_Tr2(char* s, char* c, char** _out, int* _out_Strlen);
void QHeaderView_Tr3(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QHeaderView_TrUtf82(char* s, char* c, char** _out, int* _out_Strlen);
void QHeaderView_TrUtf83(char* s, char* c, int n, char** _out, int* _out_Strlen);
void QHeaderView_Delete(QHeaderView* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
