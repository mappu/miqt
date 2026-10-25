package positioning

/*

#include "gen_qgeoaddress.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QGeoAddress struct {
	h  *C.QGeoAddress
	gc *[1]unsafe.Pointer
}

// miqtSetGC shares the GoGC() finalizer object gc with this wrapper
// and its base class wrappers, so that they all keep it alive.
func (this *QGeoAddress) miqtSetGC(gc *[1]unsafe.Pointer) {
	this.gc = gc
}

func (this *QGeoAddress) cPointer() *C.QGeoAddress {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGeoAddress) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQGeoAddress constructs the type using only CGO pointers.
func newQGeoAddress(h *C.QGeoAddress) *QGeoAddress {
	if h == nil {
		return nil
	}

	return &QGeoAddress{h: h}
}

// UnsafeNewQGeoAddress constructs the type using only unsafe pointers.
func UnsafeNewQGeoAddress(h unsafe.Pointer) *QGeoAddress {
	return newQGeoAddress((*C.QGeoAddress)(h))
}

// NewQGeoAddress constructs a new QGeoAddress object.
func NewQGeoAddress() *QGeoAddress {

	return newQGeoAddress(C.QGeoAddress_new())
}

// NewQGeoAddress2 constructs a new QGeoAddress object.
func NewQGeoAddress2(other *QGeoAddress) *QGeoAddress {
	defer runtime.KeepAlive(other)

	return newQGeoAddress(C.QGeoAddress_new2(other.cPointer()))
}

func (this *QGeoAddress) OperatorAssign(other *QGeoAddress) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoAddress_operatorAssign(this.h, other.cPointer())
}

func (this *QGeoAddress) Swap(other *QGeoAddress) {
	defer runtime.KeepAlive(this)
	defer runtime.KeepAlive(other)
	C.QGeoAddress_swap(this.h, other.cPointer())
}

func (this *QGeoAddress) Text() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoAddress_text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAddress) SetText(text string) {
	defer runtime.KeepAlive(this)
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QGeoAddress_setText(this.h, text_ms)
}

func (this *QGeoAddress) Country() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoAddress_country(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAddress) SetCountry(country string) {
	defer runtime.KeepAlive(this)
	country_ms := C.struct_miqt_string{}
	country_ms.data = C.CString(country)
	country_ms.len = C.size_t(len(country))
	defer C.free(unsafe.Pointer(country_ms.data))
	C.QGeoAddress_setCountry(this.h, country_ms)
}

func (this *QGeoAddress) CountryCode() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoAddress_countryCode(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAddress) SetCountryCode(countryCode string) {
	defer runtime.KeepAlive(this)
	countryCode_ms := C.struct_miqt_string{}
	countryCode_ms.data = C.CString(countryCode)
	countryCode_ms.len = C.size_t(len(countryCode))
	defer C.free(unsafe.Pointer(countryCode_ms.data))
	C.QGeoAddress_setCountryCode(this.h, countryCode_ms)
}

func (this *QGeoAddress) State() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoAddress_state(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAddress) SetState(state string) {
	defer runtime.KeepAlive(this)
	state_ms := C.struct_miqt_string{}
	state_ms.data = C.CString(state)
	state_ms.len = C.size_t(len(state))
	defer C.free(unsafe.Pointer(state_ms.data))
	C.QGeoAddress_setState(this.h, state_ms)
}

func (this *QGeoAddress) County() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoAddress_county(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAddress) SetCounty(county string) {
	defer runtime.KeepAlive(this)
	county_ms := C.struct_miqt_string{}
	county_ms.data = C.CString(county)
	county_ms.len = C.size_t(len(county))
	defer C.free(unsafe.Pointer(county_ms.data))
	C.QGeoAddress_setCounty(this.h, county_ms)
}

func (this *QGeoAddress) City() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoAddress_city(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAddress) SetCity(city string) {
	defer runtime.KeepAlive(this)
	city_ms := C.struct_miqt_string{}
	city_ms.data = C.CString(city)
	city_ms.len = C.size_t(len(city))
	defer C.free(unsafe.Pointer(city_ms.data))
	C.QGeoAddress_setCity(this.h, city_ms)
}

func (this *QGeoAddress) District() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoAddress_district(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAddress) SetDistrict(district string) {
	defer runtime.KeepAlive(this)
	district_ms := C.struct_miqt_string{}
	district_ms.data = C.CString(district)
	district_ms.len = C.size_t(len(district))
	defer C.free(unsafe.Pointer(district_ms.data))
	C.QGeoAddress_setDistrict(this.h, district_ms)
}

func (this *QGeoAddress) PostalCode() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoAddress_postalCode(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAddress) SetPostalCode(postalCode string) {
	defer runtime.KeepAlive(this)
	postalCode_ms := C.struct_miqt_string{}
	postalCode_ms.data = C.CString(postalCode)
	postalCode_ms.len = C.size_t(len(postalCode))
	defer C.free(unsafe.Pointer(postalCode_ms.data))
	C.QGeoAddress_setPostalCode(this.h, postalCode_ms)
}

func (this *QGeoAddress) Street() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoAddress_street(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAddress) SetStreet(street string) {
	defer runtime.KeepAlive(this)
	street_ms := C.struct_miqt_string{}
	street_ms.data = C.CString(street)
	street_ms.len = C.size_t(len(street))
	defer C.free(unsafe.Pointer(street_ms.data))
	C.QGeoAddress_setStreet(this.h, street_ms)
}

func (this *QGeoAddress) StreetNumber() string {
	defer runtime.KeepAlive(this)
	var _ms C.struct_miqt_string = C.QGeoAddress_streetNumber(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGeoAddress) SetStreetNumber(streetNumber string) {
	defer runtime.KeepAlive(this)
	streetNumber_ms := C.struct_miqt_string{}
	streetNumber_ms.data = C.CString(streetNumber)
	streetNumber_ms.len = C.size_t(len(streetNumber))
	defer C.free(unsafe.Pointer(streetNumber_ms.data))
	C.QGeoAddress_setStreetNumber(this.h, streetNumber_ms)
}

func (this *QGeoAddress) IsEmpty() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGeoAddress_isEmpty(this.h))
}

func (this *QGeoAddress) Clear() {
	defer runtime.KeepAlive(this)
	C.QGeoAddress_clear(this.h)
}

func (this *QGeoAddress) IsTextGenerated() bool {
	defer runtime.KeepAlive(this)
	return (bool)(C.QGeoAddress_isTextGenerated(this.h))
}

// Delete this object from C++ memory.
func (this *QGeoAddress) Delete() {
	C.QGeoAddress_delete(this.h)
}

// GoGC adds a Go Finalizer to this object, so that it will be deleted
// from C++ memory once it (and every value copy of it) is unreachable
// from Go memory.
func (this *QGeoAddress) GoGC() {
	if this.gc != nil {
		return
	}
	gc := &[1]unsafe.Pointer{unsafe.Pointer(this.h)}
	runtime.SetFinalizer(gc, func(gc *[1]unsafe.Pointer) {
		C.QGeoAddress_delete((*C.QGeoAddress)(gc[0]))
	})
	this.miqtSetGC(gc)
}
