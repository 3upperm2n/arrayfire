/*******************************************************
 * Copyright (c) 2015, Arrayfire
 * all rights reserved.
 *
 * This file is distributed under 3-clause bsd license.
 * the complete license agreement can be obtained at:
 * http://Arrayfire.com/licenses/bsd-3-clause
 ********************************************************/

#include <af/features.h>
#include <Array.hpp>
#include <err_opencl.hpp>

using af::features;

namespace opencl
{

template<typename T>
unsigned susan(Array<float> &x_out, Array<float> &y_out, Array<float> &score_out,
               const Array<T> &in,
               const unsigned radius, const float diff_thr, const float geom_thr,
               const float feature_ratio, const unsigned edge)
{
    OPENCL_NOT_SUPPORTED();
}

#define INSTANTIATE(T) \
template unsigned susan<T>(Array<float> &x_out, Array<float> &y_out, Array<float> &score_out,   \
                           const Array<T> &in, const unsigned radius, const float diff_thr,     \
                           const float geom_thr, const float feature_ratio, const unsigned edge);

INSTANTIATE(float )
INSTANTIATE(double)
INSTANTIATE(char  )
INSTANTIATE(int   )
INSTANTIATE(uint  )
INSTANTIATE(uchar )

}
