//
//  main.c
//  PBR
//
//  Created by Jim Toepel on 2/8/15.
//  Copyright (c) 2015 FunderDevelopment. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void metersToFeetAndInches(double meters, double *ftPtr, double *inPtr) {
    
    // This function assumes meters is non-negative.
    
    // Convert the number of meters into a floating-point number of feet
    
    double rawFeet = meters * 3.281; // e.g. 2.4536
    
    // How many complete feet as an unsigned int?
    double fractionalFoot = modf(rawFeet, ftPtr);
    printf("%f\n", fractionalFoot);
    
    // Calculate inches
    double inches = fractionalFoot * 12.0;
    *inPtr = inches;
}



int main(int argc, const char * argv[]) {
    
    double meters = 3.0;
    double feet;
    double inches;
    
    metersToFeetAndInches(meters, &feet, &inches);
    printf("%.1f meters is equal to %.0f feet and %.1f inches.", meters, feet, inches);
    
    return 0;
}
