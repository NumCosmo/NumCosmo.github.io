---
layout: post
title: New release - 0.14.2
category: News
tags: [news]
---

## New Release - 0.14.2

This release includes several bug fixes and improvements. For a complete
list see the [ChangeLog](https://github.com/NumCosmo/NumCosmo/blob/master/ChangeLog.md).

Among the improvements are:
- Upgrade the CLASS back end to use CLASS 2.7.1.
- New unit tests comparing NumCosmo with CCL.
- Encapsulated the latest version of Sundials (4.1.0) to avoid code branching due to constant API changes in Sundials.
- New (unstable) Approximate Posterior Sampling' APS based on RBF interpolation using (NcmStatsDistNdKDEGauss) implemented as a walker for NcmFitESMCMC.
- Implemented generic MPI support. Added ESMCMC MPI support.
- Optional support for HDF5.
- New 1D interpolation object NcmSplineRBF.
- Finished support for Planck lensing likelihood.
- Added new NcHIQG1D for integrating Quantum Cosmology wave-functions and the associated Bohmian trajectories.


Now NumCosmo is on Binder! [![Binder](https://mybinder.org/badge_logo.svg)](https://mybinder.org/v2/gh/NumCosmo/NumCosmo/master)

Click on the link above and navigate to the notebooks directory.

