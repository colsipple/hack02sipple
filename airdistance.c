/**
* Author: Victor Nguyen, Collin Sipple, Joe Wyrick
* Date: 08/30/2018
*
* This program will demonstrate the air distance project
*
*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>


int main(int argc, char **argv[]) {
  double latitude1, longitude1, latitude2, longitude2, r, d;
  r = 6371;
  
  printf("Enter the latitude of the first destination [in degrees, anywhere from -90 to 90]: ");
  scanf("%lf", &latitude1 );

  printf("\nEnter the longitude of the first destination [in degrees, anywhere from -180 to 180]: ");
  scanf("%lf", &longitude1 );

  printf("\nEnter the latitude of the second destination [in degrees, anywhere from -90 to 90]: ");
  scanf("%lf", &latitude2 );

  printf("\nEnter the longitude of the second destination [in degrees, anywhere from -180 to 180]: ");
  scanf("%lf", &longitude2 );


  return 0;
}
