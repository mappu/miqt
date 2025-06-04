#pragma once
#ifndef MIQT_QT_PRINTSUPPORT_GEN_QPRINTERINFO_H
#define MIQT_QT_PRINTSUPPORT_GEN_QPRINTERINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QPageSize;
class QPrinter;
class QPrinterInfo;
class QSizeF;
#else
typedef struct QPageSize QPageSize;
typedef struct QPrinter QPrinter;
typedef struct QPrinterInfo QPrinterInfo;
typedef struct QSizeF QSizeF;
#endif

QPrinterInfo* QPrinterInfo_new();
QPrinterInfo* QPrinterInfo_new2(QPrinterInfo* other);
QPrinterInfo* QPrinterInfo_new3(QPrinter* printer);
void QPrinterInfo_operatorAssign(QPrinterInfo* self, QPrinterInfo* other);
struct miqt_string QPrinterInfo_printerName(const QPrinterInfo* self);
struct miqt_string QPrinterInfo_description(const QPrinterInfo* self);
struct miqt_string QPrinterInfo_location(const QPrinterInfo* self);
struct miqt_string QPrinterInfo_makeAndModel(const QPrinterInfo* self);
bool QPrinterInfo_isNull(const QPrinterInfo* self);
bool QPrinterInfo_isDefault(const QPrinterInfo* self);
bool QPrinterInfo_isRemote(const QPrinterInfo* self);
int QPrinterInfo_state(const QPrinterInfo* self);
struct miqt_array /* of QPageSize* */  QPrinterInfo_supportedPageSizes(const QPrinterInfo* self);
QPageSize* QPrinterInfo_defaultPageSize(const QPrinterInfo* self);
bool QPrinterInfo_supportsCustomPageSizes(const QPrinterInfo* self);
QPageSize* QPrinterInfo_minimumPhysicalPageSize(const QPrinterInfo* self);
QPageSize* QPrinterInfo_maximumPhysicalPageSize(const QPrinterInfo* self);
struct miqt_array /* of int */  QPrinterInfo_supportedPaperSizes(const QPrinterInfo* self);
struct miqt_array /* of struct miqt_map  tuple of struct miqt_string and QSizeF*   */  QPrinterInfo_supportedSizesWithNames(const QPrinterInfo* self);
struct miqt_array /* of int */  QPrinterInfo_supportedResolutions(const QPrinterInfo* self);
int QPrinterInfo_defaultDuplexMode(const QPrinterInfo* self);
struct miqt_array /* of int */  QPrinterInfo_supportedDuplexModes(const QPrinterInfo* self);
int QPrinterInfo_defaultColorMode(const QPrinterInfo* self);
struct miqt_array /* of int */  QPrinterInfo_supportedColorModes(const QPrinterInfo* self);
struct miqt_array /* of struct miqt_string */  QPrinterInfo_availablePrinterNames();
struct miqt_array /* of QPrinterInfo* */  QPrinterInfo_availablePrinters();
struct miqt_string QPrinterInfo_defaultPrinterName();
QPrinterInfo* QPrinterInfo_defaultPrinter();
QPrinterInfo* QPrinterInfo_printerInfo(struct miqt_string printerName);

void QPrinterInfo_delete(QPrinterInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
