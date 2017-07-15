---
layout: example
title: Matter Power Spectrum
desc: Example written in Python to compute the matter power spectrum and correlated functions. 
category: Cosmology
tags: [cosmology python]
---

##  Matter Power Spectrum
### Description

Example written in Python to compute: (i) the linear matter power spectrum (PS) using the Eisenstein-Hu fitting transfer function and the Cosmic Linear Anisotropy Solving System (CLASS), (ii) the variance of the matter density contrast and its derivative with respect to $R$ using both linear PS, and (iii) the nonlinear matter PS using HALOFIT.

### Running 

To try this example you must have [PyGObject installed](https://live.gnome.org/PyGObject),
and numcosmo built with --enable-introspection option. To run the examples
without installing follow the instructions [here]({% link download.md %}).

### [example_ps.py]({% link examples/example_ps.py %}):
{% highlight Python %}

{% include_relative example_ps.py %}

{% endhighlight %}

### Figure 1: Linear matter PS 

![ps_cbe_eh.svg]({% link examples/ps_cbe_eh.svg %})

Figure 1: Linear matter power spcetrum $P(k,z)$ computed using the Eisenstein-Hu (EH)
transfer function and the Cosmic Linear Anisotropy Solving System (CLASS) at three different redshifts, $z = 0, 1, 2$.

### Figure 2: PS diff 

![ps_diff_cbe_eh.svg]({% link examples/ps_diff_cbe_eh.svg %})

Figure 2: Relative difference between the EH, $P_{EH}(k, z)$, and CLASS,
$P_{CLASS}(k,z)$, power spectra computed at $z = 0.0, 0.5, 1.0, 1.5, 2.0$.

### Figure 3: $\sigma_M(R,z)$ 

![ps_var_cbe_eh.svg]({% link examples/ps_var_cbe_eh.svg %})

Figure 3: Variance of the matter density contrast computed using EH transfer
function and CLASS power spectrum at $z = 0,1,2$.

### Figure 4: $\sigma_M(R,z)$ derivative

![ps_dvar_cbe_eh.svg]({% link examples/ps_dvar_cbe_eh.svg %})

Figure 4: Derivative of the matter density contrast variance with respect to the scale $R$ computed using EH transfer
function and CLASS at $z = 0,1,2$.

### Figure 5: Nonlinear PS

![ps_cbe_halofit.svg]({% link examples/ps_cbe_halofit.svg %})

Figure 5: Linear (CLASS) and nonlinear (CLASS + HALOFIT) matter power
spcetra computed at $z = 0, 5, 10$.
 

  