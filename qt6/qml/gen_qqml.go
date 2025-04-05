package qml

/*

#include "gen_qqml.h"
#include <stdlib.h>

*/
import "C"

type QQmlModuleImportSpecialVersions int

const (
	QQmlModuleImportSpecialVersions__QQmlModuleImportModuleAny QQmlModuleImportSpecialVersions = -1
	QQmlModuleImportSpecialVersions__QQmlModuleImportLatest    QQmlModuleImportSpecialVersions = -1
	QQmlModuleImportSpecialVersions__QQmlModuleImportAuto      QQmlModuleImportSpecialVersions = -2
)
