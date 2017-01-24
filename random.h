#ifndef RANDOM_H
#define RANDOM_H

void random_seed(long int seed);
double random_uniform();
double random_range(double min, double max);
double random_normal(double mean, double dev);
double random_exponential(double mean);

#endif
