
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarginOrderData")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseMarginOrderData
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarginOrderData 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarginOrderData 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseMarginOrderData

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETMarginOrderData_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarginOrderData || defined(INCLUDE_DXMARKETMarginOrderData))
#define DXMARKETMarginOrderData_

@protocol DXMARKETMarginOrderData < JavaObject >

- (NSString *)getMarginString;

@end

@interface DXMARKETMarginOrderData : NSObject
@property (readonly, class) jint DEFAULT_MARGIN_PRECISION NS_SWIFT_NAME(DEFAULT_MARGIN_PRECISION);

+ (jint)DEFAULT_MARGIN_PRECISION;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETMarginOrderData)

inline jint DXMARKETMarginOrderData_get_DEFAULT_MARGIN_PRECISION(void);
#define DXMARKETMarginOrderData_DEFAULT_MARGIN_PRECISION 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETMarginOrderData, DEFAULT_MARGIN_PRECISION, jint)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETMarginOrderData)

#define ComDevexpertsDxmarketClientModelOrderBaseMarginOrderData DXMARKETMarginOrderData

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseMarginOrderData")
