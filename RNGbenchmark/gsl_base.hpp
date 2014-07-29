#ifndef __GSL_BASE_HPP__
#define __GSL_BASE_HPP__

#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>

//returns a gsl_rng * to an gsl_rng_mt19937 seeded w/seed
gsl_rng * setup_mt(const unsigned & seed);

#endif
