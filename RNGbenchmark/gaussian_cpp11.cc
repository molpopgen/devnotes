#include <sampler.hpp>
#include <random>
#include <functional>

using namespace std;

int main(int argc, char ** argv)
{
  mt19937 g(0);

  for( unsigned i = 1 ; i <= 50 ; i += 5 )
    {
      normal_distribution<double> gau(i);
      function<double()> sampler = [&gau,&g](){ return gau(g); };
      vector<double> rv = sample( sampler );
    }
}
