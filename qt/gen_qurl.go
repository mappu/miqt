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

type QUrl struct {
	h *C.QUrl
}

func (this *QUrl) cPointer() *C.QUrl {
	if this == nil {
		return nil
	}
	return this.h
}

func newQUrl(h *C.QUrl) *QUrl {
	if h == nil {
		return nil
	}
	return &QUrl{h: h}
}

func newQUrl_U(h unsafe.Pointer) *QUrl {
	return newQUrl((*C.QUrl)(h))
}

// NewQUrl constructs a new QUrl object.
func NewQUrl() *QUrl {
	ret := C.QUrl_new()
	return newQUrl(ret)
}

// NewQUrl2 constructs a new QUrl object.
func NewQUrl2(copyVal *QUrl) *QUrl {
	ret := C.QUrl_new2(copyVal.cPointer())
	return newQUrl(ret)
}

// NewQUrl3 constructs a new QUrl object.
func NewQUrl3(url string) *QUrl {
	url_Cstring := C.CString(url)
	defer C.free(unsafe.Pointer(url_Cstring))
	ret := C.QUrl_new3(url_Cstring, C.size_t(len(url)))
	return newQUrl(ret)
}

// NewQUrl4 constructs a new QUrl object.
func NewQUrl4(url string, mode uintptr) *QUrl {
	url_Cstring := C.CString(url)
	defer C.free(unsafe.Pointer(url_Cstring))
	ret := C.QUrl_new4(url_Cstring, C.size_t(len(url)), (C.uintptr_t)(mode))
	return newQUrl(ret)
}

func (this *QUrl) OperatorAssign(copyVal *QUrl) {
	C.QUrl_OperatorAssign(this.h, copyVal.cPointer())
}

func (this *QUrl) OperatorAssignWithUrl(url string) {
	url_Cstring := C.CString(url)
	defer C.free(unsafe.Pointer(url_Cstring))
	C.QUrl_OperatorAssignWithUrl(this.h, url_Cstring, C.size_t(len(url)))
}

func (this *QUrl) Swap(other *QUrl) {
	C.QUrl_Swap(this.h, other.cPointer())
}

func (this *QUrl) SetUrl(url string) {
	url_Cstring := C.CString(url)
	defer C.free(unsafe.Pointer(url_Cstring))
	C.QUrl_SetUrl(this.h, url_Cstring, C.size_t(len(url)))
}

func (this *QUrl) Url() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Url(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) ToString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_ToString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) ToDisplayString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_ToDisplayString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) ToEncoded() *QByteArray {
	ret := C.QUrl_ToEncoded(this.h)
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUrl_FromEncoded(url *QByteArray) *QUrl {
	ret := C.QUrl_FromEncoded(url.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUrl_FromUserInput(userInput string) *QUrl {
	userInput_Cstring := C.CString(userInput)
	defer C.free(unsafe.Pointer(userInput_Cstring))
	ret := C.QUrl_FromUserInput(userInput_Cstring, C.size_t(len(userInput)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUrl_FromUserInput2(userInput string, workingDirectory string) *QUrl {
	userInput_Cstring := C.CString(userInput)
	defer C.free(unsafe.Pointer(userInput_Cstring))
	workingDirectory_Cstring := C.CString(workingDirectory)
	defer C.free(unsafe.Pointer(workingDirectory_Cstring))
	ret := C.QUrl_FromUserInput2(userInput_Cstring, C.size_t(len(userInput)), workingDirectory_Cstring, C.size_t(len(workingDirectory)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUrl) IsValid() bool {
	ret := C.QUrl_IsValid(this.h)
	return (bool)(ret)
}

func (this *QUrl) ErrorString() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_ErrorString(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) IsEmpty() bool {
	ret := C.QUrl_IsEmpty(this.h)
	return (bool)(ret)
}

func (this *QUrl) Clear() {
	C.QUrl_Clear(this.h)
}

func (this *QUrl) SetScheme(scheme string) {
	scheme_Cstring := C.CString(scheme)
	defer C.free(unsafe.Pointer(scheme_Cstring))
	C.QUrl_SetScheme(this.h, scheme_Cstring, C.size_t(len(scheme)))
}

func (this *QUrl) Scheme() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Scheme(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetAuthority(authority string) {
	authority_Cstring := C.CString(authority)
	defer C.free(unsafe.Pointer(authority_Cstring))
	C.QUrl_SetAuthority(this.h, authority_Cstring, C.size_t(len(authority)))
}

func (this *QUrl) Authority() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Authority(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetUserInfo(userInfo string) {
	userInfo_Cstring := C.CString(userInfo)
	defer C.free(unsafe.Pointer(userInfo_Cstring))
	C.QUrl_SetUserInfo(this.h, userInfo_Cstring, C.size_t(len(userInfo)))
}

func (this *QUrl) UserInfo() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_UserInfo(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetUserName(userName string) {
	userName_Cstring := C.CString(userName)
	defer C.free(unsafe.Pointer(userName_Cstring))
	C.QUrl_SetUserName(this.h, userName_Cstring, C.size_t(len(userName)))
}

func (this *QUrl) UserName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_UserName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetPassword(password string) {
	password_Cstring := C.CString(password)
	defer C.free(unsafe.Pointer(password_Cstring))
	C.QUrl_SetPassword(this.h, password_Cstring, C.size_t(len(password)))
}

func (this *QUrl) Password() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Password(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetHost(host string) {
	host_Cstring := C.CString(host)
	defer C.free(unsafe.Pointer(host_Cstring))
	C.QUrl_SetHost(this.h, host_Cstring, C.size_t(len(host)))
}

func (this *QUrl) Host() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Host(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) TopLevelDomain() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_TopLevelDomain(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetPort(port int) {
	C.QUrl_SetPort(this.h, (C.int)(port))
}

func (this *QUrl) Port() int {
	ret := C.QUrl_Port(this.h)
	return (int)(ret)
}

func (this *QUrl) SetPath(path string) {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	C.QUrl_SetPath(this.h, path_Cstring, C.size_t(len(path)))
}

func (this *QUrl) Path() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Path(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) FileName() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_FileName(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) HasQuery() bool {
	ret := C.QUrl_HasQuery(this.h)
	return (bool)(ret)
}

func (this *QUrl) SetQuery(query string) {
	query_Cstring := C.CString(query)
	defer C.free(unsafe.Pointer(query_Cstring))
	C.QUrl_SetQuery(this.h, query_Cstring, C.size_t(len(query)))
}

func (this *QUrl) SetQueryWithQuery(query *QUrlQuery) {
	C.QUrl_SetQueryWithQuery(this.h, query.cPointer())
}

func (this *QUrl) Query() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Query(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) HasFragment() bool {
	ret := C.QUrl_HasFragment(this.h)
	return (bool)(ret)
}

func (this *QUrl) Fragment() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Fragment(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetFragment(fragment string) {
	fragment_Cstring := C.CString(fragment)
	defer C.free(unsafe.Pointer(fragment_Cstring))
	C.QUrl_SetFragment(this.h, fragment_Cstring, C.size_t(len(fragment)))
}

func (this *QUrl) Resolved(relative *QUrl) *QUrl {
	ret := C.QUrl_Resolved(this.h, relative.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUrl) IsRelative() bool {
	ret := C.QUrl_IsRelative(this.h)
	return (bool)(ret)
}

func (this *QUrl) IsParentOf(url *QUrl) bool {
	ret := C.QUrl_IsParentOf(this.h, url.cPointer())
	return (bool)(ret)
}

func (this *QUrl) IsLocalFile() bool {
	ret := C.QUrl_IsLocalFile(this.h)
	return (bool)(ret)
}

func QUrl_FromLocalFile(localfile string) *QUrl {
	localfile_Cstring := C.CString(localfile)
	defer C.free(unsafe.Pointer(localfile_Cstring))
	ret := C.QUrl_FromLocalFile(localfile_Cstring, C.size_t(len(localfile)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUrl) ToLocalFile() string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_ToLocalFile(this.h, &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) Detach() {
	C.QUrl_Detach(this.h)
}

func (this *QUrl) IsDetached() bool {
	ret := C.QUrl_IsDetached(this.h)
	return (bool)(ret)
}

func (this *QUrl) OperatorLesser(url *QUrl) bool {
	ret := C.QUrl_OperatorLesser(this.h, url.cPointer())
	return (bool)(ret)
}

func (this *QUrl) OperatorEqual(url *QUrl) bool {
	ret := C.QUrl_OperatorEqual(this.h, url.cPointer())
	return (bool)(ret)
}

func (this *QUrl) OperatorNotEqual(url *QUrl) bool {
	ret := C.QUrl_OperatorNotEqual(this.h, url.cPointer())
	return (bool)(ret)
}

func QUrl_FromPercentEncoding(param1 *QByteArray) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_FromPercentEncoding(param1.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUrl_ToPercentEncoding(param1 string) *QByteArray {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QUrl_ToPercentEncoding(param1_Cstring, C.size_t(len(param1)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUrl_FromAce(param1 *QByteArray) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_FromAce(param1.cPointer(), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUrl_ToAce(param1 string) *QByteArray {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QUrl_ToAce(param1_Cstring, C.size_t(len(param1)))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUrl_IdnWhitelist() []string {
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QUrl_IdnWhitelist(&_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUrl_ToStringList(uris []QUrl) []string {
	// For the C ABI, malloc a C array of raw pointers
	uris_CArray := (*[0xffff]*C.QUrl)(C.malloc(C.size_t(8 * len(uris))))
	defer C.free(unsafe.Pointer(uris_CArray))
	for i := range uris {
		uris_CArray[i] = uris[i].cPointer()
	}
	var _out **C.char = nil
	var _out_Lengths *C.int = nil
	var _out_len C.size_t = 0
	C.QUrl_ToStringList(&uris_CArray[0], C.size_t(len(uris)), &_out, &_out_Lengths, &_out_len)
	ret := make([]string, int(_out_len))
	_outCast := (*[0xffff]*C.char)(unsafe.Pointer(_out)) // hey ya
	_out_LengthsCast := (*[0xffff]C.int)(unsafe.Pointer(_out_Lengths))
	for i := 0; i < int(_out_len); i++ {
		ret[i] = C.GoStringN(_outCast[i], _out_LengthsCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUrl_FromStringList(uris []string) []QUrl {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	uris_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(uris))))
	uris_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(uris))))
	defer C.free(unsafe.Pointer(uris_CArray))
	defer C.free(unsafe.Pointer(uris_Lengths))
	for i := range uris {
		single_cstring := C.CString(uris[i])
		defer C.free(unsafe.Pointer(single_cstring))
		uris_CArray[i] = single_cstring
		uris_Lengths[i] = (C.uint64_t)(len(uris[i]))
	}
	var _out **C.QUrl = nil
	var _out_len C.size_t = 0
	C.QUrl_FromStringList(&uris_CArray[0], &uris_Lengths[0], C.size_t(len(uris)), &_out, &_out_len)
	ret := make([]QUrl, int(_out_len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQUrl(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func QUrl_SetIdnWhitelist(idnWhitelist []string) {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	idnWhitelist_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(idnWhitelist))))
	idnWhitelist_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(idnWhitelist))))
	defer C.free(unsafe.Pointer(idnWhitelist_CArray))
	defer C.free(unsafe.Pointer(idnWhitelist_Lengths))
	for i := range idnWhitelist {
		single_cstring := C.CString(idnWhitelist[i])
		defer C.free(unsafe.Pointer(single_cstring))
		idnWhitelist_CArray[i] = single_cstring
		idnWhitelist_Lengths[i] = (C.uint64_t)(len(idnWhitelist[i]))
	}
	C.QUrl_SetIdnWhitelist(&idnWhitelist_CArray[0], &idnWhitelist_Lengths[0], C.size_t(len(idnWhitelist)))
}

func (this *QUrl) SetUrl2(url string, mode uintptr) {
	url_Cstring := C.CString(url)
	defer C.free(unsafe.Pointer(url_Cstring))
	C.QUrl_SetUrl2(this.h, url_Cstring, C.size_t(len(url)), (C.uintptr_t)(mode))
}

func QUrl_FromEncoded2(url *QByteArray, mode uintptr) *QUrl {
	ret := C.QUrl_FromEncoded2(url.cPointer(), (C.uintptr_t)(mode))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUrl_FromUserInput3(userInput string, workingDirectory string, options int) *QUrl {
	userInput_Cstring := C.CString(userInput)
	defer C.free(unsafe.Pointer(userInput_Cstring))
	workingDirectory_Cstring := C.CString(workingDirectory)
	defer C.free(unsafe.Pointer(workingDirectory_Cstring))
	ret := C.QUrl_FromUserInput3(userInput_Cstring, C.size_t(len(userInput)), workingDirectory_Cstring, C.size_t(len(workingDirectory)), (C.int)(options))
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQUrl(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QUrl) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QUrl) SetAuthority2(authority string, mode uintptr) {
	authority_Cstring := C.CString(authority)
	defer C.free(unsafe.Pointer(authority_Cstring))
	C.QUrl_SetAuthority2(this.h, authority_Cstring, C.size_t(len(authority)), (C.uintptr_t)(mode))
}

func (this *QUrl) Authority1(options int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Authority1(this.h, (C.int)(options), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetUserInfo2(userInfo string, mode uintptr) {
	userInfo_Cstring := C.CString(userInfo)
	defer C.free(unsafe.Pointer(userInfo_Cstring))
	C.QUrl_SetUserInfo2(this.h, userInfo_Cstring, C.size_t(len(userInfo)), (C.uintptr_t)(mode))
}

func (this *QUrl) UserInfo1(options int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_UserInfo1(this.h, (C.int)(options), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetUserName2(userName string, mode uintptr) {
	userName_Cstring := C.CString(userName)
	defer C.free(unsafe.Pointer(userName_Cstring))
	C.QUrl_SetUserName2(this.h, userName_Cstring, C.size_t(len(userName)), (C.uintptr_t)(mode))
}

func (this *QUrl) UserName1(options int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_UserName1(this.h, (C.int)(options), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetPassword2(password string, mode uintptr) {
	password_Cstring := C.CString(password)
	defer C.free(unsafe.Pointer(password_Cstring))
	C.QUrl_SetPassword2(this.h, password_Cstring, C.size_t(len(password)), (C.uintptr_t)(mode))
}

func (this *QUrl) Password1(param1 int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Password1(this.h, (C.int)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetHost2(host string, mode uintptr) {
	host_Cstring := C.CString(host)
	defer C.free(unsafe.Pointer(host_Cstring))
	C.QUrl_SetHost2(this.h, host_Cstring, C.size_t(len(host)), (C.uintptr_t)(mode))
}

func (this *QUrl) Host1(param1 int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Host1(this.h, (C.int)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) TopLevelDomain1(options int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_TopLevelDomain1(this.h, (C.int)(options), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) Port1(defaultPort int) int {
	ret := C.QUrl_Port1(this.h, (C.int)(defaultPort))
	return (int)(ret)
}

func (this *QUrl) SetPath2(path string, mode uintptr) {
	path_Cstring := C.CString(path)
	defer C.free(unsafe.Pointer(path_Cstring))
	C.QUrl_SetPath2(this.h, path_Cstring, C.size_t(len(path)), (C.uintptr_t)(mode))
}

func (this *QUrl) Path1(options int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Path1(this.h, (C.int)(options), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) FileName1(options int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_FileName1(this.h, (C.int)(options), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetQuery2(query string, mode uintptr) {
	query_Cstring := C.CString(query)
	defer C.free(unsafe.Pointer(query_Cstring))
	C.QUrl_SetQuery2(this.h, query_Cstring, C.size_t(len(query)), (C.uintptr_t)(mode))
}

func (this *QUrl) Query1(param1 int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Query1(this.h, (C.int)(param1), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) Fragment1(options int) string {
	var _out *C.char = nil
	var _out_Strlen C.int = 0
	C.QUrl_Fragment1(this.h, (C.int)(options), &_out, &_out_Strlen)
	ret := C.GoStringN(_out, _out_Strlen)
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) SetFragment2(fragment string, mode uintptr) {
	fragment_Cstring := C.CString(fragment)
	defer C.free(unsafe.Pointer(fragment_Cstring))
	C.QUrl_SetFragment2(this.h, fragment_Cstring, C.size_t(len(fragment)), (C.uintptr_t)(mode))
}

func QUrl_ToPercentEncoding2(param1 string, exclude *QByteArray) *QByteArray {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QUrl_ToPercentEncoding2(param1_Cstring, C.size_t(len(param1)), exclude.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUrl_ToPercentEncoding3(param1 string, exclude *QByteArray, include *QByteArray) *QByteArray {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	ret := C.QUrl_ToPercentEncoding3(param1_Cstring, C.size_t(len(param1)), exclude.cPointer(), include.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQByteArray(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QByteArray) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func QUrl_FromStringList2(uris []string, mode uintptr) []QUrl {
	// For the C ABI, malloc two C arrays; raw char* pointers and their lengths
	uris_CArray := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(uris))))
	uris_Lengths := (*[0xffff]C.uint64_t)(C.malloc(C.size_t(8 * len(uris))))
	defer C.free(unsafe.Pointer(uris_CArray))
	defer C.free(unsafe.Pointer(uris_Lengths))
	for i := range uris {
		single_cstring := C.CString(uris[i])
		defer C.free(unsafe.Pointer(single_cstring))
		uris_CArray[i] = single_cstring
		uris_Lengths[i] = (C.uint64_t)(len(uris[i]))
	}
	var _out **C.QUrl = nil
	var _out_len C.size_t = 0
	C.QUrl_FromStringList2(&uris_CArray[0], &uris_Lengths[0], C.size_t(len(uris)), (C.uintptr_t)(mode), &_out, &_out_len)
	ret := make([]QUrl, int(_out_len))
	_outCast := (*[0xffff]*C.QUrl)(unsafe.Pointer(_out)) // so fresh so clean
	for i := 0; i < int(_out_len); i++ {
		ret[i] = *newQUrl(_outCast[i])
	}
	C.free(unsafe.Pointer(_out))
	return ret
}

func (this *QUrl) Delete() {
	C.QUrl_Delete(this.h)
}
