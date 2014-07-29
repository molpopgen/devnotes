#include <gsl_base.hpp>
#include <sampler.hpp>
#include <functional>

using namespace std;

int main(int argc, char ** argv)
{
  gsl_rng * r = setup_mt(0);
  for( unsigned i = 1 ; i <= 50 ; i += 5 )
    {
      vector<double> pdist(1000);
      for(unsigned i = 0 ; i < 1000 ; ++i)
	{
	  pdist[i]=i;
	}
      gsl_ran_discrete_t * dist = gsl_ran_discrete_preproc(pdist.size(),&pdist[0]);
      function<double()> sampler = [r,dist](){ return gsl_ran_discrete(r,dist); };
      vector<double> rv = sample( sampler );
      gsl_ran_discrete_free(dist);
    }
}
