# This container is
# - Baseline debian 12 for broad Qt 6 compatibility
# - Added recent Go compiler

FROM debian:bookworm

RUN DEBIAN_FRONTEND=noninteractive apt-get update && \
    apt-get install -qyy wget qt6-base-dev build-essential pkg-config && \
    apt-get clean

RUN wget 'https://go.dev/dl/go1.26rc1.linux-amd64.tar.gz' && \
	tar x -C /usr/local/ -f go1.26rc1.linux-amd64.tar.gz && \
	rm go1.26rc1.linux-amd64.tar.gz
	
ENV PATH=/usr/local/go/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
ENV CGO_ENABLED=1
