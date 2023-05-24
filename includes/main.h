/***************************************************************************************
    File: main.h
    Author: Navid Dezashibi
    Initial Creation Date: 2023-05-24
    Contact: navid@dezashibi.com
    Website: https://dezashibi.com
    License:
    Please refer to the LICENSE file, repository or website for more information about
    the licensing of this work. If you have any questions or concerns,
    please feel free to contact me at the email address provided above.
 ***************************************************************************************
    << OTHER DESCRIPTIONS >>
 **************************************************************************************/
#pragma once

void enable_raw_mode();
void disable_raw_mode();


#if defined(_WIN32)
#include "win.h"
#else
#include "nix.h"

#endif
