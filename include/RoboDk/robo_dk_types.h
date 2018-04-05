#ifndef ROBO_DK_HEADERS_H
#define ROBO_DK_HEADERS_H

#include <vector>
#include <memory>

typedef double TypeDouble;
typedef std::vector<TypeDouble> TypeDoubleArray;
typedef std::shared_ptr<TypeDoubleArray> TypeDoubleArrayPtr;

class CRoboLink;
typedef std::shared_ptr<CRoboLink> CRoboLinkPtr;

class CItem;
typedef std::shared_ptr<CItem> CItemPtr;

class CPos;
typedef std::shared_ptr<CPos> CPosPtr;

class CJointsPos;
typedef std::shared_ptr<CJointsPos> CJointsPosPtr;

class CColor;
typedef std::shared_ptr<CColor> CColorPtr;

#endif /* ROBO_DK_HEADERS_H */

