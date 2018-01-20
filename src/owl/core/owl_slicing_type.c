/*
 * OWL - an OCaml numerical library for scientific computing
 * Copyright (c) 2016-2018 Liang Wang <liang.wang@cl.cam.ac.uk>
 */

#include "owl_core.h"


struct slice_pair {
  int dim;
  int dep;
  int *n;
  void *x;
  int posx;
  int *ofsx;
  int *incx;
  void *y;
  int posy;
  int *ofsy;
  int *incy;
};


#define OWL_ENABLE_TEMPLATE

//////////////////// function templates starts ////////////////////


#define FUNCTION(name) owl_float32 ## _ ## name
#define TYPE float
#include "owl_slicing_impl.c"
#undef TYPE
#undef FUNCTION


#define FUNCTION(name) owl_float64 ## _ ## name
#define TYPE double
#include "owl_slicing_impl.c"
#undef TYPE
#undef FUNCTION


#define FUNCTION(name) owl_complex32 ## _ ## name
#define TYPE _Complex float
#include "owl_slicing_impl.c"
#undef TYPE
#undef FUNCTION


#define FUNCTION(name) owl_complex64 ## _ ## name
#define TYPE _Complex double
#include "owl_slicing_impl.c"
#undef TYPE
#undef FUNCTION


//////////////////// function templates ends ////////////////////

#undef OWL_ENABLE_TEMPLATE