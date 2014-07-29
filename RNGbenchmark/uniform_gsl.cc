#include <gsl_base.hpp>
#include <sampler.hpp>
#include <functional>

using namespace std;

int main(int argc, char ** argv)
{
  gsl_rng * r = setup_mt(0);
  for( unsigned i = 1 ; i <= 50 ; i += 5 )
    {
      function<double()> sampler = [r,i](){ return gsl_ran_flat(r,0.,double(i)); };
      vector<double> rv = sample( sampler );
    }
}
