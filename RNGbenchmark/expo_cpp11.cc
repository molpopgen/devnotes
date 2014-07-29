#include <sampler.hpp>
#include <random>
#include <functional>

using namespace std;

int main(int argc, char ** argv)
{
  mt19937 g(0);

  for( unsigned i = 1 ; i <= 50 ; i += 5 )
    {
      //We use 1./double(i) so that the mean is i
      function<double()> sampler = [i,&g](){ return exponential_distribution<double>(1./double(i))(g); };
      vector<double> rv = sample( sampler );
    }
}
