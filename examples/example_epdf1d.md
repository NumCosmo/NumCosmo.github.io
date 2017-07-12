---
layout: example
title: Empirical Probability Distribution Function 
desc: Example written in Python to use the Empirical Probability Distribution Function module. 
category: Math
tags: [math statistics python]
---

##  Empirical Probability Distribution Function 1D
### Description

Example written in Python to reconstruct a one dimensional probability distribution based on an Empirical Probability Distribution Function (EPDF). 

### Running 

To try this example you must have [PyGObject installed](https://live.gnome.org/PyGObject),
and numcosmo built with --enable-introspection option. To run the examples
without installing follow the instructions [here]({% link download.md %})

### [example_epdf1d.py]({% link examples/example_epdf1d.py %}):
{% highlight Python %}

{% include_relative example_epdf1d.py %}

{% endhighlight %}

### Figure 1: PDF 

![epdf1d_pdf.svg]({% link examples/epdf1d_pdf.svg %}):

Figure 1: Reconstructed probability density functions (PDF) using the automatic (auto-bw) and Rule of Thumb (RoT-bw) methods to determine the bandwidth, and the true PDF.

### Figure 2: PDF diff

![epdf1d_pdf_diff.svg]({% link examples/epdf1d_pdf_diff.svg %}):

Figure 2: Relative difference between the reconstructed probability density functions, using the automatic (auto-bw) and Rule of Thumb (RoT-bw) methods to determine the bandwidth, with respect to the true distribution.

### Figure 3: CDF 

![epdf1d_cdf.svg]({% link examples/epdf1d_cdf.svg %}):

Figure 3: Reconstructed cumulative distribution functions (CDF) using the automatic (auto-bw) and Rule of Thumb (RoT-bw) methods to determine the bandwidth, and the true CDF.

### Figure 4: CDF diff

![epdf1d_cdf_diff.svg]({% link examples/epdf1d_cdf_diff.svg %}):

Figure 4: Relative difference between the reconstructed cumulative distribution functions (CDF), using the automatic (auto-bw) and Rule of Thumb (RoT-bw) methods to determine the bandwidth, with respect to the true CDF.

### Figure 5: CDF Inverse

![epdf1d_invcdf.svg]({% link examples/epdf1d_invcdf.svg %}):

Figure 5: Reconstructed inverse cumulative distribution functions using the automatic (auto-bw) and Rule of Thumb (RoT-bw) methods to determine the bandwidth.
 

  