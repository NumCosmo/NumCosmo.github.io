---
layout: example
title: Cosmological constraints with SNeIa 
desc: Example written in Python to obtain cosmological contraints using type Ia supernova data. 
category: Cosmology
tags: [cosmology statistics python]
---

##  Cosmological constraints with SNeIa
### Description

Example written in Python to obtain constraints (best-fit and covariance
matrix) on the cold dark matter density $\Omega_c$ and the dark energy
equation of state $w$ parameters, where $w =$ constant, using type Ia supernova 
(SNeIa) data. In this case, the covariance matrix is obtained via observed
Fisher Matrix approach.    

### Running 

To try this example you must have [PyGObject installed](https://live.gnome.org/PyGObject),
and numcosmo built with --enable-introspection option. To run the examples
without installing follow the instructions [here]({% link download.md %}).

### [example_fit_snia.py]({% link examples/example_fit_snia.py %}):
{% highlight Python %}

{% include_relative example_fit_snia.py %}

{% endhighlight %}

### [Output]({% link examples/fit_snia.out %}):
{% highlight bash %}

{% include_relative fit_snia.out %}

{% endhighlight %} 


 

  