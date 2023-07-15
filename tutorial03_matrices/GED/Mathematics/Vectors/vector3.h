//
// Created by Remus on 15/07/2023.
//

#ifndef TUTORIALS_VECTOR3_H
#define TUTORIALS_VECTOR3_H
#include <math.h>
namespace GED {

    struct vector3 {
        float x,y,z;

        vector3() = default;
        vector3(float a, float b, float c)
        {
            x = a;
            y = b;
            z = c;
        }


        float& operator[](int i)
        {
            return ((&x)[i]);
        }
        const float& operator[](int i) const
        {
            return ((&x)[i]);
        }
        vector3& operator *=(float s)
        {
            x *=s;
            y *=s;
            z *=s;
            return (*this);
        }
        vector3& operator /=(float s)
        {
            s = 1.0F/s;
            x *=s;
            y *=s;
            z *=s;
            return (*this);
        }
        inline vector3 operator *(float s) const
        {
            return (vector3(x * s, y * s, z * s));
        }
        inline vector3 operator /(float s) const
        {
            s = 1.0f/s;
            return (vector3(x *s, y * s, z * s));
        }
        inline vector3 operator -(const vector3& v)
        {
            return (vector3(-v.x, -v.y, -v.z));
        }
        inline float magnitude() const
        {
            return sqrtf(x * x + y * y + z * z);
        }
        inline vector3 normalize() const
        {
            return *(this) / magnitude();
        }

    };

} // GED

#endif //TUTORIALS_VECTOR3_H
