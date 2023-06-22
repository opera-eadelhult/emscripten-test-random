# Setup
Download the secure-random dependency
```bash
go run github.com/piot/deps/src/deps@main fetch
```

Build the make-files with the emcmake helper:
```bash
emcmake cmake  -B embuild/debug-emscripten -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug
```

Build the Emscripten runner: 
```bash
cmake --build embuild/debug-emscripten/
```