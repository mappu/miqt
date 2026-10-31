#include <QMetaObject>
#include <qpdfnamespace.h>
#include "gen_qpdfnamespace.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
} /* extern C */
#endif

QMetaObject* miqt_QPdf_QtGetEnumMetaObjectWithQPdfRotation(int param1) {

	return (QMetaObject*) QPdf::qt_getEnumMetaObject(static_cast<QPdf::Rotation>(param1));
}

const char* miqt_QPdf_QtGetEnumNameWithQPdfRotation(int param1) {

	return (const char*) QPdf::qt_getEnumName(static_cast<QPdf::Rotation>(param1));
}

QMetaObject* miqt_QPdf_QtGetEnumMetaObjectWithQPdfRenderFlag(int param1) {

	return (QMetaObject*) QPdf::qt_getEnumMetaObject(static_cast<QPdf::RenderFlag>(param1));
}

const char* miqt_QPdf_QtGetEnumNameWithQPdfRenderFlag(int param1) {

	return (const char*) QPdf::qt_getEnumName(static_cast<QPdf::RenderFlag>(param1));
}

