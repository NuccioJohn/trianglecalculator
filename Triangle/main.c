//
//  main.c
//  Triangle
//
//  Created by John Lester Nuccio on 8/1/13.
//  Copyright (c) 2013 John Lester Nuccio. All rights reserved.
//

#include <stdio.h>

// Add your new function here

float remainingAngel (float A, float B)
{
    float angle = 180.0 - A - B;
    printf("%f is angleA, %f is angleB, %f is angleC\n", A, B, angle);
    return angle;
}


int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngel (angleA, angleB);
    printf("The third angle is %f\n", angleC);
    return 0;
}

