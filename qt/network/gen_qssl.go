package network

/*

#include "gen_qssl.h"
#include <stdlib.h>

*/
import "C"

type QSsl__KeyType int

const (
	QSsl__PrivateKey QSsl__KeyType = 0
	QSsl__PublicKey  QSsl__KeyType = 1
)

type QSsl__EncodingFormat int

const (
	QSsl__Pem QSsl__EncodingFormat = 0
	QSsl__Der QSsl__EncodingFormat = 1
)

type QSsl__KeyAlgorithm int

const (
	QSsl__Opaque QSsl__KeyAlgorithm = 0
	QSsl__Rsa    QSsl__KeyAlgorithm = 1
	QSsl__Dsa    QSsl__KeyAlgorithm = 2
	QSsl__Ec     QSsl__KeyAlgorithm = 3
	QSsl__Dh     QSsl__KeyAlgorithm = 4
)

type QSsl__AlternativeNameEntryType int

const (
	QSsl__EmailEntry     QSsl__AlternativeNameEntryType = 0
	QSsl__DnsEntry       QSsl__AlternativeNameEntryType = 1
	QSsl__IpAddressEntry QSsl__AlternativeNameEntryType = 2
)

type QSsl__SslProtocol int

const (
	QSsl__SslV3           QSsl__SslProtocol = 0
	QSsl__SslV2           QSsl__SslProtocol = 1
	QSsl__TlsV1_0         QSsl__SslProtocol = 2
	QSsl__TlsV1_1         QSsl__SslProtocol = 3
	QSsl__TlsV1_2         QSsl__SslProtocol = 4
	QSsl__AnyProtocol     QSsl__SslProtocol = 5
	QSsl__TlsV1SslV3      QSsl__SslProtocol = 6
	QSsl__SecureProtocols QSsl__SslProtocol = 7
	QSsl__TlsV1_0OrLater  QSsl__SslProtocol = 8
	QSsl__TlsV1_1OrLater  QSsl__SslProtocol = 9
	QSsl__TlsV1_2OrLater  QSsl__SslProtocol = 10
	QSsl__DtlsV1_0        QSsl__SslProtocol = 11
	QSsl__DtlsV1_0OrLater QSsl__SslProtocol = 12
	QSsl__DtlsV1_2        QSsl__SslProtocol = 13
	QSsl__DtlsV1_2OrLater QSsl__SslProtocol = 14
	QSsl__TlsV1_3         QSsl__SslProtocol = 15
	QSsl__TlsV1_3OrLater  QSsl__SslProtocol = 16
	QSsl__UnknownProtocol QSsl__SslProtocol = -1
)

type QSsl__SslOption int

const (
	QSsl__SslOptionDisableEmptyFragments         QSsl__SslOption = 1
	QSsl__SslOptionDisableSessionTickets         QSsl__SslOption = 2
	QSsl__SslOptionDisableCompression            QSsl__SslOption = 4
	QSsl__SslOptionDisableServerNameIndication   QSsl__SslOption = 8
	QSsl__SslOptionDisableLegacyRenegotiation    QSsl__SslOption = 16
	QSsl__SslOptionDisableSessionSharing         QSsl__SslOption = 32
	QSsl__SslOptionDisableSessionPersistence     QSsl__SslOption = 64
	QSsl__SslOptionDisableServerCipherPreference QSsl__SslOption = 128
)
