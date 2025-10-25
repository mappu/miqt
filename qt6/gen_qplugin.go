package qt6

/*

#include "gen_qplugin.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPluginMetaData struct {
	h *C.QPluginMetaData
}

func (this *QPluginMetaData) cPointer() *C.QPluginMetaData {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPluginMetaData) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPluginMetaData constructs the type using only CGO pointers.
func newQPluginMetaData(h *C.QPluginMetaData) *QPluginMetaData {
	if h == nil {
		return nil
	}

	return &QPluginMetaData{h: h}
}

// UnsafeNewQPluginMetaData constructs the type using only unsafe pointers.
func UnsafeNewQPluginMetaData(h unsafe.Pointer) *QPluginMetaData {
	return newQPluginMetaData((*C.QPluginMetaData)(h))
}

func QPluginMetaData_ArchRequirements() byte {
	return (byte)(C.QPluginMetaData_archRequirements())
}

func (this *QPluginMetaData) Size() uint64 {
	return (uint64)(C.QPluginMetaData_size(this.h))
}

func (this *QPluginMetaData) SetSize(size uint64) {
	C.QPluginMetaData_setSize(this.h, (C.size_t)(size))
}

// Delete this object from C++ memory.
func (this *QPluginMetaData) Delete() {
	C.QPluginMetaData_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPluginMetaData) GoGC() {
	runtime.SetFinalizer(this, func(this *QPluginMetaData) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QStaticPlugin struct {
	h *C.QStaticPlugin
}

func (this *QStaticPlugin) cPointer() *C.QStaticPlugin {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QStaticPlugin) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQStaticPlugin constructs the type using only CGO pointers.
func newQStaticPlugin(h *C.QStaticPlugin) *QStaticPlugin {
	if h == nil {
		return nil
	}

	return &QStaticPlugin{h: h}
}

// UnsafeNewQStaticPlugin constructs the type using only unsafe pointers.
func UnsafeNewQStaticPlugin(h unsafe.Pointer) *QStaticPlugin {
	return newQStaticPlugin((*C.QStaticPlugin)(h))
}

func (this *QStaticPlugin) MetaData() *QJsonObject {
	_goptr := newQJsonObject(C.QStaticPlugin_metaData(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QStaticPlugin) Delete() {
	C.QStaticPlugin_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QStaticPlugin) GoGC() {
	runtime.SetFinalizer(this, func(this *QStaticPlugin) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPluginMetaData__Header struct {
	h *C.QPluginMetaData__Header
}

func (this *QPluginMetaData__Header) cPointer() *C.QPluginMetaData__Header {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPluginMetaData__Header) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPluginMetaData__Header constructs the type using only CGO pointers.
func newQPluginMetaData__Header(h *C.QPluginMetaData__Header) *QPluginMetaData__Header {
	if h == nil {
		return nil
	}

	return &QPluginMetaData__Header{h: h}
}

// UnsafeNewQPluginMetaData__Header constructs the type using only unsafe pointers.
func UnsafeNewQPluginMetaData__Header(h unsafe.Pointer) *QPluginMetaData__Header {
	return newQPluginMetaData__Header((*C.QPluginMetaData__Header)(h))
}

// NewQPluginMetaData__Header constructs a new QPluginMetaData::Header object.
func NewQPluginMetaData__Header(param1 *QPluginMetaData__Header) *QPluginMetaData__Header {

	return newQPluginMetaData__Header(C.QPluginMetaData__Header_new(param1.cPointer()))
}

func (this *QPluginMetaData__Header) Version() byte {
	return (byte)(C.QPluginMetaData__Header_version(this.h))
}

func (this *QPluginMetaData__Header) SetVersion(version byte) {
	C.QPluginMetaData__Header_setVersion(this.h, (C.uchar)(version))
}

func (this *QPluginMetaData__Header) MajorVersion() byte {
	return (byte)(C.QPluginMetaData__Header_majorVersion(this.h))
}

func (this *QPluginMetaData__Header) SetQtMajorVersion(qt_major_version byte) {
	C.QPluginMetaData__Header_setQtMajorVersion(this.h, (C.uchar)(qt_major_version))
}

func (this *QPluginMetaData__Header) MinorVersion() byte {
	return (byte)(C.QPluginMetaData__Header_minorVersion(this.h))
}

func (this *QPluginMetaData__Header) SetQtMinorVersion(qt_minor_version byte) {
	C.QPluginMetaData__Header_setQtMinorVersion(this.h, (C.uchar)(qt_minor_version))
}

func (this *QPluginMetaData__Header) PluginArchRequirements() byte {
	return (byte)(C.QPluginMetaData__Header_pluginArchRequirements(this.h))
}

func (this *QPluginMetaData__Header) SetPluginArchRequirements(plugin_arch_requirements byte) {
	C.QPluginMetaData__Header_setPluginArchRequirements(this.h, (C.uchar)(plugin_arch_requirements))
}

// Delete this object from C++ memory.
func (this *QPluginMetaData__Header) Delete() {
	C.QPluginMetaData__Header_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPluginMetaData__Header) GoGC() {
	runtime.SetFinalizer(this, func(this *QPluginMetaData__Header) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPluginMetaData__MagicHeader struct {
	h *C.QPluginMetaData__MagicHeader
}

func (this *QPluginMetaData__MagicHeader) cPointer() *C.QPluginMetaData__MagicHeader {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPluginMetaData__MagicHeader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPluginMetaData__MagicHeader constructs the type using only CGO pointers.
func newQPluginMetaData__MagicHeader(h *C.QPluginMetaData__MagicHeader) *QPluginMetaData__MagicHeader {
	if h == nil {
		return nil
	}

	return &QPluginMetaData__MagicHeader{h: h}
}

// UnsafeNewQPluginMetaData__MagicHeader constructs the type using only unsafe pointers.
func UnsafeNewQPluginMetaData__MagicHeader(h unsafe.Pointer) *QPluginMetaData__MagicHeader {
	return newQPluginMetaData__MagicHeader((*C.QPluginMetaData__MagicHeader)(h))
}

// NewQPluginMetaData__MagicHeader constructs a new QPluginMetaData::MagicHeader object.
func NewQPluginMetaData__MagicHeader() *QPluginMetaData__MagicHeader {

	return newQPluginMetaData__MagicHeader(C.QPluginMetaData__MagicHeader_new())
}

func (this *QPluginMetaData__MagicHeader) Header() *QPluginMetaData__Header {
	header_goptr := newQPluginMetaData__Header(C.QPluginMetaData__MagicHeader_header(this.h))
	header_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return header_goptr
}

func (this *QPluginMetaData__MagicHeader) SetHeader(header QPluginMetaData__Header) {
	C.QPluginMetaData__MagicHeader_setHeader(this.h, header.cPointer())
}

// Delete this object from C++ memory.
func (this *QPluginMetaData__MagicHeader) Delete() {
	C.QPluginMetaData__MagicHeader_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPluginMetaData__MagicHeader) GoGC() {
	runtime.SetFinalizer(this, func(this *QPluginMetaData__MagicHeader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QPluginMetaData__ElfNoteHeader struct {
	h *C.QPluginMetaData__ElfNoteHeader
}

func (this *QPluginMetaData__ElfNoteHeader) cPointer() *C.QPluginMetaData__ElfNoteHeader {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QPluginMetaData__ElfNoteHeader) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQPluginMetaData__ElfNoteHeader constructs the type using only CGO pointers.
func newQPluginMetaData__ElfNoteHeader(h *C.QPluginMetaData__ElfNoteHeader) *QPluginMetaData__ElfNoteHeader {
	if h == nil {
		return nil
	}

	return &QPluginMetaData__ElfNoteHeader{h: h}
}

// UnsafeNewQPluginMetaData__ElfNoteHeader constructs the type using only unsafe pointers.
func UnsafeNewQPluginMetaData__ElfNoteHeader(h unsafe.Pointer) *QPluginMetaData__ElfNoteHeader {
	return newQPluginMetaData__ElfNoteHeader((*C.QPluginMetaData__ElfNoteHeader)(h))
}

// NewQPluginMetaData__ElfNoteHeader constructs a new QPluginMetaData::ElfNoteHeader object.
func NewQPluginMetaData__ElfNoteHeader(payloadSize uint) *QPluginMetaData__ElfNoteHeader {

	return newQPluginMetaData__ElfNoteHeader(C.QPluginMetaData__ElfNoteHeader_new((C.uint)(payloadSize)))
}

// NewQPluginMetaData__ElfNoteHeader2 constructs a new QPluginMetaData::ElfNoteHeader object.
func NewQPluginMetaData__ElfNoteHeader2(param1 *QPluginMetaData__ElfNoteHeader) *QPluginMetaData__ElfNoteHeader {

	return newQPluginMetaData__ElfNoteHeader(C.QPluginMetaData__ElfNoteHeader_new2(param1.cPointer()))
}

func (this *QPluginMetaData__ElfNoteHeader) NNamesz() uint {
	return (uint)(C.QPluginMetaData__ElfNoteHeader_nNamesz(this.h))
}

func (this *QPluginMetaData__ElfNoteHeader) SetNNamesz(n_namesz uint) {
	C.QPluginMetaData__ElfNoteHeader_setNNamesz(this.h, (C.uint)(n_namesz))
}

func (this *QPluginMetaData__ElfNoteHeader) NDescsz() uint {
	return (uint)(C.QPluginMetaData__ElfNoteHeader_nDescsz(this.h))
}

func (this *QPluginMetaData__ElfNoteHeader) SetNDescsz(n_descsz uint) {
	C.QPluginMetaData__ElfNoteHeader_setNDescsz(this.h, (C.uint)(n_descsz))
}

func (this *QPluginMetaData__ElfNoteHeader) NType() uint {
	return (uint)(C.QPluginMetaData__ElfNoteHeader_nType(this.h))
}

func (this *QPluginMetaData__ElfNoteHeader) SetNType(n_type uint) {
	C.QPluginMetaData__ElfNoteHeader_setNType(this.h, (C.uint)(n_type))
}

func (this *QPluginMetaData__ElfNoteHeader) Header() *QPluginMetaData__Header {
	header_goptr := newQPluginMetaData__Header(C.QPluginMetaData__ElfNoteHeader_header(this.h))
	header_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return header_goptr
}

func (this *QPluginMetaData__ElfNoteHeader) SetHeader(header QPluginMetaData__Header) {
	C.QPluginMetaData__ElfNoteHeader_setHeader(this.h, header.cPointer())
}

// Delete this object from C++ memory.
func (this *QPluginMetaData__ElfNoteHeader) Delete() {
	C.QPluginMetaData__ElfNoteHeader_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QPluginMetaData__ElfNoteHeader) GoGC() {
	runtime.SetFinalizer(this, func(this *QPluginMetaData__ElfNoteHeader) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
