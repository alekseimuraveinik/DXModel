
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithTotalSpend")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithTotalSpend
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithTotalSpend 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithTotalSpend 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithTotalSpend

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETWithTotalSpend_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithTotalSpend || defined(INCLUDE_DXMARKETWithTotalSpend))
#define DXMARKETWithTotalSpend_

@protocol DXMARKETWithTotalSpend < JavaObject >

- (NSString *)getTotalSpend;

- (jlong)getTotolZpendValue;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETWithTotalSpend)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETWithTotalSpend)

#define ComDevexpertsDxmarketClientModelOrderCashWithTotalSpend DXMARKETWithTotalSpend

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithTotalSpend")
