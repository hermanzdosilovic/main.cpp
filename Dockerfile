FROM gcc:9.3.0 AS build
RUN apt-get update && \
    apt-get install -y --no-install-recommends \
        cmake \
        ninja-build && \
    rm -rf /var/lib/apt/lists/*
WORKDIR /app
COPY . .
RUN mkdir build && \
    cd build && \
    cmake -GNinja -DCMAKE_BUILD_TYPE=Release .. && \
    cmake --build . --target main

FROM gcc:9.3.0 AS production
WORKDIR /app
COPY --from=build /app/build/main .
COPY LICENSE .
CMD ["./main"]
