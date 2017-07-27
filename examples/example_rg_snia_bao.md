---
layout: example
title: Likelihood ratio test vs. Fisher matrix  
desc: Example written in Python to compare the likelihood ratio test and the Fisher matrix approaches. 
category: Statistics
tags: [cosmology statistics python]
---

##  Likelihood ratio test vs. Fisher matrix
### Description

Example written in Python to compare the results from Likelihood ratio test
(profile likelihood) and Fisher matrix methods. For this, we obtain constraints (68.27% contour) on the cold dark matter density 
$\Omega_c$ and the dark energy equation of state $w$ parameters, where $w =$ constant, using type Ia supernova 
(SNeIa) and baryon acoustic oscillations (BAO) data. 

### Running 

To try this example you must have [PyGObject installed](https://live.gnome.org/PyGObject),
and numcosmo built with --enable-introspection option. To run the examples
without installing follow the instructions [here]({% link download.md %}).

### [example_rg_snia_bao.py]({% link examples/example_rg_snia_bao.py %}):
{% highlight Python %}

{% include_relative example_rg_snia_bao.py %}

{% endhighlight %}

### Figure: $(\Omega_c, w)$ contours

![snia_bao_rg_omegac_w.svg]({% link examples/snia_bao_rg_omegac_w.svg %})

Figure 1: Cold dark matter density, $\Omega_c$, and dark energy equation of state,
$w$, parameter contours (68.27%) obtained using the likelihood ratio test (red line) and 
Fisher matrix (blue line) methods.  

 

  