
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithFee")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithFee
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithFee 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithFee 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithFee

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETWithFee_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithFee || defined(INCLUDE_DXMARKETWithFee))
#define DXMARKETWithFee_

@protocol DXMARKETWithFee < JavaObject >

- (NSString *)getFee;

- (jlong)getFeeeValue;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETWithFee)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETWithFee)

#define ComDevexpertsDxmarketClientModelOrderCashWithFee DXMARKETWithFee

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithFee")
