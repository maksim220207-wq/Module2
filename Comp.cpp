#include <iostream>
#include <string>
#include <sstream> 


void printCompilerInfo() {
    std::cout << "## ??? Compiler and C++ Information ##" << std::endl;

    
    long cpp_version = __cplusplus;
    std::cout << "* C++ Standard: ";

    
    if (cpp_version == 199711L) {
        std::cout << "C++98/C++03" << std::endl;
    }
    else if (cpp_version == 201103L) {
        std::cout << "C++11" << std::endl;
    }
    else if (cpp_version == 201402L) {
        std::cout << "C++14" << std::endl;
    }
    else if (cpp_version == 201703L) {
        std::cout << "C++17" << std::endl;
    }
    else if (cpp_version == 202002L) {
        std::cout << "C++20" << std::endl;
    }
    else if (cpp_version > 202002L) {
        std::cout << "C++23 or later (Value: " << cpp_version << ")" << std::endl;
    }
    else {
        std::cout << "Unknown/Outdated standard (Value: " << cpp_version << ")" << std::endl;
    }

    // --- Basic Predefined Macros ---
    std::cout << "* Compilation Date: " << __DATE__ << std::endl;
    std::cout << "* Compilation Time: " << __TIME__ << std::endl;
    std::cout << "* File Name: " << __FILE__ << std::endl;

    std::cout << "\n* **Compiler Name and Version:**" << std::endl;

    
#if defined(__GNUC__)
    std::cout << "  - **GCC:** " << __GNUC__ << "." << __GNUC_MINOR__ << "." << __GNUC_PATCHLEVEL__ << std::endl;
#endif

    
#if defined(__clang__)
    std::cout << "  - **Clang:** " << __clang_major__ << "." << __clang_minor__ << "." << __clang_patchlevel__ << std::endl;
#endif

    
#if defined(_MSC_VER)
    
    std::cout << "  - **MSVC:** Version " << _MSC_FULL_VER;
#if _MSC_VER >= 1900 
    std::cout << " (Visual Studio 2015+)" << std::endl;
#else
    std::cout << std::endl;
#endif
#endif

    
#if !defined(__GNUC__) && !defined(__clang__) && !defined(_MSC_VER)
    std::cout << "  - **Other/Unknown Compiler**" << std::endl;
#endif
}


void printOSInfo() {
    std::cout << "\n## ?? OS Information (Platform-Dependent) ##" << std::endl;

    std::cout << "* **OS Family:** ";

#if defined(_WIN32) || defined(_WIN64)
    std::cout << "**Microsoft Windows**" << std::endl;
    
#elif defined(__linux__)
    std::cout << "**Linux** (This includes WSL)" << std::endl;
    
#elif defined(__APPLE__)
#include <TargetConditionals.h> 
#if TARGET_OS_IPHONE
    std::cout << "**iOS/iPadOS**" << std::endl;
#elif TARGET_OS_MAC
    std::cout << "**macOS (OS X)**" << std::endl;
#else
    std::cout << "**Apple OS** (Unknown Type)" << std::endl;
#endif
#elif defined(__unix__)
    std::cout << "**UNIX-like OS**" << std::endl;
#else
    std::cout << "**Unknown/Other OS**" << std::endl;
#endif
}

int main() {
    printCompilerInfo();
    printOSInfo();
    return 0;
}