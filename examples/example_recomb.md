---
layout: example
title: Cosmic Recombination
desc: Example written in Python about the cosmic recombination epoch. 
category: Cosmology
tags: [cosmology lss python]
---

##  Cosmic Recombination Epoch
### Description

Example written in Python to compute: (i) the visibility function and its derivatives,
(ii) the equilibrium fractions of Hydrogen and Helium, (iii)
the derivative of the optical depth. For details see [NumCosmo Manual - NcRecomb](https://numcosmo.github.io/manual/NcRecomb.html). 

### Running 

To try this example you must have [PyGObject installed](https://live.gnome.org/PyGObject),
and numcosmo built with --enable-introspection option. To run the examples
without installing follow the instructions [here]({% link download.md %})

### [example_recomb.py]({% link examples/example_recomb.py %}):
{% highlight Python %}

{% include_relative example_recomb.py %}

{% endhighlight %}

### Figure 1: Ionization History 

![recomb_Xe.svg]({% link examples/recomb_Xe.svg %})

Figure 1: The abundance of free electrons as a function of the redshift
considering equilibrium and recombination. 

### Figure 2: Equilibrium Fractions

![recomb_eq_fractions.svg]({% link examples/recomb_eq_fractions.svg %})

Figure 2: The abundance of non-ionized and ionized hydrogen and helium assuming an
evolution always in equilibrium. 

### Figure 3: Visibility Function 

![recomb_v_tau.svg]({% link examples/recomb_v_tau.svg %})

Figure 3: The visibility function and its first and second derivatives as
functions of the redshift. This plot also shows the redshift values where
the visibility function reaches its maximum, $10^{-2}v_{\tau}^{\mathrm{max}}$, and the drag redshift.

### Figure 4: Optical Depth

![recomb_dtau_dlambda.svg]({% link examples/recomb_dtau_dlambda.svg %})

Figure 4: Derivative of the optical depth $\tau$ with respect to $\lambda =- \log (1+z)$.
This figure also shows $\frac{1+z}{E(z)}$ and $\frac{1+z}{E(z)\bar{\tau}}$,
where $E(z)$ is the normalized Hubble function and $\bar{\tau} = \frac{\mathrm{d}\tau}{\mathrm{d}\lambda}$.  

 

  