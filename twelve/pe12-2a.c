#include <stdio.h>
#include <math.h>
#include "pe12-2a.h"
static int pemode;
static double distance;
static double fuel;
static double gallons;
void set_mode(int mode)
{
  pemode = mode;
}

void get_info()
{
  switch (pemode)
  {
  case 0:
    printf("Enter distance traveledin miles: ");
    scanf("%lf", &distance);
    printf("Enter fuel consumed in liters: ");
    scanf("%lf", &fuel);
    break;
  case 1:
    printf("Enter distance traveledin miles: ");
    scanf("%lf", &distance);
    printf("Enter fuel consumed in gallons: ");
    scanf("%lf", &gallons);
    break;
  default:
    printf("Invalid mode specified.Mode 1 used!\n");
    set_mode(1);
    get_info();
    break;
  }
}

void show_info()
{
  switch (pemode)
  {
  case 0:
    printf("Fuel consumption is %f liters per 100 km.\n", round(fuel / distance * 100));
    break;
  case 1:
    printf("Fuel consumption is %f miles per gallons.\n", round(distance / gallons));
    break;
  }
}