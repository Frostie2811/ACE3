#pragma once

#include "targetver.h"
#include <assert.h>
#include <stdio.h>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <memory>
#include <cmath>
#include <cstdint>

#include "logging.hpp"

namespace ace {
    template< typename T >
    struct array_deleter
    {
        void operator ()(T const * p)
        {
            delete[] p;
        }
    };
}