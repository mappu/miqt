#ifndef GEN_QPRINTERINFO_H
#define GEN_QPRINTERINFO_H

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
#else
typedef struct QPageSize QPageSize;
typedef struct QPrinter QPrinter;
typedef struct QPrinterInfo QPrinterInfo;
#endif

QPrinterInfo* QPrinterInfo_new();
QPrinterInfo* QPrinterInfo_new2(QPrinterInfo* other);
QPrinterInfo* QPrinterInfo_new3(QPrinter* printer);
void QPrinterInfo_OperatorAssign(QPrinterInfo* self, QPrinterInfo* other);
struct miqt_string QPrinterInfo_PrinterName(const QPrinterInfo* self);
struct miqt_string QPrinterInfo_Description(const QPrinterInfo* self);
struct miqt_string QPrinterInfo_Location(const QPrinterInfo* self);
struct miqt_string QPrinterInfo_MakeAndModel(const QPrinterInfo* self);
bool QPrinterInfo_IsNull(const QPrinterInfo* self);
bool QPrinterInfo_IsDefault(const QPrinterInfo* self);
bool QPrinterInfo_IsRemote(const QPrinterInfo* self);
int QPrinterInfo_State(const QPrinterInfo* self);
struct miqt_array* QPrinterInfo_SupportedPageSizes(const QPrinterInfo* self);
QPageSize* QPrinterInfo_DefaultPageSize(const QPrinterInfo* self);
bool QPrinterInfo_SupportsCustomPageSizes(const QPrinterInfo* self);
QPageSize* QPrinterInfo_MinimumPhysicalPageSize(const QPrinterInfo* self);
QPageSize* QPrinterInfo_MaximumPhysicalPageSize(const QPrinterInfo* self);
struct miqt_array* QPrinterInfo_SupportedPaperSizes(const QPrinterInfo* self);
struct miqt_array* QPrinterInfo_SupportedResolutions(const QPrinterInfo* self);
int QPrinterInfo_DefaultDuplexMode(const QPrinterInfo* self);
struct miqt_array* QPrinterInfo_SupportedDuplexModes(const QPrinterInfo* self);
int QPrinterInfo_DefaultColorMode(const QPrinterInfo* self);
struct miqt_array* QPrinterInfo_SupportedColorModes(const QPrinterInfo* self);
struct miqt_array* QPrinterInfo_AvailablePrinterNames();
struct miqt_array* QPrinterInfo_AvailablePrinters();
struct miqt_string QPrinterInfo_DefaultPrinterName();
QPrinterInfo* QPrinterInfo_DefaultPrinter();
QPrinterInfo* QPrinterInfo_PrinterInfo(struct miqt_string printerName);
void QPrinterInfo_Delete(QPrinterInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
