#ifndef _MLX90640_interpolate_
#define _MLX90640_interpolate_
#include <Arduino.h>

class Interpolate
{
public:
    float get_point(float *p, uint8_t rows, uint8_t cols, int8_t x, int8_t y);
    void set_point(float *p, uint8_t rows, uint8_t cols, int8_t x, int8_t y, float f);
    void get_adjacents_1d(float *src, float *dest, uint8_t rows, uint8_t cols, int8_t x, int8_t y);
    void get_adjacents_2d(float *src, float *dest, uint8_t rows, uint8_t cols, int8_t x, int8_t y);
    float cubicInterpolate(float p[], float x);
    float bicubicInterpolate(float p[], float x, float y);
    void interpolate_image(float *src, uint8_t src_rows, uint8_t src_cols, float *dest, uint8_t dest_rows, uint8_t dest_cols);
};
#endif