# RenderQueue

RenderQueue is a small C++ static library for tracking renderable scene and object state. It stores scenes, objects, object-to-scene bindings, camera data, colour data, transforms, overlap settings, and a draw-distance visibility check behind a simple facade API.

The repository also includes a Visual Studio test executable that exercises the lower-level domain classes and the public `renderQueue::Implementation` facade.

## Project Layout

```text
.
|-- RenderQueue.sln              # Visual Studio solution
|-- RenderQueue/                 # Static library project
|   |-- RenderQueue.vcxproj
|   `-- src/
|       |-- Facade.h             # Public interface
|       |-- Implementation.h     # Main facade implementation
|       |-- Scenes.*             # Scene storage
|       |-- Objects.*            # Object storage
|       |-- Bindings.*           # Object-to-scene bindings
|       |-- Distance.*           # Camera/object distance calculation
|       |-- Camera.h
|       |-- Transform.h
|       `-- RGBA.h
`-- TestSuite/                   # Console test application
    |-- TestSuite.vcxproj
    `-- src/
```

## Requirements

- Visual Studio 2022 or compatible MSVC tooling
- Windows SDK 10.0
- MSVC platform toolset `v143`

The checked-in projects support `Debug` and `Release` builds for both `x64` and `Win32`.

## Build

Open `RenderQueue.sln` in Visual Studio and build the solution, or build from a Visual Studio Developer Command Prompt:

```bat
msbuild RenderQueue.sln /p:Configuration=Debug /p:Platform=x64
```

The `RenderQueue` project builds as a static library. Build outputs are written under:

```text
bin\<ProjectName>\build\<Configuration>\<Platform>\
bin-int\<ProjectName>\build\<Configuration>\<Platform>\
```

After building `RenderQueue`, its headers are copied to:

```text
bin\RenderQueue\include\
```

## Test

Build and run the `TestSuite` project:

```bat
msbuild RenderQueue.sln /p:Configuration=Debug /p:Platform=x64
bin\TestSuite\build\Debug\x64\TestSuite.exe
```

The test runner prints only failures. An empty console output means all current tests passed. The debug build also enables the MSVC CRT leak checker through `MemoryTest`.

## Basic Usage

Include `Implementation.h`, create a `renderQueue::Implementation`, then push a scene before pushing objects into that scene:

```cpp
#include "Implementation.h"

int main()
{
    renderQueue::Implementation queue;

    queue.pushScene();

    renderQueue::Camera camera{
        0.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 0.0f,
        90.0f,
        1000.0f
    };

    queue.setCamera(camera);
    queue.pushObject();

    renderQueue::Transform transform{
        10.0f, 0.0f, 0.0f,
        0.0f, 0.0f, 0.0f,
        1.0f, 1.0f, 1.0f
    };

    queue.setTransform(transform);

    if (queue.getRender())
    {
        // Object is within the active scene camera's draw distance.
    }
}
```

## API Overview

The main entry point is `renderQueue::Implementation`, which derives from `renderQueue::Facade`.

Scene methods:

- `pushScene()` / `popScene()`
- `getScenes()`
- `setScene(int)`
- `getCamera()` / `setCamera(Camera)`
- `getAmbience()` / `setAmbience(RGBA)`
- `getOverlap()`
- `setOverlap()` / `setNoneoverlap()`

Object methods:

- `pushObject()` / `popObject()`
- `getObjects()`
- `setObject(int)`
- `getTransform()` / `setTransform(Transform)`
- `getColour()` / `setColour(RGBA)`
- `getRender()`

Objects are bound to the currently selected scene when pushed. `getObjects()` returns the number of objects bound to the active scene, and `setObject(int)` selects an object by index within that active scene.

## Defaults

New scenes start with:

- Camera position and rotation set to `0.0f`
- Frustum set to `90.0f`
- Draw distance set to `1000.0f`
- Ambient colour set to white: `1.0f, 1.0f, 1.0f, 1.0f`
- Overlap enabled

New objects start with:

- Position and rotation set to `0.0f`
- Scale set to `1.0f, 1.0f, 1.0f`
- Colour set to white: `1.0f, 1.0f, 1.0f, 1.0f`

## Notes

- The project currently uses Visual Studio project files rather than CMake.
- `pushObject()` is ignored when there are no scenes.
- Index setters clamp negative values to zero. Values beyond the current count wrap to zero.
- `getRender()` currently checks camera-to-object distance against the active scene draw distance.
