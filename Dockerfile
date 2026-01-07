## Build Container
FROM alpine:latest AS builder
RUN apk add gcc musl-dev
WORKDIR /build
COPY malloc.c .
RUN gcc -static malloc.c -o malloc

## Fast Runtime Container
FROM scratch
COPY --from=builder /build/malloc /malloc
CMD ["/malloc"]
