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
    CConsole(GREEN)<<"true"; \
    std::cout << ", but it is "; \
    CConsole(RED) << "false\n"; \
} \
else \
{ \
    std::cout <<CODE_LOCATION << ":";\
    std::cout << #expr " is expected to "; \
    CConsole(GREEN)<<(value?"true":"false"); \
    std::cout << ", and it is "; \
    CConsole(GREEN) << (value?"true\n":"false\n"); \
} \
}

#define UT_EXPECT_FALSE(expr) \
{ \
auto value = bool(expr); \    
if(value) \
{ \
    std::cout <<CODE_LOCATION << ":";\
    std::cout << #expr " is expected to "; \
    CConsole(GREEN)<<"false"; \
    std::cout << ", but it is "; \
    CConsole(RED) << "true\n"; \
} \
else \
{ \
    std::cout <<CODE_LOCATION << ":";\
    std::cout << #expr " is expected to "; \
    CConsole(GREEN)<<(value?"true":"false"); \
    std::cout << ", and it is "; \
    CConsole(GREEN) << (value?"true\n":"false\n"); \
} \
}

#define UT_EXPECT_CURRENT(expr) \
{ \
auto value = bool(expr); \    
{ \
    std::cout <<CODE_LOCATION << ":";\
    std::cout << #expr " is expected to "; \
    CConsole(GREEN)<<(value?"true":"false"); \
    std::cout << ", and it is "; \
    CConsole(GREEN) << (value?"true\n":"false\n"); \
} \
}