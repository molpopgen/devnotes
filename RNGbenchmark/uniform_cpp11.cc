#include <sampler.hpp>
#include <random>
#include <functional>

using namespace std;

int main(int argc, char ** argv)
{
  mt19937 g(0);

  for( unsigned i = 1 ; i <= 50 ; i += 5 )
    {
      uniform_real_distribution<double> u(0.,double(i));
      function<double()> sampler = [&u,&g](){ return u(g); };
      vector<double> rv = sample( sampler );
    }
}
