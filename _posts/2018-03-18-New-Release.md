---
layout: post
title: New release - 0.14.0
category: News
tags: [news]
---

## New Release - 0.14.0

This release includes several bug fixes and improvements. For a complete
list see the [ChangeLog](https://github.com/NumCosmo/NumCosmo/blob/master/ChangeLog.md).

Among the improvements are:
- New mcat_join tool, it joins different catalogs of the same experiment.
- New Spherical Bessel FFTLog code.
- Added a minimal interface for massive neutrinos.
- Created option in mcat_analyze to compute the p-value of a function at different redshift values, giving the upper limits of the integral of the probability distribution function.
- Created function to compute the p-value of a function, giving the upper limits of the integral of the probability distribution function.
- Modified NcXcor to select method for Limber integrals at construction.
- Added PKEqual for HaloFit+Linder parametrization.
- New serialization to binary file. 
- Added support for weighted observations in ncm_stats_dist1d_epdf.
- Implemented Crocce's et al. 2009 multiplicity function.
- Included support for Travis CI.
- New Toeplitz solvers added.
- Added new diagnostics to NcmMSetCatalog, max ESS and Heidelberger and Welch's convergence diagnostic. Both can be applied to any NcmStatsVec object or through the NcmMSetCatalog interface.
- Included new BAO data point: Ata et al. (2017), BOSS DR14 QSO catalog.
- Fully working version of HOAA for tensor and scalar modes of the Vexp model.
- Added functions in NcRecomSeager to evaluate XHII and XHeII.
- Added example with tensor contributions to CMB.
- Implemented the object NcPowspecMLFixSpline: it computes the linear matter power spectrum from a file, which contains the knots k and their respective P(k) values.
- Added restart run in NcmFit. Added restart option in darkenergy. Reorganized NcRecomb and added tau_drag functions.
- New Spherical Bessel FFTLog code.
- New NcmDiff object that contains all numerical differentiation in a organized framework.
- Implemented framework for Fisher matrix calculation. Finished implementation of general Fisher matrix calculation for NcmDataGauss* family. Organized methods of NcmFit to calculated covariance through observed or expected Fisher matrix.
- Implemented NcmDataDist2d: data described by two-variable (arbitrary) distribution.
- Implemented NcDataBaoEmpiricalFit2d: included Bautista et al. 2017 data (SDSS/BOSS DR12).
- New option to print out functions in mcat_analyze. 
- Finished NcmSphereMap (including map2alm and alm2map like in HEALPix).
- New code for Bayesian evidence and posterior volume and its unit tests. Added option to calculate evidence in mcat_analyze.
- Added volume estimator testing to test_ncm_fit_esmcmc.


