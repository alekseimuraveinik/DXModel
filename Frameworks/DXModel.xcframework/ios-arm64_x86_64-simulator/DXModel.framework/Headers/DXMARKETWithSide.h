
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithSide")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithSide
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithSide 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithSide 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithSide

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETWithSide_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithSide || defined(INCLUDE_DXMARKETWithSide))
#define DXMARKETWithSide_

@protocol DXMARKETWithSide < JavaObject >

- (jboolean)isBuy;

- (void)setBuyWithBoolean:(jboolean)isBuy;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETWithSide)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETWithSide)

#define ComDevexpertsDxmarketClientModelOrderCashWithSide DXMARKETWithSide

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithSide")
