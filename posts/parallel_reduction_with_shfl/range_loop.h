#include "range.hpp"
using namespace util::lang;

// type alias to simplify typing...
template<typename T>
using step_range = typename range_proxy<T>::step_range_proxy;

template <typename T>
__device__
step_range<T> grid_stride_range(T begin, T end) {
    begin += blockIdx.x * blockDim.x + threadIdx.x;
    return range(begin, end).step(gridDim.x * blockDim.x);
}

