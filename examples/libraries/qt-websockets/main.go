package main

import (
	"log"
	"os"
	"strconv"
	"strings"

	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/network"
	"github.com/mappu/miqt/qt/websockets"
)

const (
	LOCAL_PORT  = 12345
	NUM_CLIENTS = 3
	MAX_CLIENTS = 10
	OFFSET_X    = 200
)

var (
	clients       = make(map[int]*websockets.QWebSocket, MAX_CLIENTS)
	clientDialogs = make(map[int]*ClientDialog, NUM_CLIENTS)
)

type ClientDialog struct {
	name     string
	dialog   *qt.QDialog
	socket   *websockets.QWebSocket
	messages *qt.QTextEdit
	input    *qt.QLineEdit
	button   *qt.QPushButton
}

func NewClientDialog(name string, clientNumString string) *ClientDialog {
	var self ClientDialog

	self.name = clientNumString

	self.dialog = qt.NewQDialog2()
	self.dialog.SetWindowTitle(name)
	self.dialog.SetMinimumSize2(400, 300)

	self.socket = websockets.NewQWebSocket()
	self.socket.SetParent(self.dialog.QWidget.QObject)

	self.messages = qt.NewQTextEdit(self.dialog.QWidget)
	self.messages.SetReadOnly(true)

	self.input = qt.NewQLineEdit(self.dialog.QWidget)
	self.input.SetPlaceholderText("Enter your message here")
	self.input.SetEnabled(false)

	self.button = qt.NewQPushButton5("Send", self.dialog.QWidget)
	self.button.SetEnabled(false)

	layout := qt.NewQVBoxLayout2()
	inputLayout := qt.NewQHBoxLayout2()

	layout.AddWidget(self.messages.QWidget)
	inputLayout.AddWidget(self.input.QWidget)
	inputLayout.AddWidget(self.button.QWidget)
	layout.AddLayout(inputLayout.QLayout)
	self.dialog.SetLayout(layout.QLayout)

	self.socket.OnConnected(func() {
		for _, client := range clientDialogs {
			if self.socket == client.socket {
				self.messages.Append("Connected!")
				self.input.SetEnabled(true)
				self.button.SetEnabled(true)
				self.input.SetFocus()
				return
			}
		}
	})

	self.socket.OnTextMessageReceived(func(message string) {
		self.messages.Append(message)
	})

	self.dialog.OnCloseEvent(func(super func(param1 *qt.QCloseEvent), param1 *qt.QCloseEvent) {
		for _, client := range clientDialogs {
			client.socket.Close()
			client.dialog.Delete()
			super(param1)
		}
	})

	self.button.OnClicked(func() {
		message := strings.TrimSpace(self.input.Text())
		if message == "" {
			return
		}

		self.socket.SendTextMessage("(" + self.name + "): " + message)
		self.messages.Append(">> " + message)
		self.input.Clear()
	})

	return &self
}

func (this *ClientDialog) ConnectToServer() {
	this.messages.Append("Connecting...")

	url := qt.NewQUrl3("ws://localhost:" + strconv.Itoa(LOCAL_PORT))
	defer url.Delete()

	this.socket.Open(url)
}

func main() {
	qt.NewQApplication(os.Args)

	server := websockets.NewQWebSocketServer("Example Qt WebSockets Server", websockets.QWebSocketServer__NonSecureMode)
	defer server.Delete()

	localhost := network.NewQHostAddress8(network.QHostAddress__LocalHostIPv6)
	defer localhost.Delete()

	if !server.Listen2(localhost, LOCAL_PORT) {
		errorMessage := server.ErrorString()
		log.Fatalln("Failed to listen on port " + strconv.Itoa(LOCAL_PORT) + ": " + errorMessage)
	}

	for i := 0; i < NUM_CLIENTS; i++ {
		numStr := strconv.Itoa(i + 1)
		name := "Qt 5 WebSockets Example Client #" + numStr
		clientDialogs[i] = NewClientDialog(name, numStr)

		clientDialogs[i].ConnectToServer()

		clientDialogs[i].dialog.Show()
		width := clientDialogs[i].dialog.Width()
		y := clientDialogs[i].dialog.Y()
		clientDialogs[i].dialog.Move(OFFSET_X+(width+10)*i, y)
	}

	clientNum := 0
	server.OnNewConnection(func() {
		client := server.NextPendingConnection()
		if clientNum >= MAX_CLIENTS {
			client.Close()
			return
		}

		clients[clientNum] = client
		clientNum++

		client.OnTextMessageReceived(func(message string) {
			for _, c := range clients {
				if client == c {
					continue
				}
				c.SendTextMessage(message)
			}
		})

		client.OnDisconnected(func() {
			client.DeleteLater()
		})
	})

	qt.QApplication_Exec()
}
