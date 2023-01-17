# GeoLib building docs

## Building geolib from source

### Required

* [Git](https://git-scm.com)
* [GCC compiler](https://gcc.gnu.org)
* [GNU Make](https://www.gnu.org/software/make/)

---

Install the repository with ``git clone`` first

```sh
$ git clone https://github.com/Equinoxtic/geolib
$ cd geolib
```

## Manual setup

Create a directory called `build` and compile the project with ``make`` and run it like this

```sh
$ mkdir build
$ make -s
$ ./build/geolib.o
```

## Automatic setup

```sh
$ ./setup.sh # Creates the "build" directory for you
$ ./build/geolib.o # Run it and done! :D
```

---

And you're pretty much done!
