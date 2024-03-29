---
layout: post
title: About NumCosmo
menu: about
css: ['about.css', 'sidebar-popular-repo.css', '../../bower_components/flag-icon-css/css/flag-icon.min.css']
---

## Library Overview

NumCosmo is a powerful numerical cosmology library designed to facilitate calculations
of cosmological observables and analysis of statistical models. It provides a 
comprehensive set of tools that empower researchers and developers in the field of 
cosmology and astrophysics.

The library is implemented in C and takes advantage of the 
[GObject](https://wiki.gnome.org/action/show/Projects/GObjectIntrospection) framework, 
enabling a clean and object-oriented approach to development. 
This design choice enhances the readability and maintainability of the codebase.

## Key Features

- **Numerical Cosmology:** NumCosmo is tailored to perform a wide range of numerical 
    calculations related to cosmology, such as computing cosmological distances, growth
    functions, power spectra, and other essential observables.

- **Statistical Model Analysis:** The library facilitates the analysis of statistical 
    models commonly used in cosmology and astrophysics, enabling researchers to study 
    various hypotheses and theoretical frameworks effectively.

- **Comprehensive Toolset:** NumCosmo offers a comprehensive set of tools that cover 
    various aspects of cosmological research, ensuring researchers have access to the 
    necessary functionalities for their studies.

- **Language Agnostic:** Thanks to the GObject introspection framework, the library 
    automatically generates bindings for multiple programming languages, including 
    Python, Perl, and more. This feature ensures a broad user base and promotes 
    cross-language collaborations.

- **Extended Python Interface:** In addition to the automatic language bindings provided
    by GObject introspection, NumCosmo has an extended Python interface `numcosmo_py` 
    that offers helpful utilities and simplified interfaces. This Python interface is 
    designed to streamline cosmological calculations and analysis for Python developers.

By combining numerical cosmology capabilities with statistical model analysis, NumCosmo 
empowers researchers and developers to delve into complex cosmological phenomena, 
advancing the understanding of the universe and its evolution.

## Available observables

  - Type Ia Supernovae
  - Baryon Acoustic Oscillations
  - Cosmic Microwave Background
  - Cluster number counts
  - Galaxy clusters mass using weak-lensing
  - Hubble data H(z)
  - General cross-correlations module

## Statistical tools

  - [NcmFit](manual/NcmFit.html) The library's best-fit finding capability is highly 
    flexible and versatile, offering the option to use different backend libraries such 
    as [GSL](http://www.gnu.org/software/gsl/) (GNU Scientific Library) and 
    [NLOpt](http://ab-initio.mit.edu/wiki/index.php/NLopt). This feature allows 
    researchers to choose the most suitable optimization library based on their specific 
    requirements and preferences, enhancing the overall efficiency and effectiveness of 
    the best-fit finding process.
  - [Fisher](manual/NcmFit.html#ncm-fit-fisher) Fisher Matrix: The library supports the 
    computation of the Fisher matrix, offering parameter estimation and analysis of 
    parameter uncertainties. It includes an 
    adaptive numerical differentiation algorithm [NcmDiff](manual/NcmDiff.html), 
    providing efficient and accurate computation of the Fisher matrix and best-fit 
    parameters.
  - [NcmLHRatio1d](manual/NcmLHRatio1d.html) and [NcmLHRatio2d](manual/NcmLHRatio2d.html) 
    Likelihood Ratio Test: The library enables the computation of confidence regions 
    using the likelihood ratio test, providing a powerful tool for parameter estimation 
    and model comparison.
  - [NcmFitMC](manual/NcmFitMC.html) Monte Carlo -- resampling and fitting.
  - [NcmFitESMCMC](manual/NcmFitESMCMC.html) Ensemble Sampler MCMC -- Ensemble Markov 
    Chain Monte Carlo consists in every point of the MCMC chain being a emsemble of 
    points in the parameter space. It implements an affine invariant move method 
    (stretch move) and an Approximate Posterior Ensemble Sampler 
    ([APES](https://doi.org/10.1093/mnras/stad2245)) algorithm for efficient sampling
    of challenging distributions. APES utilizes kernel density estimation and radial 
    basis interpolation, leading to faster convergence and improved acceptance 
    probability compared to traditional MCMC methods.

All the methods mentioned above generate a catalog using 
[NcmMSetCatalog](manual/NcmMSetCatalog.html), providing a unified approach for analyzing
the results. The use of a catalog also enables support for resuming algorithms from a 
previous crash and enhances precision by allowing extensions to computations. This 
catalog-based system streamlines the analysis process and ensures robustness in handling 
unforeseen interruptions or the need for additional computations.

These are just a few examples of the main objects and data support offered by NumCosmo. 
In reality, the library encompasses a wide array of additional statistical tools and 
cosmological computations, making it a comprehensive and versatile toolkit for 
researchers and developers in the field of cosmology and astrophysics. 

## Authors

* Sandro Dias Pinto Vitenti <vitenti@uel.br>
* Mariana Penna-Lima <pennalima@gmail.com>
* Cyrille Doux <cdoux@apc.in2p3.fr>

