---
layout: example
title: Surface Mass Density
desc: Example written in Python to compute the surface mass density and other lensing functions. 
category: Cosmology
tags: [cosmology python]
---

##  Surface Mass Density
### Description

Example written in Python to compute: (i) the surface mass density, its
mean and excess, (ii) the convergence, shear and reduced shear. 

### Running 

To try this example you must have [PyGObject installed](https://live.gnome.org/PyGObject),
and numcosmo built with --enable-introspection option. To run the examples
without installing follow the instructions [here]({% link download.md %}).

### [example_wl_surface_mass_density.py]({% link examples/example_wl_surface_mass_density.py %}):
{% highlight Python %}

{% include_relative example_wl_surface_mass_density.py %}

{% endhighlight %}

### Figure 1: Surface Mass Density

![wl_smd_sigmas.svg]({% link examples/wl_smd_sigmas.svg %})

Figure 1: Surface mass density (smd) $\Sigma(R)$, the mean smd $\overline{\Sigma}(<R)$ and the differential 
smd $\Delta\Sigma(R) = \overline{\Sigma}(<R) - \Sigma(R)$. We computed these functions
using the Navarro-Frenk-White (NFW) mass density profile, with $c_\Delta = 4$ (concentration parameter),
$M_\Delta = 10^{15} \, M_\odot$ and $\Delta = 200$. Lens redshift $z_l = 1.0$ and source redshift $z_s = 1.5$.

### Figure 2: Other lensing functions  

![wl_smd_convergence_shear.svg]({% link examples/wl_smd_convergence_shear.svg %})

Figure 2: Convergence $\kappa (R)$, shear $\gamma (R)$, reduced shear $g(R)$, and
reduced shear (infinite source redshit) $g_\infty(R)$. We computed these functions
using the Navarro-Frenk-White (NFW) mass density profile, with $c_\Delta = 4$ (concentration parameter),
$M_\Delta = 10^{15} \, M_\odot$ and $\Delta = 200$. Lens redshift $z_l = 1.0$ and source redshift $z_s = 1.5$.

 

  