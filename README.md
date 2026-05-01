# Hello Module

A module that returns a greeting message 'hello'.

## Build

```bash
nix flake update           # first time only
nix build '.#lgx-portable'
```

Produces `result/hello_module.lgx`. Install into Basecamp's modules dir
(`~/Library/Application Support/Logos/LogosBasecamp/modules/hello_module/` on macOS).

## Layout

- `src/hello_module_impl.h` — public API (pure C++, std types only)
- `src/hello_module_impl.cpp` — implementation (Qt allowed inside)
- `metadata.json` — module manifest with `"interface": "universal"`
- `flake.nix` — runs `logos-cpp-generator` in `preConfigure` to emit `generated_code/`
- `CMakeLists.txt` — `logos_module()` target

## Calling from QML

```qml
var raw = logos.callModule("hello_module", "getMessage", []);
// raw is a JSON-encoded string. Parse + extract:
var v = JSON.parse(raw);
```

## Editing

Public method signatures live in `HelloModuleImpl` in `src/hello_module_impl.h`.
Implementation lives in `src/hello_module_impl.cpp`. Add private state to the
`Private` pimpl class (already there if any Qt-typed state was declared).
