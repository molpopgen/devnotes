#include <gsl_base.hpp>

gsl_rng * setup_mt(const unsigned & seed)
{
  gsl_rng * r = gsl_rng_alloc(gsl_rng_mt19937);
  gsl_rng_set(r,seed);
  return r;
}
