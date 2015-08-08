# test hiearchy of code

Tests multiple applications dependent on one or more libraries
using [Meson](https://github.com/mesonbuild/meson) as the build system

To build create a build directory and run meson from that directory
```
mkdir build
cd build
meson ..
```

Then run ninja to build the project, the -v parameter
means verbose and you'll see all of the commands. Of
course that is optional.
```
ninja -v
```

Finally, run the applications:
```
./apps/testadd/testadd
./apps/testaddsub/testaddsub
```

Meson creates a clean target which will rebuild everything on the next
invocation of ninja
```
ninja clean
ninja
```

Meson also manages rebuild the build.nina file if any modifications
are done to any of the meson.build files. So but you can also just
delete everything in build/ and rerun "meson .." manually.

```
rm -rf * ; meson ..
```

