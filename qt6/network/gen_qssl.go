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
	QSsl__TlsV1_2         QSsl__SslProtocol = 0
	QSsl__AnyProtocol     QSsl__SslProtocol = 1
	QSsl__SecureProtocols QSsl__SslProtocol = 2
	QSsl__TlsV1_2OrLater  QSsl__SslProtocol = 3
	QSsl__DtlsV1_2        QSsl__SslProtocol = 4
	QSsl__DtlsV1_2OrLater QSsl__SslProtocol = 5
	QSsl__TlsV1_3         QSsl__SslProtocol = 6
	QSsl__TlsV1_3OrLater  QSsl__SslProtocol = 7
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

type QSsl__AlertLevel int

const (
	QSsl__Warning QSsl__AlertLevel = 0
	QSsl__Fatal   QSsl__AlertLevel = 1
	QSsl__Unknown QSsl__AlertLevel = 2
)

type QSsl__AlertType int

const (
	QSsl__CloseNotify                  QSsl__AlertType = 0
	QSsl__UnexpectedMessage            QSsl__AlertType = 10
	QSsl__BadRecordMac                 QSsl__AlertType = 20
	QSsl__RecordOverflow               QSsl__AlertType = 22
	QSsl__DecompressionFailure         QSsl__AlertType = 30
	QSsl__HandshakeFailure             QSsl__AlertType = 40
	QSsl__NoCertificate                QSsl__AlertType = 41
	QSsl__BadCertificate               QSsl__AlertType = 42
	QSsl__UnsupportedCertificate       QSsl__AlertType = 43
	QSsl__CertificateRevoked           QSsl__AlertType = 44
	QSsl__CertificateExpired           QSsl__AlertType = 45
	QSsl__CertificateUnknown           QSsl__AlertType = 46
	QSsl__IllegalParameter             QSsl__AlertType = 47
	QSsl__UnknownCa                    QSsl__AlertType = 48
	QSsl__AccessDenied                 QSsl__AlertType = 49
	QSsl__DecodeError                  QSsl__AlertType = 50
	QSsl__DecryptError                 QSsl__AlertType = 51
	QSsl__ExportRestriction            QSsl__AlertType = 60
	QSsl__ProtocolVersion              QSsl__AlertType = 70
	QSsl__InsufficientSecurity         QSsl__AlertType = 71
	QSsl__InternalError                QSsl__AlertType = 80
	QSsl__InappropriateFallback        QSsl__AlertType = 86
	QSsl__UserCancelled                QSsl__AlertType = 90
	QSsl__NoRenegotiation              QSsl__AlertType = 100
	QSsl__MissingExtension             QSsl__AlertType = 109
	QSsl__UnsupportedExtension         QSsl__AlertType = 110
	QSsl__CertificateUnobtainable      QSsl__AlertType = 111
	QSsl__UnrecognizedName             QSsl__AlertType = 112
	QSsl__BadCertificateStatusResponse QSsl__AlertType = 113
	QSsl__BadCertificateHashValue      QSsl__AlertType = 114
	QSsl__UnknownPskIdentity           QSsl__AlertType = 115
	QSsl__CertificateRequired          QSsl__AlertType = 116
	QSsl__NoApplicationProtocol        QSsl__AlertType = 120
	QSsl__UnknownAlertMessage          QSsl__AlertType = 255
)

type QSsl__ImplementedClass int

const (
	QSsl__Key           QSsl__ImplementedClass = 0
	QSsl__Certificate   QSsl__ImplementedClass = 1
	QSsl__Socket        QSsl__ImplementedClass = 2
	QSsl__DiffieHellman QSsl__ImplementedClass = 3
	QSsl__EllipticCurve QSsl__ImplementedClass = 4
	QSsl__Dtls          QSsl__ImplementedClass = 5
	QSsl__DtlsCookie    QSsl__ImplementedClass = 6
)

type QSsl__SupportedFeature int

const (
	QSsl__CertificateVerification QSsl__SupportedFeature = 0
	QSsl__ClientSideAlpn          QSsl__SupportedFeature = 1
	QSsl__ServerSideAlpn          QSsl__SupportedFeature = 2
	QSsl__Ocsp                    QSsl__SupportedFeature = 3
	QSsl__Psk                     QSsl__SupportedFeature = 4
	QSsl__SessionTicket           QSsl__SupportedFeature = 5
	QSsl__Alerts                  QSsl__SupportedFeature = 6
)
