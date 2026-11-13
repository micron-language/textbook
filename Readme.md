This is a textbook on [the Micron programming language](https://github.com/micron-language/specification/).

The book is for readers who already program in another language, such as C, Go, (Free)Pascal, and Oberon. It does not intend to teach programming; it shows how each language feature of Micron is used, why it is designed the way it is, and how the habits of the arrival language translate. 

A lot of examples are in the book which compile and run with [the Micron micc compiler/interpreter](https://github.com/rochus-keller/micron/).

The book is available for free under a Creative Commons license and has the following parts:

- Part I explains what Micron is and why it exists, makes a tour of the language and toolchain, notation, types and values, and has a chapter for arrivals from C, Pascal and Go.
- Part II covers the language feature by feature, ascending Micron's _language levels_ from bare-metal code that needs neither stack nor heap up to garbage-collected objects. It explains program structure and modules, structured types, abstraction without OOP, objects and interfaces, generic modules, dynamic memory, compile-time and low-level programming, C interoperability, and error handling.
- Part III applies the language to its natural habitat: it walks through the Micron System, a port of Wirth and Gutknecht's Project Oberon operating system, which is compiled, linked and booted on an emulated RISC-V machine with a single command. The Micron System is a complete single-language operating system, with kernel, files and modules, display, viewers, texts and editor, up to graphics applications.
- The appendices contain everything needed to reproduce the examples, and reference material.

This repository includes the full source code of the book in [LeanDoc](https://github.com/rochus-keller/leandoc/) and the examples.

Here is a PDF version of the book: http://software.rochus-keller.ch/micron-textbook.pdf

The book also has an official doi number: https://doi.org/10.5281/zenodo.23649557

Comments, corrections and questions are welcome; please use the issue tracker.

