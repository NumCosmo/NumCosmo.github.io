---
layout: post
title: Download and installation
---

## Download

Version {{ site.version }} of NumCosmo is the latest release version available from our web
[releases site](http://download.savannah.gnu.org/releases/numcosmo/), the
releases can also be found at NumCosmo github page [github releases](https://github.com/NumCosmo/NumCosmo/releases).
You can also download the master branch [zip]({{site.github.repo}}/archive/master.zip)
or [tarball]({{site.github.repo}}/archive/master.tar.gz).
There are pre-compiled packages in [openSUSE Build Service](https://build.opensuse.org/project/show?project=home%3Avitenti).
To compile NumCosmo on a Mac OS, it is possible to use HomeBrew, at [NumCosmo travis-ci page](https://travis-ci.org/NumCosmo/NumCosmo)
one can find the log of the compilation containing the step-by-step process.

Travis-ci test build: [![Build Status](https://travis-ci.org/NumCosmo/NumCosmo.svg?branch=master)](https://travis-ci.org/NumCosmo/NumCosmo)

## Install using conda

NumCosmo and all necessary dependencies can be installed using conda (for the full anaconda installation click 
[here](https://www.anaconda.com/download/) or [here](https://conda.io/miniconda.html) for miniconda).
It is possible to install numcosmo with and without adding conda-forge to the installation channels:

  - without adding conda-forge.
    ```bash
    conda install -c conda-forge numcosmo
    ```
  - with conda-forge added to channels:
    ```bash
    conda config --add channels conda-forge
    conda install numcosmo
    ```

## Requirements

The requirements below can be found on most Linux distribution, click [here](#pack_deb)
for a list of packages names for debian-like distributions and [here](#pack_rpm) for
rpm based distributions.

  - [Glib](http://www.gtk.org/) >= 2.28.0 --
    Data structures, threads, portability, memory allocation, etc.
  - [GSL](http://www.gnu.org/software/gsl/)  >= 1.15 --
    Several computational tools.
  - [GMP](http://gmplib.org/)  >= 4.3.2 --
    Big integers library.
  - [MPFR](http://www.mpfr.org/) >= 2.4.2 --
    Multiple precision float library.
  - [Sundials](https://computation.llnl.gov/casc/sundials/main.html) >= 2.4.0 --
    ODE solver library. This library is now encapsulated in NumCosmo build system and it is no longer required.

## Recommended packages

  - [GObject-introspection](https://wiki.gnome.org/action/show/Projects/GObjectIntrospection):
    Middleware layer between C libraries (using GObject) and language bindings. It is needed to use NumCosmo from other languages.
  - [PyGObject](https://wiki.gnome.org/action/show/Projects/PyGObject) --
    Needed to use NumCosmo from Python. Note that pygobject3 refers to the PyGObject version (not Python's version).
  - [NLOpt](http://ab-initio.mit.edu/wiki/index.php/NLopt) --
    Several general purpose minimization algorithms.
  - [CFITSIO](http://heasarc.nasa.gov/fitsio/fitsio.html) --
    A library of C and Fortran subroutines for reading and writing data files in FITS (Flexible Image Transport System) data format.
  - [FFTW3](http://www.fftw.org/) >= 3.1.2 --
    Discrete Fourier transform library.

## Optional packages

  - Any optimized BLAS library (ATLAS, OpenBLAS, MKL, etc)
    Improve speed in linear algebra calculations, e.g,
    * <http://math-atlas.sourceforge.net/>
    * <http://www.openblas.net/>
    * <https://software.intel.com/en-us/intel-mkl>
  - [Lapack](http://www.netlib.org/lapack/) --
    Linear Algebra PACKage    
  - [gtk-doc](https://www.gtk.org/gtk-doc/)
    GTK-Doc is used to generate API documentation from comments added to
    C code, only needed to generate new releases.
  - [ARB](http://fredrikj.net/arb/)
    C library for arbitrary-precision interval arithmetic.

## Packages from popular distributions

Many prerequisites and optional packages can be found in popular distributions. 
Below there is a small compilation of package names for some distributions.

### Packages on Debian like systems (including Ubuntu) <a id="pack_deb"></a>

  - For most systems the following packages can be found in the main repositories: *gobject-introspection*, *gir1.2-glib-2.0*, *libgirepository1.0-dev*, *gcc*, *pkg-config*, *libglib2.0-dev*, *libgmp3-dev*, *libmpfr-dev*, *libgsl0-dev*, *libfftw3-dev*.
    - If you want to build from the repository you also need: *autotools-dev*, *libtool*, *gtk-doc-tools*.
  - The other packages that are usually not found on the official repositories:
    - For atlas support on Debian see: <http://wiki.debian.org/DebianScience/LinearAlgebraLibraries>.
    - For atlas support on Ubuntu you need something similar to: *libatlas-base-dev*, *liblapack-dev*.
    - NLopt and cfitsio sometimes can be found with the following package names: *libnlopt-dev*, *libcfitsio3-dev*.

### Packages on RPM based distributions (including Fedora, OpenSuse, etc) <a id="pack_rpm"></a>

  - For most systems the following packages can be found in the main repositories: *pkg-config*, *gobject-introspection-devel*, *glib2-devel*, *gsl-devel*, *gmp-devel*, *mpfr-devel*, *fftw3-devel*.
    - If you want to build from the repository you also need: *autoconf*, *automake*, *libtool*, *gtk-doc*.
  - The other packages that are usually not found on the official repositories:
    - NLopt, cfitsio, lapack and atlas sometimes can be found with the following package names: *nlopt-devel*, *libcfitsio-devel*, *lapack-devel*, *atlas-devel*, *lapack-devel*.

## Building from repository: <a id="brepo"></a>

To build from the git repository, you need to follow these steps before [configuring and compiling](#brelease).

  - Generate the configure scripts and also run configure:
    ```bash
    ./autogen.sh
    ```
  - Generate the configure scripts only:
    ```bash
    NOCONFIGURE=yes ./autogen.sh
    ```
    - The configure script is built at this point.
      Note that this requires the autotools developer enviroment (latest version recommended):
      - [autoconf](http://ftp.gnu.org/gnu/autoconf/)
      - [automake](http://ftp.gnu.org/gnu/automake/)
      - [libtool](http://ftp.gnu.org/gnu/libtool/)

      And to include support for releases and bindings:
      - [gtk-doc](http://www.gtk.org/gtk-doc/)
      - [gobject-introspection](https://wiki.gnome.org/action/show/Projects/GObjectIntrospection)


## Configuring and compiling: <a id="brelease"></a>

To build from a release package or after preparing the configure script, run:
  - Configure the project
    ```bash
    ./configure (--help to see options)
    ```
    - To build NumCosmo for maximum speed use the command:
      ```bash
      ./configure --enable-opt-cflags CFLAGS="-O3 -march=native"
      ```
      However, note that this will generate non-portable binaries.
  - Compile everything
    ```bash
    make (-j4 to compile using 4 parallel jobs)
    ```
  - Optionally run the library unit testing
    ```bash
    make check
    ```
  - Install the library
    ```bash
    make install
    ```
    - Most users **don't** want to install the library since it is easier to
    update/modify the library when you don't. See instructions
    [here](#noinstall) on how to use the library without installing it.

For a generic installation instructions, see INSTALL.

## Using the library without installing it: <a id="noinstall"></a>

The library can be used without installing it to the system. First unpack a
release in your chosen folder (here we use *$HOME/cosmology*), or clone it
from github:

  - Download and unpacking a release and create a link to it:
```bash
mkdir $HOME/cosmology
cd $HOME/cosmology
wget http://download.savannah.gnu.org/releases/numcosmo/numcosmo-{{ site.version }}.tar.gz
tar xvhf numcosmo-{{ site.version }}.tar.gz
rm -f NumCosmo
ln -s numcosmo-{{ site.version }} NumCosmo
```
  - Cloning from github:
```bash
mkdir $HOME/cosmology
cd $HOME/cosmology
git clone https://github.com/NumCosmo/NumCosmo.git
```
If you are using the github version, you need to first [generate the configure script](#brepo).
Then, configure and compile the library as described [above](#brelease), but **don't** *make install*.

We need to export some environment variables:
  - The base NumCosmo directory:
  ```bash
  export NUMCOSMO_DIR=$HOME/cosmology/NumCosmo
  export NUMCOSMO_BUILD_DIR=$HOME/cosmology/NumCosmo
  ```
  Note that here we are building in the source directories, in a out-of-source
  build NUMCOSMO_BUILD_DIR should point to the build directory.
  - The NumCosmo's library directory to allow the dynamic loader to find it
  ```bash
  export LD_LIBRARY_PATH="${LD_LIBRARY_PATH}:${NUMCOSMO_BUILD_DIR}/numcosmo/.libs/"
  ```
  - NumCosmo's data path to allow numcosmo to find the data files
  ```bash
  export NUMCOSMO_DATA_DIR="${NUMCOSMO_DIR}"
  ```
  - Typelib path to allow the bindings to find NumCosmo
  ```bash
  export GI_TYPELIB_PATH="${GI_TYPELIB_PATH}:${NUMCOSMO_BUILD_DIR}/numcosmo"
  ```

It is also a good idea to automate this process by adding these lines to your *.bashrc*:
```bash
export NUMCOSMO_DIR=$HOME/cosmology/NumCosmo
export NUMCOSMO_BUILD_DIR=$HOME/cosmology/NumCosmo
export LD_LIBRARY_PATH="${LD_LIBRARY_PATH}:${NUMCOSMO_BUILD_DIR}/numcosmo/.libs/"
export NUMCOSMO_DATA_DIR="${NUMCOSMO_DIR}"
export GI_TYPELIB_PATH="${GI_TYPELIB_PATH}:${NUMCOSMO_BUILD_DIR}/numcosmo"
```

### Compiling example_simple.c

```bash
cd $NUMCOSMO_DIR/examples

libtool --mode=link gcc -Wall example_simple.c -o example_simple  \
  ${NUMCOSMO_BUILD_DIR}/numcosmo/libnumcosmo.la -I${NUMCOSMO_DIR} \
  -I${NUMCOSMO_BUILD_DIR} `pkg-config --cflags glib-2.0`
```

{% include disqus-comments.html %}
