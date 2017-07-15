---
layout: example
title: Tensor Power Spectrum
desc: Example written in Python to compute the power spectrum considering both scalar and tensor contributions. 
category: Cosmology
tags: [cosmology python]
---

##  Tensor PS
### Description

Example written in Python to compute Temperature-Temperature angular power spectrum (PS)
considering (i) the scalar PS and (ii) both scalar and tensor PS. 

### Running 

To try this example you must have [PyGObject installed](https://live.gnome.org/PyGObject),
and numcosmo built with --enable-introspection option. To run the examples
without installing follow the instructions [here]({% link download.md %}).

### [example_hiprim_Tmodes.py]({% link examples/example_hiprim_Tmodes.py %}):
{% highlight Python %}

{% include_relative example_hiprim_Tmodes.py %}

{% endhighlight %}

### Figure 1: TT angular PS 

![hiprim_tensor_Cls.svg]({% link examples/hiprim_tensor_Cls.svg %})

Figure 1: Temperature-Temperature angular power spectrum considering the
both tensor and scalar contributions (with-T), and only the scalar one
(without-T). The scalar and tensor primordial PS are, respectively,

\begin{equation\*}
P_{S}(k) = A_s \left(\frac{k}{k_\*} \right)^{n_s - 1},
\end{equation\*}

\begin{equation\*} 
P_{T}(k) = r A_s \left(\frac{k}{k_\*} \right)^{n_T - 1},
\end{equation\*}
where $A_s$ is the normalization, $n_s$ is the spectral index, $r =
\frac{P_T(k_\*)}{P_S(k_\*)}$ is the tensor-to-scalar ratio and $k_\*$ is the
pivot mode.      

 

  