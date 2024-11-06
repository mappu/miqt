package main

import (
	"log"
	"os"
	"path/filepath"

	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/multimedia"
)

func main() {

	qt.NewQApplication(os.Args)

	srcFile, err := filepath.Abs("pixabay-public-domain-strong-hit-36455.mp3")
	if err != nil {
		panic(err)
	}

	content := multimedia.NewQMediaContent2(qt.QUrl_FromLocalFile(srcFile))

	player := multimedia.NewQMediaPlayer()
	player.SetMedia(content)
	player.SetVolume(50)
	player.OnStateChanged(func(s multimedia.QMediaPlayer__State) {

		log.Printf("- Playback state: %v", s)

		if s == multimedia.QMediaPlayer__StoppedState {
			log.Printf("Playback complete.")
			qt.QCoreApplication_Exit()
		}
	})

	log.Printf("Playback starting...")
	player.Play()

	qt.QApplication_Exec()
}
