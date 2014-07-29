#include <sampler.hpp>
#include <random>
#include <functional>

using namespace std;

int main(int argc, char ** argv)
{
  mt19937 g(0);

  for( unsigned i = 1 ; i <= 50 ; i += 5 )
    {
      function<double()> sampler = [i,&g](){ return binomial_distribution<unsigned>(i,0.1)(g); };
      vector<double> rv = sample( sampler );
    }
}
