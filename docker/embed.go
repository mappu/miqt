// This Go file exports all the *.Dockerfile files for miqt-docker to use.
package docker

import (
	"embed"
)

//go:embed *.Dockerfile
var Dockerfiles embed.FS

// ReadFile returns the content of one of the dockerfiles.
// That's because an embed.FS appears out-of-package as a []fs.DirEntry, which
// isn't directly readable.
func ReadFile(name string) ([]byte, error) {
	return Dockerfiles.ReadFile(name)
}
