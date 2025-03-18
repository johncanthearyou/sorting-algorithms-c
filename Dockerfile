FROM debian:latest
RUN apt-get update && \
    apt-get install -y clang lldb-16
COPY . /workspace
WORKDIR /workspace/
RUN clang main.c -std=c99 -Wall -Werror -fsanitize=address -o program && \
    clang main.c -std=c99 -Wall -Werror -g -o debug
CMD ["lldb-16", "-o", "run", "debug"]
