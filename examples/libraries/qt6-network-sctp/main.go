package main

import (
	"log"
	"os"

	qt "github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/network"
	"github.com/mappu/miqt/qt6/network/sctp"
)

func main() {

	qt.NewQApplication(os.Args)

	// Set up server
	// `````````````

	localAddr := network.NewQHostAddress7(network.QHostAddress__LocalHost)

	srv := sctp.NewQSctpServer()
	if !srv.ListenWithAddress(localAddr) {
		log.Fatal("SCTP server: Listen failure")
	}

	srv.OnNewConnection(func() {
		log.Println("SCTP server: got connection")
		recv := srv.NextPendingDatagramConnection() // QSctpSocket

		recv.OnChannelReadyRead(func(channel int) {
			dg := recv.ReadDatagram()
			log.Printf("SCTP server: channel %v: received message %q", channel, string(dg.Data()))

			// Success, experiment over
			os.Exit(0)
		})

	})

	localPort := srv.ServerPort()

	// Set up client
	// `````````````

	c := sctp.NewQSctpSocket()

	c.OnErrorOccurred(func(param1 network.QAbstractSocket__SocketError) {
		log.Println("SCTP client: error")
	})

	c.OnConnected(func() {
		log.Println("SCTP client: connected, sending message...")

		dg := network.NewQNetworkDatagram2([]byte("i am the client sending a message"))
		ok := c.WriteDatagram(dg)
		if !ok {
			log.Fatalf("WriteDatagram failure")
		}
		log.Println("SCTP client: message sent OK")
	})

	log.Println("SCTP client: connecting...")
	c.ConnectToHost2(localAddr, localPort)

	// Blocking event loop
	// ```````````````````

	qt.QApplication_Exec()
}
