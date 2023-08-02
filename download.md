---
layout: post
title: Download and installation
---

## Download

Version {{ site.version }} of NumCosmo is the latest release version available at
NumCosmo's GitHub page [github releases](https://github.com/NumCosmo/NumCosmo/releases).

To compile NumCosmo on a Mac OS, you can use HomeBrew. The compilation steps can be found in [NumCosmo GitHub actions](https://github.com/NumCosmo/NumCosmo/blob/master/.github/workflows/build_check.yml),
providing a detailed, step-by-step process.

[![Build Status](https://github.com/NumCosmo/NumCosmo/workflows/Build%20and%20Check/badge.svg)](https://github.com/NumCosmo/NumCosmo/actions) [![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0) [![Coverage Status](https://coveralls.io/repos/github/NumCosmo/NumCosmo/badge.svg?branch=master)](https://coveralls.io/github/NumCosmo/NumCosmo?branch=master)

## Install using conda

NumCosmo and all necessary dependencies can be installed using conda. 
If you don't have conda installed, you can download the full Anaconda distribution from [here](https://www.anaconda.com/download/) or Miniconda from [here](https://conda.io/miniconda.html).

### Installing NumCosmo without conda-forge

To install NumCosmo without adding conda-forge to the installation channels, use the following command:

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

  - [Glib](http://www.gtk.org/) >= 2.44.0 --
    Data structures, threads, portability, memory allocation, etc.
  - [GSL](http://www.gnu.org/software/gsl/)  >= 1.15 --
    Several computational tools.
  - [GMP](http://gmplib.org/)  >= 4.3.2 --
    Big integers library.
  - [MPFR](http://www.mpfr.org/) >= 2.4.2 --
    Multiple precision float library.

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
    - NLopt and cfitsio can be found with the following package names: *libnlopt-dev*, *libcfitsio3-dev*.

### Packages on RPM based distributions (including Fedora, OpenSuse, etc) <a id="pack_rpm"></a>

  - For most systems the following packages can be found in the main repositories: *pkg-config*, *gobject-introspection-devel*, *glib2-devel*, *gsl-devel*, *gmp-devel*, *mpfr-devel*, *fftw3-devel*.
    - If you want to build from the repository you also need: *autoconf*, *automake*, *libtool*, *gtk-doc*.
  - The other packages that are usually not found on the official repositories:
    - NLopt, cfitsio, and lapack can be found with the following package names: *nlopt-devel*, *libcfitsio-devel*, *lapack-devel*, *atlas-devel*, *lapack-devel*.

## Building from repository: <a id="brepo"></a>

To build from the git repository, you need to follow these steps before [configuring and compiling](#brelease).

  - Generate the configure scripts:
    ```bash
    cd NumCosmo
    ./autogen.sh
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
  - Configure the project (preferably out-source):
    ```bash
    cd NumCosmo
    mkdir build
    cd build
    ../configure OPTIONS
    ```
  - To compile a optimized version one can use the following options
    ```bash
    --enable-opt-cflags CFLAGS="-O3 -march=native -Wall -g" FCFLAGS="-O3 -march=native -Wall -g" FFLAGS="-O3 -march=native -Wall -g"
    ```
  - Compile everything
    ```bash
    make (-j4 to compile using 4 parallel jobs)
    ```
  - Optionally run the library unit testing
    ```bash
    make check
    ```
  - Install the library (only if you know what you are doing)
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

We need to export some environment variables. A script is generated in the build directory, so the user can just run (and optionally add to the shell initialization):
  ```bash
  source $HOME/cosmology/NumCosmo/build/numcosmo_export.sh
  ```

### Compiling example_simple.c

```bash
cd $NUMCOSMO_DIR/examples

gcc -D_GNU_SOURCE -Wall example_simple.c -o example_simple -lnumcosmo -lgsl -lm $(pkg-config glib-2.0 gobject-2.0 --libs --cflags)
```

{% include disqus-comments.html %}
