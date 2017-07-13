---
layout: example
title: Halo Mass Function
desc: Example written in Python to compute the halo mass function and correlated functions. 
category: Cosmology
tags: [cosmology lss python]
---

##  Halo mass function and halo number per redshift
### Description

Example written in Python to compute the growth and transfer functions, the linear matter power spectrum, the variance of the matter density contrast, the halo mass function and the number of halos as a function of the redshift. 

### Running 

To try this example you must have [PyGObject installed](https://live.gnome.org/PyGObject),
and numcosmo built with --enable-introspection option. To run the examples
without installing follow the instructions [here]({% link download.md %})

### [example_halo_mass_function.py]({% link examples/example_halo_mass_function.py %}):
{% highlight Python %}

{% include_relative example_halo_mass_function.py %}

{% endhighlight %}

### Figure 1: Growth Function 

![hmf_growth_func.svg]({% link examples/hmf_growth_func.svg %}):

Figure 1: Growth function and its derivative with respect to the redshift.

### Figure 2: Transfer Function and PS

![hmf_transfer_func.svg]({% link examples/hmf_transfer_func.svg %}):

Figure 2: Transfer function and the linear matter power spectrum.

### Figure 3: Variance of the matter density contrast 

![hmf_matter_variance.svg]({% link examples/hmf_matter_variance.svg %}):

Figure 3: Variance of the matter density contrast and its derivative with respect to the scale R.

### Figure 4: Halo Mass Function

![hmf_mass_function.svg]({% link examples/hmf_mass_function.svg %}):

Figure 4: Halo mass function computed at $z = 0.7$.

### Figure 5: Number of halos per z

![hmf_halos_redshift.svg]({% link examples/hmf_halos_redshift.svg %}):

Figure 5: Number of halos with masses between $10^{14}$ to $10^{16}$ solar masses as a function of redshift, computed considering an angular area of 200 square degrees.
 

  