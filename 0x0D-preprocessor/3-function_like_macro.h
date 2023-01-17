
/*
 * File: 3-function_like_macro.h
 * Desc: Header file that defines a function-like macro ABS(x)
 *       that computes the absolute value of a number x.
 */
#ifndef ABS_H
#define ABS_H
#define ABS(x) (x > 0 ? x : x * -1)
#endif
