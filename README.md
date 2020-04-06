# main.cpp
My attempt in creating a simple C++ starter project.

### Notes
- **Even though this is still a work in progress, this template can already be used.**
- Libraries in `third_party` are just here for the demonstration.
- `.gitignore` assumes that VS Code is used.
- `.gitignore` assumes that the project is built inside `build` directory.
- `.dockerignore` assumes that the project is built inside `build` directory.

### Building and Running
#### Conventionally (without Docker)
Build all:
```
mkdir build
cd build
cmake ..
cmake --build .
```

Run the app:
```
./build/main
```

Run the tests:
```
./build/test
```

#### With Docker
Build the app:
```
docker build -t main.cpp .
```

Run the app:
```
docker run -it --rm main.cpp
```

### TODO
- [ ] Write TODO.