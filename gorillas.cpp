//
//  main.cpp
//  Project 0 ECE 150
//
//  Created by Siddhant Singhal on 18/09/18.
//  Copyright © 2018 Siddhant Singhal. All rights reserved.
//

#include <iostream>
#include <cmath>

#ifndef MARMOSET_TESTING
int main();
#endif

double horizontal_velocity(double launch_velocity,double launch_angle);
double vertical_velocity(double launch_velocity,double launch_angle);
double computed_range(double launch_velocity, double launch_angle, double height);
double gravity();


double horizontal_velocity(double launch_velocity,double launch_angle){
    if(launch_angle == 90){
        return 0;
    }
    double rad_angle = ((M_PI)*launch_angle)/180;
    return (launch_velocity * std::cos(rad_angle));
}


double vertical_velocity(double launch_velocity,double launch_angle){
    double rad_angle = ((M_PI)*launch_angle)/180;
    return (launch_velocity * std::sin(rad_angle));
}


double gravity(){
    return 9.80665;
}


double computed_range(double launch_velocity, double launch_angle, double height){
    double range = ((horizontal_velocity(launch_velocity, launch_angle)/gravity())*(vertical_velocity(launch_velocity, launch_angle) + sqrt((vertical_velocity(launch_velocity, launch_angle)*vertical_velocity(launch_velocity, launch_angle)) + 2 * gravity() * height)));
    
    return range;
}


#ifndef MARMOSET_TESTING
int main(){
    std::cout << "The range the banana reaches for the launch angle of 10 degrees is " << computed_range(600,10,10);
    std::cout <<std::endl;
    std::cout << "The range the banana reaches for the launch angle of 20 degrees is " << computed_range(600,20,10);
    std::cout<<std::endl;
    std::cout << "The range the banana reaches for the launch angle of 25.5 degrees is " << computed_range(600,25.5,10);
    std::cout<<std::endl;
    std::cout << "The range the banana reaches for the launch angle of 30 degrees is " << computed_range(600,30,10);
    std::cout<<std::endl;
    std::cout << "The range the banana reaches for the launch angle of 40 degrees is " << computed_range(600,40,10);
    std::cout<<std::endl;
    std::cout << "The range the banana reaches for the launch angle of 50 degrees is " << computed_range(600,50,10);
    std::cout<<std::endl;
    std::cout << "The range the banana reaches for the launch angle of 55.5 degrees is " << computed_range(600,55.5,10);
    std::cout<<std::endl;
    std::cout << "The range the banana reaches for the launch angle of 60 degrees is " << computed_range(600,60,10);
    std::cout<<std::endl;
    std::cout << "The range the banana reaches for the launch angle of 70 degrees is " << computed_range(600,70,10);
    std::cout<<std::endl;
    std::cout << "The range the banana reaches for the launch angle of 75.5 degrees is " << computed_range(600,75.5,10);
    std::cout<<std::endl;
    std::cout << "The range the banana reaches for the launch angle of 80 degrees is " << computed_range(600,80,10);
    std::cout<<std::endl;
    std::cout << "The range the banana reaches for the launch angle of 90 degrees is " << computed_range(600,90,10);
    std::cout<<std::endl;
    
    return 0;
}
#endif
