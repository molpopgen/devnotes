#include <sampler.hpp>
#include <random>
#include <functional>

using namespace std;

int main(int argc, char ** argv)
{
  mt19937 g(0);

  for( unsigned i = 1 ; i <= 50 ; i += 5 )
    {
      poisson_distribution<unsigned> p(i);
      function<unsigned()> sampler = [&p,&g](){ return p(g); };
      vector<double> rv = sample( sampler );
    }
}
