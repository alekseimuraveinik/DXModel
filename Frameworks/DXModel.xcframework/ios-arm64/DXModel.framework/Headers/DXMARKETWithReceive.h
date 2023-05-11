
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithReceive")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithReceive
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithReceive 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithReceive 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderCashWithReceive

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETWithReceive_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithReceive || defined(INCLUDE_DXMARKETWithReceive))
#define DXMARKETWithReceive_

@class DXMARKETValidationInfo;

@protocol DXMARKETWithReceive < JavaObject >

- (NSString *)getReceive;

- (DXMARKETValidationInfo *)getReceiveValidationInfo;

- (jlong)getRecieveValue;

- (void)setReceiveWithNSString:(NSString *)value;

- (void)stepReceeveWithBoolean:(jboolean)forward;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETWithReceive)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETWithReceive)

#define ComDevexpertsDxmarketClientModelOrderCashWithReceive DXMARKETWithReceive

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderCashWithReceive")
