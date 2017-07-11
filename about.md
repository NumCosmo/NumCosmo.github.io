---
layout: page
title: About NumCosmo
menu: about
css: ['about.css', 'sidebar-popular-repo.css', '../../bower_components/flag-icon-css/css/flag-icon.min.css']
---

## About NumCosmo

The library is written in C, but since it uses the [GObject](https://wiki.gnome.org/action/show/Projects/GObjectIntrospection) 
framework, it is developed in a object oriented fashion. Moreover, it has automatic
bindings for every language which supports GObject introspection (Perl,
Python, etc. For a complete list see [here](https://wiki.gnome.org/Projects/GObjectIntrospection/Users)).

The available observables objects are:
  - Type Ia Supernovae
  - Baryon Acoustic Oscillations
  - Cosmic Microwave Background
  - Cluster number counts
  - Cluster pseudo number counts
  - Hubble data H(z)

Currently it has the following statistical tools:
  - Monte Carlo ([NcmFitMC](manual/NcmFit.html)) -- resampling and fitting.
  - Monte Carlo Bootstrap (NcmFitMCBS) -- resampling/bootstraping and fitting.
  - Markov Chain Monte Carlo -- MCMC with the Metropolis-Hastings sampler, it supports
    general samplers through transtion kernel object NcmMSetTransKern.
  - Ensemble Sampler MCMC -- Ensemble Markov Chain Monte Carlo consists in
    every point of the MCMC chain being a emsemble of points in the
    parameter space. It implements an affine invariant move method (stretch move).

All methods above generate a catalog using the NcmMSetCatalog which provide
a unified way to analyze the results. Besides, the use of a catalog
provides the support for restarting the algorithms from a previous crash
or to extend the precision.

## Authors

* Sandro Dias Pinto Vitenti <sandro@isoftware.com.br>
* Mariana Penna-Lima <pennalima@gmail.com>
* Cyrille Doux <cdoux@apc.in2p3.fr>

### Mailing Lists

Subscribe to the [numcosmo-help](https://lists.nongnu.org/mailman/listinfo/numcosmo-help)
mailing list for discussion of questions and problems about using
NumCosmo.

