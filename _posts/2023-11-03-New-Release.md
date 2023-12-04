---
layout: post
title: New release - 0.19.0
category: News
tags: [news]
---

## New Release Version 0.19.0

The new release of NumCosmo is version 0.19.0. To view the complete list of changes, refer to the ChangeLog. In this release, various improvements and additions have been made:

Build System Improvements were a significant focus in this release. The transition from autotools to the meson build system was implemented (#120). This involved numerous enhancements and fixes in both the code and build system. Support for generating vala binding was added, outdated factory functions and GSL versions were removed, and HAVE_MPI was introduced. Autotools and makefile leftovers were removed in this transition.

Minor Improvements were made in various aspects. A new sampler was added to the notebook with sampler comparisons, support for weight samples was included, and a bug in ncm_stats_vec.c was fixed where the first element with zero weight resulted in a nan.

Kernel Density Estimation (KDE) LOOCV was another area of focus (#118). Testing for new CV types and optimizing Monte Carlo integration for LOO were conducted.

N-Dimensional Integration was addressed with the creation of tests and documentation for the n-dimensional integration object (#108). This involved creating initial tests, introducing macros to simplify the creation of IntegralND subclasses, and resolving unit test issues.

Documentation and Object Encapsulation were improved in this release (#116). Documentation enhancements were made for various objects, and encapsulation and updates were applied to NcmFit and dependent objects. Tests for NcmFitState and other components were added, and serialization of NcmFit was tested.

MPI Job Enhancement was introduced, where now MPI jobs do not require setting nthreads (#115). Per-rank fftw wisdom is utilized.

Tutorial and Example Updates included the addition of a new tutorial describing 3d correlation (#113). This involved updating FFT code with changes in scale and in the xi function, and adding a generalized Fourier Transform function and its inverse in the calculations.

In Jupyter Notebook, pocoMC and nautilus samplers were added to rosenbrock_simple.ipynb (#112), and the notebook was subsequently updated.

For a complete list see the [ChangeLog](https://github.com/NumCosmo/NumCosmo/blob/master/ChangeLog.md).
