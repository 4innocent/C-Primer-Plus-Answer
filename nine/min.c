#include "min.h"
#include <stdio.h>

double min(double x, double y) { return x - y > 0 ? y : x; }