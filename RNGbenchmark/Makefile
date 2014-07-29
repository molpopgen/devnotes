CXX=g++-4.8
CXXFLAGS+=-std=c++11 -O2 -Wall -W -I.

all: gsl_base.o poisson_gsl.o poisson_cpp11.o gaussian_gsl.o gaussian_cpp11.o binomial_gsl.o binomial_cpp11.o expo_gsl.o expo_cpp11.o uniform_gsl.o uniform_cpp11.o discrete_gsl.o discrete_cpp11.o
	$(CXX) $(CXXFLAGS) -o poisson_gsl poisson_gsl.o gsl_base.o -lgsl -lgslcblas
	$(CXX) $(CXXFLAGS) -o poisson_cpp11 poisson_cpp11.o
	$(CXX) $(CXXFLAGS) -o gaussian_gsl gaussian_gsl.o gsl_base.o -lgsl -lgslcblas
	$(CXX) $(CXXFLAGS) -o gaussian_cpp11 gaussian_cpp11.o
	$(CXX) $(CXXFLAGS) -o binomial_gsl binomial_gsl.o gsl_base.o -lgsl -lgslcblas
	$(CXX) $(CXXFLAGS) -o binomial_cpp11 binomial_cpp11.o
	$(CXX) $(CXXFLAGS) -o expo_gsl expo_gsl.o gsl_base.o -lgsl -lgslcblas
	$(CXX) $(CXXFLAGS) -o expo_cpp11 expo_cpp11.o
	$(CXX) $(CXXFLAGS) -o uniform_gsl uniform_gsl.o gsl_base.o -lgsl -lgslcblas
	$(CXX) $(CXXFLAGS) -o uniform_cpp11 uniform_cpp11.o
	$(CXX) $(CXXFLAGS) -o discrete_gsl discrete_gsl.o gsl_base.o -lgsl -lgslcblas
	$(CXX) $(CXXFLAGS) -o discrete_cpp11 discrete_cpp11.o

clean:
	rm -f *.o
	find . -executable | tail -n +2 | xargs rm -f 