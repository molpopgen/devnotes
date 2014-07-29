#!sh

for dist in binomial discrete expo gaussian poisson uniform
do
    echo $dist
    echo "gsl:"
    /usr/bin/time -f "%e %M" ./$dist"_gsl"
    echo "cpp11:"
    /usr/bin/time -f "%e %M" ./$dist"_cpp11"
done