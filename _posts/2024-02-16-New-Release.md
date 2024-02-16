---
layout: post
title: New release - 0.21.2
category: News
tags: [news]
---

# New Release of NumCosmo (v0.21.2)

This release brings several enhancements and new features to the library, improving its functionality and usability. Key updates:

## 1. MPICH Support

NumCosmo now includes support for MPICH (#144) in the meson build system. This update allows users to build and install NumCosmo with MPICH, enabling parallel computation for improved performance and efficiency.

## 2. Product File Options

Introducing product-file options (#143), this release expands the flexibility of NumCosmo by offering new functionalities related to product files. This option simplifies the process of creating and managing product files, allowing users to specify a single file for all the products, and to include or exclude products from the file.

## 3. New Command Line Tool

NumCosmo includes an experimental command line tool (`numcosmo`) introduced in commit a005675. This tool offers a range of functionalities, including converting a cosmosis ini file to NumCosmo yaml format, computing the best-fit for an experiment, generating fisher matrices, and more.

## Other Enhancements and Fixes

- Updated stubs for improved consistency and documentation (#79ec88a).
- Fixed minor bugs and added serialization for strv (#c71ae50).
- Improved tests for NumCosmo app (#31ecb82).
- Fixed cosmosis required parameters issue (#d619063).
- Fixed mypy issues and ran black for code formatting (#16b05d3, #bfecba8).
- Support for object dictionaries (#130a973, #4d00c3e).

To view the complete list of changes, refer to the [ChangeLog](https://github.com/NumCosmo/NumCosmo/blob/master/ChangeLog.md).


