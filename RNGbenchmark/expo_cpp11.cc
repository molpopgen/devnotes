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
      exponential_distribution<double> expo(1./double(i));
      function<double()> sampler = [&expo,&g](){ return expo(g); };
      vector<double> rv = sample( sampler );
    }
}
