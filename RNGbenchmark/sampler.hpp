#ifndef __SAMPLER_HPP__
#define __SAMPLER_HPP__

#include <vector>

template<typename dist>
std::vector<double> sample( const dist & d, const unsigned nreps = 1000000 )
{
  std::vector<double> rv(nreps);
  for(unsigned i=0;i<nreps;++i)
    {
      rv[i]=d();
    }
  return rv;
}

#endif
