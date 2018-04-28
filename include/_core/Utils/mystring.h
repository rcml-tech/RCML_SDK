#ifndef __RCML_Utils_mystring_h
#define __RCML_Utils_mystring_h

#ifndef _MSC_VER 

#if defined(_WIN32) && (__GNUC__ < 4 || (__GNUC__ == 4 && __GNUC_MINOR__ <= 8))

#include <cstdlib>
#include <cstdio>
#include <limits>
#include <string>

namespace std {
  using ::snprintf;
  using ::vsnprintf;
  using ::strtold;
  using ::strtof;
  using ::strtoull;
  using ::strtoll;

  inline string to_string(short __val) {
    char buf[4 * sizeof(short)];
    const int len = snprintf(buf, 4 * sizeof(short), "%hd", __val);
    return string(buf, buf + len);
  }

  inline string to_string(unsigned short __val) {
    char buf[4 * sizeof(unsigned short)];
    const int len = snprintf(buf, 4 * sizeof(unsigned short), "%hu", __val);
    return string(buf, buf + len);
  }

  inline string to_string(int __val) {
    char buf[4 * sizeof(int)];
    const int len = snprintf(buf, 4 * sizeof(int), "%d", __val);
    return string(buf, buf + len);
  }

  inline string to_string(unsigned int __val) {
    char buf[4 * sizeof(unsigned int)];
    const int len = snprintf(buf, 4 * sizeof(unsigned int), "%u", __val);
    return string(buf, buf + len);
  }

  inline string to_string(long __val) {
    char buf[4 * sizeof(long)];
    const int len = snprintf(buf, 4 * sizeof(long), "%ld", __val);
    return string(buf, buf + len);
  }

  inline string to_string(unsigned long __val) {
    char buf[4 * sizeof(unsigned long)];
    const int len = snprintf(buf, 4 * sizeof(unsigned long), "%lu", __val);
    return string(buf, buf + len);
  }

  inline string to_string(long long __val) {
    char buf[4 * sizeof(long long)];
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wformat"
    const int len = snprintf(buf, 4 * sizeof(long long), "%I64d", __val);
#pragma GCC diagnostic pop
    return string(buf, buf + len);
  }

  inline string to_string(unsigned long long __val) {
    char buf[4 * sizeof(unsigned long long)];
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wformat"
    const int len = snprintf(buf, 4 * sizeof(unsigned long long), "%I64u", __val);
#pragma GCC diagnostic pop
    return string(buf, buf + len);
  }

  inline string to_string(double __val) {
    const int __n = std::numeric_limits<double>::max_exponent10 + 20;
    char buf[__n];
    const int len = snprintf(buf, __n, "%f", __val);
    return string(buf, buf + len);
  }
}

#endif

#endif

#endif