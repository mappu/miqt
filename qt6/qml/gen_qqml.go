package qml

/*

#include "gen_qqml.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"unsafe"
)

type QQmlModuleImportSpecialVersions int

const (
	QQmlModuleImportSpecialVersions__QQmlModuleImportModuleAny QQmlModuleImportSpecialVersions = -1
	QQmlModuleImportSpecialVersions__QQmlModuleImportLatest    QQmlModuleImportSpecialVersions = -1
	QQmlModuleImportSpecialVersions__QQmlModuleImportAuto      QQmlModuleImportSpecialVersions = -2
)

func QmlClearTypeRegistrations2() {
	C.miqt_QmlClearTypeRegistrations2()
}

func QmlRegisterTypeNotAvailable2(uri string, versionMajor int, versionMinor int, qmlName string, message string) int {
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	qmlName_Cstring := C.CString(qmlName)
	defer C.free(unsafe.Pointer(qmlName_Cstring))
	message_ms := C.struct_miqt_string{}
	message_ms.data = C.CString(message)
	message_ms.len = C.size_t(len(message))
	defer C.free(unsafe.Pointer(message_ms.data))
	return (int)(C.miqt_QmlRegisterTypeNotAvailable2(uri_Cstring, (C.int)(versionMajor), (C.int)(versionMinor), qmlName_Cstring, message_ms))
}

func QmlRegisterUncreatableMetaObject2(staticMetaObject *qt6.QMetaObject, uri string, versionMajor int, versionMinor int, qmlName string, reason string) int {
	defer runtime.KeepAlive(staticMetaObject)
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	qmlName_Cstring := C.CString(qmlName)
	defer C.free(unsafe.Pointer(qmlName_Cstring))
	reason_ms := C.struct_miqt_string{}
	reason_ms.data = C.CString(reason)
	reason_ms.len = C.size_t(len(reason))
	defer C.free(unsafe.Pointer(reason_ms.data))
	return (int)(C.miqt_QmlRegisterUncreatableMetaObject2((*C.QMetaObject)(staticMetaObject.UnsafePointer()), uri_Cstring, (C.int)(versionMajor), (C.int)(versionMinor), qmlName_Cstring, reason_ms))
}

func QmlExecuteDeferredWithQObject(param1 *qt6.QObject) {
	defer runtime.KeepAlive(param1)
	C.miqt_QmlExecuteDeferredWithQObject((*C.QObject)(param1.UnsafePointer()))
}

func QmlContextWithQObject(param1 *qt6.QObject) *QQmlContext {
	defer runtime.KeepAlive(param1)
	return newQQmlContext(C.miqt_QmlContextWithQObject((*C.QObject)(param1.UnsafePointer())))
}

func QmlEngineWithQObject(param1 *qt6.QObject) *QQmlEngine {
	defer runtime.KeepAlive(param1)
	return newQQmlEngine(C.miqt_QmlEngineWithQObject((*C.QObject)(param1.UnsafePointer())))
}

func QmlExtendedObjectWithQObject(param1 *qt6.QObject) *qt6.QObject {
	defer runtime.KeepAlive(param1)
	return qt6.UnsafeNewQObject(unsafe.Pointer(C.miqt_QmlExtendedObjectWithQObject((*C.QObject)(param1.UnsafePointer()))))
}

func QmlProtectModule2(uri string, majVersion int) bool {
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	return (bool)(C.miqt_QmlProtectModule2(uri_Cstring, (C.int)(majVersion)))
}

func QmlRegisterModule2(uri string, versionMajor int, versionMinor int) {
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	C.miqt_QmlRegisterModule2(uri_Cstring, (C.int)(versionMajor), (C.int)(versionMinor))
}

func QmlRegisterModuleImport2(uri string, moduleMajor int, importVal string, importMajor int, importMinor int) {
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	importVal_Cstring := C.CString(importVal)
	defer C.free(unsafe.Pointer(importVal_Cstring))
	C.miqt_QmlRegisterModuleImport2(uri_Cstring, (C.int)(moduleMajor), importVal_Cstring, (C.int)(importMajor), (C.int)(importMinor))
}

func QmlUnregisterModuleImport2(uri string, moduleMajor int, importVal string, importMajor int, importMinor int) {
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	importVal_Cstring := C.CString(importVal)
	defer C.free(unsafe.Pointer(importVal_Cstring))
	C.miqt_QmlUnregisterModuleImport2(uri_Cstring, (C.int)(moduleMajor), importVal_Cstring, (C.int)(importMajor), (C.int)(importMinor))
}

func QmlRegisterSingletonType3(url *qt6.QUrl, uri string, versionMajor int, versionMinor int, qmlName string) int {
	defer runtime.KeepAlive(url)
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	qmlName_Cstring := C.CString(qmlName)
	defer C.free(unsafe.Pointer(qmlName_Cstring))
	return (int)(C.miqt_QmlRegisterSingletonType3((*C.QUrl)(url.UnsafePointer()), uri_Cstring, (C.int)(versionMajor), (C.int)(versionMinor), qmlName_Cstring))
}

func QmlRegisterType2(url *qt6.QUrl, uri string, versionMajor int, versionMinor int, qmlName string) int {
	defer runtime.KeepAlive(url)
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	qmlName_Cstring := C.CString(qmlName)
	defer C.free(unsafe.Pointer(qmlName_Cstring))
	return (int)(C.miqt_QmlRegisterType2((*C.QUrl)(url.UnsafePointer()), uri_Cstring, (C.int)(versionMajor), (C.int)(versionMinor), qmlName_Cstring))
}

func QmlRegisterNamespaceAndRevisions2(metaObject *qt6.QMetaObject, uri string, versionMajor int, qmlTypeIds []int, classInfoMetaObject *qt6.QMetaObject, extensionMetaObject *qt6.QMetaObject) {
	defer runtime.KeepAlive(metaObject)
	defer runtime.KeepAlive(classInfoMetaObject)
	defer runtime.KeepAlive(extensionMetaObject)
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	qmlTypeIds_CArray_ptr := (*C.int)(C.malloc(C.size_t(8 * len(qmlTypeIds))))
	defer C.free(unsafe.Pointer(qmlTypeIds_CArray_ptr))
	qmlTypeIds_CArray := unsafe.Slice(qmlTypeIds_CArray_ptr, len(qmlTypeIds))
	for i := range qmlTypeIds {
		qmlTypeIds_CArray[i] = (C.int)(qmlTypeIds[i])
	}
	qmlTypeIds_ma := C.struct_miqt_array{len: C.size_t(len(qmlTypeIds)), data: unsafe.Pointer(qmlTypeIds_CArray_ptr)}
	C.miqt_QmlRegisterNamespaceAndRevisions2((*C.QMetaObject)(metaObject.UnsafePointer()), uri_Cstring, (C.int)(versionMajor), qmlTypeIds_ma, (*C.QMetaObject)(classInfoMetaObject.UnsafePointer()), (*C.QMetaObject)(extensionMetaObject.UnsafePointer()))
}

func QmlRegisterNamespaceAndRevisions3(metaObject *qt6.QMetaObject, uri string, versionMajor int, qmlTypeIds []int, classInfoMetaObject *qt6.QMetaObject) {
	defer runtime.KeepAlive(metaObject)
	defer runtime.KeepAlive(classInfoMetaObject)
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	qmlTypeIds_CArray_ptr := (*C.int)(C.malloc(C.size_t(8 * len(qmlTypeIds))))
	defer C.free(unsafe.Pointer(qmlTypeIds_CArray_ptr))
	qmlTypeIds_CArray := unsafe.Slice(qmlTypeIds_CArray_ptr, len(qmlTypeIds))
	for i := range qmlTypeIds {
		qmlTypeIds_CArray[i] = (C.int)(qmlTypeIds[i])
	}
	qmlTypeIds_ma := C.struct_miqt_array{len: C.size_t(len(qmlTypeIds)), data: unsafe.Pointer(qmlTypeIds_CArray_ptr)}
	C.miqt_QmlRegisterNamespaceAndRevisions3((*C.QMetaObject)(metaObject.UnsafePointer()), uri_Cstring, (C.int)(versionMajor), qmlTypeIds_ma, (*C.QMetaObject)(classInfoMetaObject.UnsafePointer()))
}

func QmlTypeId2(uri string, versionMajor int, versionMinor int, qmlName string) int {
	uri_Cstring := C.CString(uri)
	defer C.free(unsafe.Pointer(uri_Cstring))
	qmlName_Cstring := C.CString(qmlName)
	defer C.free(unsafe.Pointer(qmlName_Cstring))
	return (int)(C.miqt_QmlTypeId2(uri_Cstring, (C.int)(versionMajor), (C.int)(versionMinor), qmlName_Cstring))
}
