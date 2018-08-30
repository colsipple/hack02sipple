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
  double latitude1, longitude1, latitude2, longitude2, radius, distance;
  radius = 6371;
  
  //ask for user input for coordinates of two destinations
  printf("Enter the latitude of the first location [in degrees, anywhere from -90 to 90]: ");
  scanf("%lf", &latitude1 );

  printf("\nEnter the longitude of the first location [in degrees, anywhere from -180 to 180]: ");
  scanf("%lf", &longitude1 );

  printf("\nEnter the latitude of the second location [in degrees, anywhere from -90 to 90]: ");
  scanf("%lf", &latitude2 );

  printf("\nEnter the longitude of the second location [in degrees, anywhere from -180 to 180]: ");
  scanf("%lf", &longitude2 );
  
  //math time! (converts and uses equations)
  double radLatitude1 = (latitude1/180) * M_PI;
  
  double radLongitude1 = (longitude1/180) * M_PI;
  
  double radLatitude2 = (latitude2/180) * M_PI;
  
  double radLongitude2 = (longitude2/180) * M_PI;
  
  double difference = (radLongitude2 - radLongitude1);
  distance = acos((sin(radLatitude1) * sin(radLatitude2)) + (cos(radLatitude1) * cos(radLatitude2) * cos(difference))) * radius;
  
  //print output (destination, origin, distance between)
  printf("Location Distance\n");
  
  printf("==========================\n");
  
  printf("First Location: (%f, %f)\n", latitude1, longitude1);
  
  printf("Second Location: (%f, %f)\n", latitude2, longitude2);
  
  printf("Your air distance is: %f kms!\n", distance);
  
  return 0;
}
