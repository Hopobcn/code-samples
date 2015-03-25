#pragma once

#include "fake_shfl.h" 

__device__
inline int warpReduceSum(int val) {
    #pragma unroll
    for (int offset = warpSize/2; offset > 0; offset >>= 1)
        val += __shfl_down(val, offset);
    return val;
}

