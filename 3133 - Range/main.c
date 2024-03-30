#include<stdio.h>
#include<math.h>

int main() {
   double fuel_consp = 0;
   double distance = 0;
   double cur_fuel, cur_distance, prev_distance, prev_fuel;
   while(scanf("%lf %lf", &cur_distance, &cur_fuel) == 2){
      if(cur_distance == -1){
         break;
      }
      if(cur_distance == 0){
         int range = round(distance * prev_fuel/ fuel_consp);
         printf("%d\n",range);
         distance = 0;
         fuel_consp = 0;
      }
      else if(prev_fuel && prev_fuel != 0){
         if(cur_fuel < prev_fuel){
            fuel_consp += prev_fuel - cur_fuel;
            distance += cur_distance - prev_distance;
         }
      }
      prev_distance = cur_distance;
      prev_fuel = cur_fuel;
   }
}
