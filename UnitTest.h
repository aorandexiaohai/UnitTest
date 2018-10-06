#pragma once
#include "ColorConsole.h"
#include "xt_log_helper.h"

#define UT_EXPECT_TRUE(expr) \
{ \
auto value = bool(expr); \    
if(!value) \
{ \
    std::cout <<CODE_LOCATION << ":";\
    std::cout << #expr " is expected to "; \
    CConsole(GREEN)<<"true, but it is "; \
    CConsole(RED) << "false\n" \
} \
}

#define UT_EXPECT_FALSE(expr) \
{ \
auto value = bool(expr); \    
if(value) \
{ \
    std::cout <<CODE_LOCATION << ":";\
    std::cout << #expr " is expected to "; \
    CConsole(GREEN)<<"false, but it is "; \
    CConsole(RED) << "true\n" \
} \
}