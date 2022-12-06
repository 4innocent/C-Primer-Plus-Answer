#include <stdio.h>
#include <math.h>
#include "pe12-2a.h"
void set_mode(int mode)
{
  get_info(mode);
}

void get_info(int mode)
{
  double distance;
  double fuel;
  double gallons;
  switch (mode)
  {
  case 0:
    printf("Enter distance traveledin miles: ");
    scanf("%lf", &distance);
    printf("Enter fuel consumed in liters: ");
    scanf("%lf", &fuel);
    show_info(mode, fuel, distance);
    break;
  case 1:
    printf("Enter distance traveledin miles: ");
    scanf("%lf", &distance);
    printf("Enter fuel consumed in gallons: ");
    scanf("%lf", &gallons);
    show_info(mode, distance, gallons);
    break;
  default:
    printf("Invalid mode specified.Mode 1 used!\n");
    set_mode(1);
    get_info(mode);
    break;
  }
}

void show_info(int mode, double arg1, double arg2)
{
  switch (mode)
  {
  case 0:
    printf("Fuel consumption is %f liters per 100 km.\n", round(arg1 / arg2 * 100));
    break;
  case 1:
    printf("Fuel consumption is %f miles per gallons.\n", round(arg2 / arg1));
    break;
  }
}