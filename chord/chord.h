#pragma once

#include <argp.h>
#include <arpa/inet.h>
#include <time.h>

namespace chord {

/*! \brief A type for byte */
typedef unsigned char Byte;

/*! \brief A type for seconds */
typedef double Milliseconds;

#define MAX_TCP_CONNECTIONS 10

}  // namespace chord