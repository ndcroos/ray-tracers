#ifndef HITABLE_H
#define HITABLE_H 

#include "Ray.h"

class material;



struct hit_record
{
    // time input variable
    float t;  
    vec3 p;
    vec3 normal; 
    material *mat_ptr;
};

// Abstract class. 
class hitable  {
    public:
	// takes a ray, a valid interval
        virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const = 0;
};

#endif