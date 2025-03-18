FROM debian:latest
RUN apt-get update && \
    apt-get install -y cmake

COPY . /workspace
WORKDIR /workspace/
RUN mkdir build && \
    cd build && \
    cmake .. && \
    make
CMD ["./build/sorting_algorithms"]