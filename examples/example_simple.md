---
layout: example
title: Simple C
desc: A simple example writen in C
category: Introduction
tags: [intro C]
---

## A very simple example in C
### Compiling

If you installed NumCosmo in your system, compile the example using:
```bash
gcc -Wall example_simple.c -o example_simple `pkg-config glib-2.0 numcosmo --libs --cflags`
```
If you followed the instructions on how to use the library without
installing it described [here]({% link download.md %}), compile using:
```bash
libtool --mode=link gcc -Wall example_simple.c -o example_simple  \
  ${NUMCOSMO_BUILD_DIR}/numcosmo/libnumcosmo.la -I${NUMCOSMO_DIR} \
  -I${NUMCOSMO_BUILD_DIR} `pkg-config --cflags glib-2.0`
```

### [example_simple.c]({% link examples/example_simple.c %}):
{% highlight C %}

{% include_relative example_simple.c %}

{% endhighlight %}

### [example_simple.out]({% link examples/example_simple.out %}):
{% highlight bash %}

{% include_relative example_simple.out %}

{% endhighlight %}

