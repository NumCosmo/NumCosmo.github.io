---
layout: post
title: Download and installation
---

## Download

Version {{ site.version }} of NumCosmo is the latest release version available at
NumCosmo's GitHub page [github releases](https://github.com/NumCosmo/NumCosmo/releases).

To compile NumCosmo on a Mac OS, you can use HomeBrew. The compilation steps can be found in [NumCosmo GitHub actions](https://github.com/NumCosmo/NumCosmo/blob/master/.github/workflows/build_check.yml), providing a detailed, step-by-step process.

[![Build Status](https://github.com/NumCosmo/NumCosmo/workflows/Build%20and%20Check/badge.svg)](https://github.com/NumCosmo/NumCosmo/actions) [![License: GPL v3](https://img.shields.io/badge/License-GPLv3-blue.svg)](https://www.gnu.org/licenses/gpl-3.0) [![Coverage Status](https://coveralls.io/repos/github/NumCosmo/NumCosmo/badge.svg?branch=master)](https://coveralls.io/github/NumCosmo/NumCosmo?branch=master)

## Install using conda

For non-developers, NumCosmo and all necessary dependencies can be installed using conda.
If you don't have conda installed, you can download the full Anaconda distribution from [here](https://www.anaconda.com/download/) or Miniconda from [here](https://conda.io/miniconda.html).

### Installing NumCosmo using conda-forge

To streamline the installation process of NumCosmo, conda-forge offers a convenient option. You have the flexibility to install NumCosmo either by explicitly setting the conda-forge channel or by utilizing a conda-forge-only environment, accessible for download [here](https://github.com/conda-forge/miniforge). Additionally, it's worth noting that mamba, a faster and more robust alternative to conda, can be seamlessly used as a drop-in replacement.

#### Using Miniforge:

We recommend using Miniforge, to install NumCosmo from the conda-forge channel, which provides pre-compiled binaries for Linux and macOS. 
You can install it with: (assuming you have already installed Miniforge or have `conda-forge` in your channels list)

```bash
mamba install numcosmo
```

## Developer installation

For developers, NumCosmo can be installed from the source code.
This provides the latest version of the code on the master branch.
It is recommended for those interested in contributing to the project.

### Requirements

The requirements below can be found on most Linux distribution, click [here](#pack_deb) for a list of packages names for debian-like distributions and  [here](#pack_rpm) for rpm based distributions.

  - C compiler (gcc, clang, icc, etc)
  - Fortran compiler (gfortran, ifort, etc)
  - [Glib](http://www.gtk.org/) >= 2.44.0 --
    Data structures, threads, portability, memory allocation, etc.
  - [GSL](http://www.gnu.org/software/gsl/)  >= 2.4 --
    Several computational tools.
  - [GMP](http://gmplib.org/)  >= 4.3.2 --
    Big integers library.
  - [MPFR](http://www.mpfr.org/) >= 2.4.2 --
    Multiple precision float library.
  - [GObject-introspection](https://wiki.gnome.org/action/show/Projects/GObjectIntrospection):
    Middleware layer between C libraries (using GObject) and language bindings. It is needed to use NumCosmo from other languages.
  - [PyGObject](https://wiki.gnome.org/action/show/Projects/PyGObject) --
    Needed to use NumCosmo from Python. Note that pygobject3 refers to the PyGObject version (not Python's version).
  - [CFITSIO](http://heasarc.nasa.gov/fitsio/fitsio.html) --
    A library of C and Fortran subroutines for reading and writing data files in FITS (Flexible Image Transport System) data format.
  - [FFTW3](http://www.fftw.org/) >= 3.1.2 --
    Discrete Fourier transform library.

### Recommended packages

  - [NLOpt](http://ab-initio.mit.edu/wiki/index.php/NLopt) -- Several general purpose minimization algorithms.
  - [libfyaml](https://github.com/pantoniou/libfyaml) -- A fancy 1.2 YAML and JSON parser/writer.

### Optional packages

  - Any optimized BLAS library (OpenBLAS, MKL, etc)
    Improve speed in linear algebra calculati ons, e.g,
    * <http://www.openblas.net/>
    * <https://software.intel.com/en-us/intel-mkl>
  - [Lapack](http://www.netlib.org/lapack/) --
    Linear Algebra PACKage
  - [gtk-doc](https://www.gtk.org/gtk-doc/)
    GTK-Doc is used to generate API documentation from comments added to C code, only needed to generate new releases.
  - [ARB](http://fredrikj.net/arb/)
    C library for arbitrary-precision interval arithmetic.

### Installing Prerequisites

To streamline the installation process, we provide instructions for installing prerequisites on Debian-like systems (including Ubuntu) and Mac OS using Homebrew.

#### Debian-like Systems (including Ubuntu) <a id="pack_deb"></a>

On Debian-like systems, you can install the required packages from the main repositories using the following command:
```bash
sudo apt-get install \
gobject-introspection \
gir1.2-glib-2.0 \
libgirepository1.0-dev \
gcc \
gfortran \
pkg-config \
libglib2.0-dev \
libgmp3-dev \
libmpfr-dev \
libgsl0-dev \
libfftw3-dev \
libopenblas-dev \
libflint-arb-dev \
libcfitsio-dev \
libfyaml-dev \
libnlopt-dev \
libhdf5-dev \
gtk-doc-tools
```

#### Mac OS using Homebrew

For Mac OS users, Homebrew simplifies the installation process. Execute the following command to install the required packages:
```bash
brew install \
gobject-introspection \
gsl \
gmp \
mpfr \
fftw \
cfitsio \
libfyaml \
nlopt \
gfortran \
gtk-doc \
glib \
openblas
```

#### Python packages using pip

For Python-related functionality and building system, install the following using pip:
```bash
pip install meson ninja pytest numpy
```

### Building from repository: <a id="brepo"></a>

To build from the git repository you can follow the steps below. 
These instructions are for developers, if you just want to use NumCosmo, you should install it using conda.

NumCosmo uses the [meson](https://mesonbuild.com/) build system, which requires python3. 
Meson is available on most distributions, but if you don't have it, you can follow the [instructions](https://mesonbuild.com/SimpleStart.html).

  - Configure the project, here we use the default options:
    ```bash
    git clone https://github.com/NumCosmo/NumCosmo.git
    cd NumCosmo
    meson setup build
    ```
  - Compile everything
    ```bash
    meson compile -C build
    ```
  - Optionally run the library unit testing
    ```bash
    meson test -C build
    ```
  - Install the library. 
  Note that most developers **don't** want to install the library since they want to update/modify the library without installing it. 
    ```bash
    meson install -C build
    ```
  - To use the library without installing it, you need to export some environment variables.
    A script is generated in the build directory, so the user can just run (and optionally add to the shell initialization):
    ```bash
    source build/numcosmo_export.sh
    ```

### Compiling example_simple.c

```bash
cd $NUMCOSMO_DIR/examples

gcc -D_GNU_SOURCE -Wall example_simple.c -o example_simple -lnumcosmo -lgsl -lm $(pkg-config glib-2.0 gobject-2.0 --libs --cflags)
```

{% include disqus-comments.html %}
