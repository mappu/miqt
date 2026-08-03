package websockets

/*

#include "gen_qwebsocketprotocol.h"
#include <stdlib.h>

*/
import "C"

type QWebSocketProtocol__Version int

const (
	QWebSocketProtocol__VersionUnknown QWebSocketProtocol__Version = -1
	QWebSocketProtocol__Version0       QWebSocketProtocol__Version = 0
	QWebSocketProtocol__Version4       QWebSocketProtocol__Version = 4
	QWebSocketProtocol__Version5       QWebSocketProtocol__Version = 5
	QWebSocketProtocol__Version6       QWebSocketProtocol__Version = 6
	QWebSocketProtocol__Version7       QWebSocketProtocol__Version = 7
	QWebSocketProtocol__Version8       QWebSocketProtocol__Version = 8
	QWebSocketProtocol__Version13      QWebSocketProtocol__Version = 13
	QWebSocketProtocol__VersionLatest  QWebSocketProtocol__Version = 13
)

type QWebSocketProtocol__CloseCode int

const (
	QWebSocketProtocol__CloseCodeNormal                QWebSocketProtocol__CloseCode = 1000
	QWebSocketProtocol__CloseCodeGoingAway             QWebSocketProtocol__CloseCode = 1001
	QWebSocketProtocol__CloseCodeProtocolError         QWebSocketProtocol__CloseCode = 1002
	QWebSocketProtocol__CloseCodeDatatypeNotSupported  QWebSocketProtocol__CloseCode = 1003
	QWebSocketProtocol__CloseCodeReserved1004          QWebSocketProtocol__CloseCode = 1004
	QWebSocketProtocol__CloseCodeMissingStatusCode     QWebSocketProtocol__CloseCode = 1005
	QWebSocketProtocol__CloseCodeAbnormalDisconnection QWebSocketProtocol__CloseCode = 1006
	QWebSocketProtocol__CloseCodeWrongDatatype         QWebSocketProtocol__CloseCode = 1007
	QWebSocketProtocol__CloseCodePolicyViolated        QWebSocketProtocol__CloseCode = 1008
	QWebSocketProtocol__CloseCodeTooMuchData           QWebSocketProtocol__CloseCode = 1009
	QWebSocketProtocol__CloseCodeMissingExtension      QWebSocketProtocol__CloseCode = 1010
	QWebSocketProtocol__CloseCodeBadOperation          QWebSocketProtocol__CloseCode = 1011
	QWebSocketProtocol__CloseCodeTlsHandshakeFailed    QWebSocketProtocol__CloseCode = 1015
)
