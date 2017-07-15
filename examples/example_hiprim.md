---
layout: example
title: Homogeneous and Isotropic Primordial Model
desc: Example written in Python to compute the power spectrum using an alternative primordial model. 
category: Cosmology
tags: [cosmology python]
---

##  HI Primordial Model
### Description

Example written in Python to compute Temperature-Temperature angular power spectrum
considering an alternative homogeneous and isotropic primordial model. The
specific model used in this example is defined [here](https://github.com/NumCosmo/NumCosmo/blob/master/examples/py_hiprim_example.py).

### Running 

To try this example you must have [PyGObject installed](https://live.gnome.org/PyGObject),
and numcosmo built with --enable-introspection option. To run the examples
without installing follow the instructions [here]({% link download.md %}).

### [example_hiprim.py]({% link examples/example_hiprim.py %}):
{% highlight Python %}

{% include_relative example_hiprim.py %}

{% endhighlight %}

### Figure 1: TT angular PS 

![hiprim_Cls.svg]({% link examples/hiprim_Cls.svg %})

Figure 1: Temperature-Temperature angular power spectrum assuming a
power-law primordial power spectrum (non-modified) and a modified primordial
spectrum described by $$P_{prim}(k) = A_s \left(\frac{k}{k_\*} \right)^{n_s - 1}
\left[1 + a^2 \cos\left(b\frac{k}{k_\*} + c \right)^2 \right],$$
where $A_s$ is the normalization, $n_s$ is the spectral index and $k_\*$ is
the pivot mode.      

 

  