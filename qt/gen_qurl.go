package qt

/*

#include "gen_qurl.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QUrl__ParsingMode int

const (
	QUrl__TolerantMode QUrl__ParsingMode = 0
	QUrl__StrictMode   QUrl__ParsingMode = 1
	QUrl__DecodedMode  QUrl__ParsingMode = 2
)

type QUrl__UrlFormattingOption int

const (
	QUrl__None                  QUrl__UrlFormattingOption = 0
	QUrl__RemoveScheme          QUrl__UrlFormattingOption = 1
	QUrl__RemovePassword        QUrl__UrlFormattingOption = 2
	QUrl__RemoveUserInfo        QUrl__UrlFormattingOption = 6
	QUrl__RemovePort            QUrl__UrlFormattingOption = 8
	QUrl__RemoveAuthority       QUrl__UrlFormattingOption = 30
	QUrl__RemovePath            QUrl__UrlFormattingOption = 32
	QUrl__RemoveQuery           QUrl__UrlFormattingOption = 64
	QUrl__RemoveFragment        QUrl__UrlFormattingOption = 128
	QUrl__PreferLocalFile       QUrl__UrlFormattingOption = 512
	QUrl__StripTrailingSlash    QUrl__UrlFormattingOption = 1024
	QUrl__RemoveFilename        QUrl__UrlFormattingOption = 2048
	QUrl__NormalizePathSegments QUrl__UrlFormattingOption = 4096
)

type QUrl__ComponentFormattingOption int

const (
	QUrl__PrettyDecoded    QUrl__ComponentFormattingOption = 0
	QUrl__EncodeSpaces     QUrl__ComponentFormattingOption = 1048576
	QUrl__EncodeUnicode    QUrl__ComponentFormattingOption = 2097152
	QUrl__EncodeDelimiters QUrl__ComponentFormattingOption = 12582912
	QUrl__EncodeReserved   QUrl__ComponentFormattingOption = 16777216
	QUrl__DecodeReserved   QUrl__ComponentFormattingOption = 33554432
	QUrl__FullyEncoded     QUrl__ComponentFormattingOption = 32505856
	QUrl__FullyDecoded     QUrl__ComponentFormattingOption = 133169152
)

type QUrl__UserInputResolutionOption int

const (
	QUrl__DefaultResolution QUrl__UserInputResolutionOption = 0
	QUrl__AssumeLocalFile   QUrl__UserInputResolutionOption = 1
)

type QUrl struct {
	h          *C.QUrl
	isSubclass bool
}

func (this *QUrl) cPointer() *C.QUrl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QUrl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQUrl constructs the type using only CGO pointers.
func newQUrl(h *C.QUrl) *QUrl {
	if h == nil {
		return nil
	}
	return &QUrl{h: h}
}

// UnsafeNewQUrl constructs the type using only unsafe pointers.
func UnsafeNewQUrl(h unsafe.Pointer) *QUrl {
	if h == nil {
		return nil
	}

	return &QUrl{h: (*C.QUrl)(h)}
}

// NewQUrl constructs a new QUrl object.
func NewQUrl() *QUrl {
	var outptr_QUrl *C.QUrl = nil

	C.QUrl_new(&outptr_QUrl)
	ret := newQUrl(outptr_QUrl)
	ret.isSubclass = true
	return ret
}

// NewQUrl2 constructs a new QUrl object.
func NewQUrl2(copyVal *QUrl) *QUrl {
	var outptr_QUrl *C.QUrl = nil

	C.QUrl_new2(copyVal.cPointer(), &outptr_QUrl)
	ret := newQUrl(outptr_QUrl)
	ret.isSubclass = true
	return ret
}

// NewQUrl3 constructs a new QUrl object.
func NewQUrl3(url string) *QUrl {
	url_ms := C.struct_miqt_string{}
	url_ms.data = C.CString(url)
	url_ms.len = C.size_t(len(url))
	defer C.free(unsafe.Pointer(url_ms.data))
	var outptr_QUrl *C.QUrl = nil

	C.QUrl_new3(url_ms, &outptr_QUrl)
	ret := newQUrl(outptr_QUrl)
	ret.isSubclass = true
	return ret
}

// NewQUrl4 constructs a new QUrl object.
func NewQUrl4(url string, mode QUrl__ParsingMode) *QUrl {
	url_ms := C.struct_miqt_string{}
	url_ms.data = C.CString(url)
	url_ms.len = C.size_t(len(url))
	defer C.free(unsafe.Pointer(url_ms.data))
	var outptr_QUrl *C.QUrl = nil

	C.QUrl_new4(url_ms, (C.int)(mode), &outptr_QUrl)
	ret := newQUrl(outptr_QUrl)
	ret.isSubclass = true
	return ret
}

func (this *QUrl) OperatorAssign(copyVal *QUrl) {
	C.QUrl_OperatorAssign(this.h, copyVal.cPointer())
}

func (this *QUrl) OperatorAssignWithUrl(url string) {
	url_ms := C.struct_miqt_string{}
	url_ms.data = C.CString(url)
	url_ms.len = C.size_t(len(url))
	defer C.free(unsafe.Pointer(url_ms.data))
	C.QUrl_OperatorAssignWithUrl(this.h, url_ms)
}

func (this *QUrl) Swap(other *QUrl) {
	C.QUrl_Swap(this.h, other.cPointer())
}

func (this *QUrl) SetUrl(url string) {
	url_ms := C.struct_miqt_string{}
	url_ms.data = C.CString(url)
	url_ms.len = C.size_t(len(url))
	defer C.free(unsafe.Pointer(url_ms.data))
	C.QUrl_SetUrl(this.h, url_ms)
}

func (this *QUrl) Url() string {
	var _ms C.struct_miqt_string = C.QUrl_Url(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) ToString() string {
	var _ms C.struct_miqt_string = C.QUrl_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) ToDisplayString() string {
	var _ms C.struct_miqt_string = C.QUrl_ToDisplayString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) ToEncoded() []byte {
	var _bytearray C.struct_miqt_string = C.QUrl_ToEncoded(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QUrl_FromEncoded(url []byte) *QUrl {
	url_alias := C.struct_miqt_string{}
	url_alias.data = (*C.char)(unsafe.Pointer(&url[0]))
	url_alias.len = C.size_t(len(url))
	_ret := C.QUrl_FromEncoded(url_alias)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUrl_FromUserInput(userInput string) *QUrl {
	userInput_ms := C.struct_miqt_string{}
	userInput_ms.data = C.CString(userInput)
	userInput_ms.len = C.size_t(len(userInput))
	defer C.free(unsafe.Pointer(userInput_ms.data))
	_ret := C.QUrl_FromUserInput(userInput_ms)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUrl_FromUserInput2(userInput string, workingDirectory string) *QUrl {
	userInput_ms := C.struct_miqt_string{}
	userInput_ms.data = C.CString(userInput)
	userInput_ms.len = C.size_t(len(userInput))
	defer C.free(unsafe.Pointer(userInput_ms.data))
	workingDirectory_ms := C.struct_miqt_string{}
	workingDirectory_ms.data = C.CString(workingDirectory)
	workingDirectory_ms.len = C.size_t(len(workingDirectory))
	defer C.free(unsafe.Pointer(workingDirectory_ms.data))
	_ret := C.QUrl_FromUserInput2(userInput_ms, workingDirectory_ms)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUrl) IsValid() bool {
	return (bool)(C.QUrl_IsValid(this.h))
}

func (this *QUrl) ErrorString() string {
	var _ms C.struct_miqt_string = C.QUrl_ErrorString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) IsEmpty() bool {
	return (bool)(C.QUrl_IsEmpty(this.h))
}

func (this *QUrl) Clear() {
	C.QUrl_Clear(this.h)
}

func (this *QUrl) SetScheme(scheme string) {
	scheme_ms := C.struct_miqt_string{}
	scheme_ms.data = C.CString(scheme)
	scheme_ms.len = C.size_t(len(scheme))
	defer C.free(unsafe.Pointer(scheme_ms.data))
	C.QUrl_SetScheme(this.h, scheme_ms)
}

func (this *QUrl) Scheme() string {
	var _ms C.struct_miqt_string = C.QUrl_Scheme(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetAuthority(authority string) {
	authority_ms := C.struct_miqt_string{}
	authority_ms.data = C.CString(authority)
	authority_ms.len = C.size_t(len(authority))
	defer C.free(unsafe.Pointer(authority_ms.data))
	C.QUrl_SetAuthority(this.h, authority_ms)
}

func (this *QUrl) Authority() string {
	var _ms C.struct_miqt_string = C.QUrl_Authority(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetUserInfo(userInfo string) {
	userInfo_ms := C.struct_miqt_string{}
	userInfo_ms.data = C.CString(userInfo)
	userInfo_ms.len = C.size_t(len(userInfo))
	defer C.free(unsafe.Pointer(userInfo_ms.data))
	C.QUrl_SetUserInfo(this.h, userInfo_ms)
}

func (this *QUrl) UserInfo() string {
	var _ms C.struct_miqt_string = C.QUrl_UserInfo(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetUserName(userName string) {
	userName_ms := C.struct_miqt_string{}
	userName_ms.data = C.CString(userName)
	userName_ms.len = C.size_t(len(userName))
	defer C.free(unsafe.Pointer(userName_ms.data))
	C.QUrl_SetUserName(this.h, userName_ms)
}

func (this *QUrl) UserName() string {
	var _ms C.struct_miqt_string = C.QUrl_UserName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetPassword(password string) {
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	C.QUrl_SetPassword(this.h, password_ms)
}

func (this *QUrl) Password() string {
	var _ms C.struct_miqt_string = C.QUrl_Password(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetHost(host string) {
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	C.QUrl_SetHost(this.h, host_ms)
}

func (this *QUrl) Host() string {
	var _ms C.struct_miqt_string = C.QUrl_Host(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) TopLevelDomain() string {
	var _ms C.struct_miqt_string = C.QUrl_TopLevelDomain(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetPort(port int) {
	C.QUrl_SetPort(this.h, (C.int)(port))
}

func (this *QUrl) Port() int {
	return (int)(C.QUrl_Port(this.h))
}

func (this *QUrl) SetPath(path string) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QUrl_SetPath(this.h, path_ms)
}

func (this *QUrl) Path() string {
	var _ms C.struct_miqt_string = C.QUrl_Path(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) FileName() string {
	var _ms C.struct_miqt_string = C.QUrl_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) HasQuery() bool {
	return (bool)(C.QUrl_HasQuery(this.h))
}

func (this *QUrl) SetQuery(query string) {
	query_ms := C.struct_miqt_string{}
	query_ms.data = C.CString(query)
	query_ms.len = C.size_t(len(query))
	defer C.free(unsafe.Pointer(query_ms.data))
	C.QUrl_SetQuery(this.h, query_ms)
}

func (this *QUrl) SetQueryWithQuery(query *QUrlQuery) {
	C.QUrl_SetQueryWithQuery(this.h, query.cPointer())
}

func (this *QUrl) Query() string {
	var _ms C.struct_miqt_string = C.QUrl_Query(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) HasFragment() bool {
	return (bool)(C.QUrl_HasFragment(this.h))
}

func (this *QUrl) Fragment() string {
	var _ms C.struct_miqt_string = C.QUrl_Fragment(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetFragment(fragment string) {
	fragment_ms := C.struct_miqt_string{}
	fragment_ms.data = C.CString(fragment)
	fragment_ms.len = C.size_t(len(fragment))
	defer C.free(unsafe.Pointer(fragment_ms.data))
	C.QUrl_SetFragment(this.h, fragment_ms)
}

func (this *QUrl) Resolved(relative *QUrl) *QUrl {
	_ret := C.QUrl_Resolved(this.h, relative.cPointer())
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUrl) IsRelative() bool {
	return (bool)(C.QUrl_IsRelative(this.h))
}

func (this *QUrl) IsParentOf(url *QUrl) bool {
	return (bool)(C.QUrl_IsParentOf(this.h, url.cPointer()))
}

func (this *QUrl) IsLocalFile() bool {
	return (bool)(C.QUrl_IsLocalFile(this.h))
}

func QUrl_FromLocalFile(localfile string) *QUrl {
	localfile_ms := C.struct_miqt_string{}
	localfile_ms.data = C.CString(localfile)
	localfile_ms.len = C.size_t(len(localfile))
	defer C.free(unsafe.Pointer(localfile_ms.data))
	_ret := C.QUrl_FromLocalFile(localfile_ms)
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUrl) ToLocalFile() string {
	var _ms C.struct_miqt_string = C.QUrl_ToLocalFile(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) Detach() {
	C.QUrl_Detach(this.h)
}

func (this *QUrl) IsDetached() bool {
	return (bool)(C.QUrl_IsDetached(this.h))
}

func (this *QUrl) OperatorLesser(url *QUrl) bool {
	return (bool)(C.QUrl_OperatorLesser(this.h, url.cPointer()))
}

func (this *QUrl) OperatorEqual(url *QUrl) bool {
	return (bool)(C.QUrl_OperatorEqual(this.h, url.cPointer()))
}

func (this *QUrl) OperatorNotEqual(url *QUrl) bool {
	return (bool)(C.QUrl_OperatorNotEqual(this.h, url.cPointer()))
}

func QUrl_FromPercentEncoding(param1 []byte) string {
	param1_alias := C.struct_miqt_string{}
	param1_alias.data = (*C.char)(unsafe.Pointer(&param1[0]))
	param1_alias.len = C.size_t(len(param1))
	var _ms C.struct_miqt_string = C.QUrl_FromPercentEncoding(param1_alias)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUrl_ToPercentEncoding(param1 string) []byte {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	var _bytearray C.struct_miqt_string = C.QUrl_ToPercentEncoding(param1_ms)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QUrl_FromAce(param1 []byte) string {
	param1_alias := C.struct_miqt_string{}
	param1_alias.data = (*C.char)(unsafe.Pointer(&param1[0]))
	param1_alias.len = C.size_t(len(param1))
	var _ms C.struct_miqt_string = C.QUrl_FromAce(param1_alias)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QUrl_ToAce(param1 string) []byte {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	var _bytearray C.struct_miqt_string = C.QUrl_ToAce(param1_ms)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QUrl_IdnWhitelist() []string {
	var _ma C.struct_miqt_array = C.QUrl_IdnWhitelist()
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QUrl_ToStringList(uris []QUrl) []string {
	uris_CArray := (*[0xffff]*C.QUrl)(C.malloc(C.size_t(8 * len(uris))))
	defer C.free(unsafe.Pointer(uris_CArray))
	for i := range uris {
		uris_CArray[i] = uris[i].cPointer()
	}
	uris_ma := C.struct_miqt_array{len: C.size_t(len(uris)), data: unsafe.Pointer(uris_CArray)}
	var _ma C.struct_miqt_array = C.QUrl_ToStringList(uris_ma)
	_ret := make([]string, int(_ma.len))
	_outCast := (*[0xffff]C.struct_miqt_string)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		var _lv_ms C.struct_miqt_string = _outCast[i]
		_lv_ret := C.GoStringN(_lv_ms.data, C.int(int64(_lv_ms.len)))
		C.free(unsafe.Pointer(_lv_ms.data))
		_ret[i] = _lv_ret
	}
	return _ret
}

func QUrl_FromStringList(uris []string) []QUrl {
	uris_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(uris))))
	defer C.free(unsafe.Pointer(uris_CArray))
	for i := range uris {
		uris_i_ms := C.struct_miqt_string{}
		uris_i_ms.data = C.CString(uris[i])
		uris_i_ms.len = C.size_t(len(uris[i]))
		defer C.free(unsafe.Pointer(uris_i_ms.data))
		uris_CArray[i] = uris_i_ms
	}
	uris_ma := C.struct_miqt_array{len: C.size_t(len(uris)), data: unsafe.Pointer(uris_CArray)}
	var _ma C.struct_miqt_array = C.QUrl_FromStringList(uris_ma)
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQUrl(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

func QUrl_SetIdnWhitelist(idnWhitelist []string) {
	idnWhitelist_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(idnWhitelist))))
	defer C.free(unsafe.Pointer(idnWhitelist_CArray))
	for i := range idnWhitelist {
		idnWhitelist_i_ms := C.struct_miqt_string{}
		idnWhitelist_i_ms.data = C.CString(idnWhitelist[i])
		idnWhitelist_i_ms.len = C.size_t(len(idnWhitelist[i]))
		defer C.free(unsafe.Pointer(idnWhitelist_i_ms.data))
		idnWhitelist_CArray[i] = idnWhitelist_i_ms
	}
	idnWhitelist_ma := C.struct_miqt_array{len: C.size_t(len(idnWhitelist)), data: unsafe.Pointer(idnWhitelist_CArray)}
	C.QUrl_SetIdnWhitelist(idnWhitelist_ma)
}

func (this *QUrl) SetUrl2(url string, mode QUrl__ParsingMode) {
	url_ms := C.struct_miqt_string{}
	url_ms.data = C.CString(url)
	url_ms.len = C.size_t(len(url))
	defer C.free(unsafe.Pointer(url_ms.data))
	C.QUrl_SetUrl2(this.h, url_ms, (C.int)(mode))
}

func QUrl_FromEncoded2(url []byte, mode QUrl__ParsingMode) *QUrl {
	url_alias := C.struct_miqt_string{}
	url_alias.data = (*C.char)(unsafe.Pointer(&url[0]))
	url_alias.len = C.size_t(len(url))
	_ret := C.QUrl_FromEncoded2(url_alias, (C.int)(mode))
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QUrl_FromUserInput3(userInput string, workingDirectory string, options QUrl__UserInputResolutionOption) *QUrl {
	userInput_ms := C.struct_miqt_string{}
	userInput_ms.data = C.CString(userInput)
	userInput_ms.len = C.size_t(len(userInput))
	defer C.free(unsafe.Pointer(userInput_ms.data))
	workingDirectory_ms := C.struct_miqt_string{}
	workingDirectory_ms.data = C.CString(workingDirectory)
	workingDirectory_ms.len = C.size_t(len(workingDirectory))
	defer C.free(unsafe.Pointer(workingDirectory_ms.data))
	_ret := C.QUrl_FromUserInput3(userInput_ms, workingDirectory_ms, (C.int)(options))
	_goptr := newQUrl(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QUrl) SetAuthority2(authority string, mode QUrl__ParsingMode) {
	authority_ms := C.struct_miqt_string{}
	authority_ms.data = C.CString(authority)
	authority_ms.len = C.size_t(len(authority))
	defer C.free(unsafe.Pointer(authority_ms.data))
	C.QUrl_SetAuthority2(this.h, authority_ms, (C.int)(mode))
}

func (this *QUrl) Authority1(options QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QUrl_Authority1(this.h, (C.int)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetUserInfo2(userInfo string, mode QUrl__ParsingMode) {
	userInfo_ms := C.struct_miqt_string{}
	userInfo_ms.data = C.CString(userInfo)
	userInfo_ms.len = C.size_t(len(userInfo))
	defer C.free(unsafe.Pointer(userInfo_ms.data))
	C.QUrl_SetUserInfo2(this.h, userInfo_ms, (C.int)(mode))
}

func (this *QUrl) UserInfo1(options QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QUrl_UserInfo1(this.h, (C.int)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetUserName2(userName string, mode QUrl__ParsingMode) {
	userName_ms := C.struct_miqt_string{}
	userName_ms.data = C.CString(userName)
	userName_ms.len = C.size_t(len(userName))
	defer C.free(unsafe.Pointer(userName_ms.data))
	C.QUrl_SetUserName2(this.h, userName_ms, (C.int)(mode))
}

func (this *QUrl) UserName1(options QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QUrl_UserName1(this.h, (C.int)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetPassword2(password string, mode QUrl__ParsingMode) {
	password_ms := C.struct_miqt_string{}
	password_ms.data = C.CString(password)
	password_ms.len = C.size_t(len(password))
	defer C.free(unsafe.Pointer(password_ms.data))
	C.QUrl_SetPassword2(this.h, password_ms, (C.int)(mode))
}

func (this *QUrl) Password1(param1 QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QUrl_Password1(this.h, (C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetHost2(host string, mode QUrl__ParsingMode) {
	host_ms := C.struct_miqt_string{}
	host_ms.data = C.CString(host)
	host_ms.len = C.size_t(len(host))
	defer C.free(unsafe.Pointer(host_ms.data))
	C.QUrl_SetHost2(this.h, host_ms, (C.int)(mode))
}

func (this *QUrl) Host1(param1 QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QUrl_Host1(this.h, (C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) TopLevelDomain1(options QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QUrl_TopLevelDomain1(this.h, (C.int)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) Port1(defaultPort int) int {
	return (int)(C.QUrl_Port1(this.h, (C.int)(defaultPort)))
}

func (this *QUrl) SetPath2(path string, mode QUrl__ParsingMode) {
	path_ms := C.struct_miqt_string{}
	path_ms.data = C.CString(path)
	path_ms.len = C.size_t(len(path))
	defer C.free(unsafe.Pointer(path_ms.data))
	C.QUrl_SetPath2(this.h, path_ms, (C.int)(mode))
}

func (this *QUrl) Path1(options QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QUrl_Path1(this.h, (C.int)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) FileName1(options QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QUrl_FileName1(this.h, (C.int)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetQuery2(query string, mode QUrl__ParsingMode) {
	query_ms := C.struct_miqt_string{}
	query_ms.data = C.CString(query)
	query_ms.len = C.size_t(len(query))
	defer C.free(unsafe.Pointer(query_ms.data))
	C.QUrl_SetQuery2(this.h, query_ms, (C.int)(mode))
}

func (this *QUrl) Query1(param1 QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QUrl_Query1(this.h, (C.int)(param1))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) Fragment1(options QUrl__ComponentFormattingOption) string {
	var _ms C.struct_miqt_string = C.QUrl_Fragment1(this.h, (C.int)(options))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QUrl) SetFragment2(fragment string, mode QUrl__ParsingMode) {
	fragment_ms := C.struct_miqt_string{}
	fragment_ms.data = C.CString(fragment)
	fragment_ms.len = C.size_t(len(fragment))
	defer C.free(unsafe.Pointer(fragment_ms.data))
	C.QUrl_SetFragment2(this.h, fragment_ms, (C.int)(mode))
}

func QUrl_ToPercentEncoding2(param1 string, exclude []byte) []byte {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	exclude_alias := C.struct_miqt_string{}
	exclude_alias.data = (*C.char)(unsafe.Pointer(&exclude[0]))
	exclude_alias.len = C.size_t(len(exclude))
	var _bytearray C.struct_miqt_string = C.QUrl_ToPercentEncoding2(param1_ms, exclude_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QUrl_ToPercentEncoding3(param1 string, exclude []byte, include []byte) []byte {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	exclude_alias := C.struct_miqt_string{}
	exclude_alias.data = (*C.char)(unsafe.Pointer(&exclude[0]))
	exclude_alias.len = C.size_t(len(exclude))
	include_alias := C.struct_miqt_string{}
	include_alias.data = (*C.char)(unsafe.Pointer(&include[0]))
	include_alias.len = C.size_t(len(include))
	var _bytearray C.struct_miqt_string = C.QUrl_ToPercentEncoding3(param1_ms, exclude_alias, include_alias)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func QUrl_FromStringList2(uris []string, mode QUrl__ParsingMode) []QUrl {
	uris_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(uris))))
	defer C.free(unsafe.Pointer(uris_CArray))
	for i := range uris {
		uris_i_ms := C.struct_miqt_string{}
		uris_i_ms.data = C.CString(uris[i])
		uris_i_ms.len = C.size_t(len(uris[i]))
		defer C.free(unsafe.Pointer(uris_i_ms.data))
		uris_CArray[i] = uris_i_ms
	}
	uris_ma := C.struct_miqt_array{len: C.size_t(len(uris)), data: unsafe.Pointer(uris_CArray)}
	var _ma C.struct_miqt_array = C.QUrl_FromStringList2(uris_ma, (C.int)(mode))
	_ret := make([]QUrl, int(_ma.len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_lv_ret := _outCast[i]
		_lv_goptr := newQUrl(_lv_ret)
		_lv_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
		_ret[i] = *_lv_goptr
	}
	return _ret
}

// Delete this object from C++ memory.
func (this *QUrl) Delete() {
	C.QUrl_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QUrl) GoGC() {
	runtime.SetFinalizer(this, func(this *QUrl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
