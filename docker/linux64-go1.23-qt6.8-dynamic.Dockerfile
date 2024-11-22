FROM fedora:41

RUN dnf -y --setopt=install_weak_deps=False install \
	qt6-qtbase-devel.x86_64 \
	golang.x86_64
