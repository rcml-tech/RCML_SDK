#ifndef RCML_SDK_H
#define RCML_SDK_H

#ifdef _WIN32
#ifdef RCML_SDK_EXPORT
#define RCML_SDK_API __declspec(dllexport)
#else
#define RCML_SDK_API __declspec(dllimport)
#endif
#else
#define RCML_SDK_API
#endif

#endif /* RCML_SDK_H */
