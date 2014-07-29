#include <sampler.hpp>
#include <random>
#include <functional>

using namespace std;

int main(int argc, char ** argv)
{
  mt19937 g(0);

  for( unsigned i = 1 ; i <= 50 ; i += 5 )
    {
      vector<double> pdist(1000);
      for(unsigned i = 0 ; i < 1000 ; ++i)
	{
	  pdist[i]=i;
	}
      discrete_distribution<unsigned> x(pdist.begin(),pdist.end());
      function<unsigned()> sampler = [&x,&g](){ return x(g); };
      vector<double> rv = sample( sampler );
    }
}
