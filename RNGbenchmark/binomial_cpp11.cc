#include <sampler.hpp>
#include <random>
#include <functional>

using namespace std;

int main(int argc, char ** argv)
{
  mt19937 g(0);

  for( unsigned i = 1 ; i <= 50 ; i += 5 )
    {
      binomial_distribution<unsigned> bn(i,0.1);
      function<double()> sampler = [&bn,&g](){ return bn(g); };
      vector<double> rv = sample( sampler );
    }
}
