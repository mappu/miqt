package main

import (
	"log"
	"os"
	"path/filepath"

	qt "github.com/mappu/miqt/qt6"
	"github.com/mappu/miqt/qt6/multimedia"
)

func main() {

	qt.NewQApplication(os.Args)

	srcFile, err := filepath.Abs("pixabay-public-domain-strong-hit-36455.mp3")
	if err != nil {
		panic(err)
	}

	player := multimedia.NewQMediaPlayer()
	output := multimedia.NewQAudioOutput()

	player.SetAudioOutput(output)
	player.SetSource(qt.QUrl_FromLocalFile(srcFile))
	output.SetVolume(50)
	player.OnPlaybackStateChanged(func(s multimedia.QMediaPlayer__PlaybackState) {

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
