# Use run.bat to quickly build and run the programz
FROM gcc:latest
WORKDIR /workspace/
COPY ./ /workspace/
RUN gcc main.c array/* sort/*/* -o program
CMD ["./program"]