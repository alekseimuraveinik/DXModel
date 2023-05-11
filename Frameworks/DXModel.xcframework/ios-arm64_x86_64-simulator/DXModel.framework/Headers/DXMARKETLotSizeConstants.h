
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderLotSizeConstants")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderLotSizeConstants
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderLotSizeConstants 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderLotSizeConstants 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderLotSizeConstants

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETLotSizeConstants_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderLotSizeConstants || defined(INCLUDE_DXMARKETLotSizeConstants))
#define DXMARKETLotSizeConstants_

@interface DXMARKETLotSizeConstants : NSObject
@property (readonly, copy, class) NSString *MARKUP_PRICE_VALUE NS_SWIFT_NAME(MARKUP_PRICE_VALUE);

+ (NSString *)MARKUP_PRICE_VALUE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETLotSizeConstants)

inline NSString *DXMARKETLotSizeConstants_get_MARKUP_PRICE_VALUE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *DXMARKETLotSizeConstants_MARKUP_PRICE_VALUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETLotSizeConstants, MARKUP_PRICE_VALUE, NSString *)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETLotSizeConstants)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderLotSizeConstants DXMARKETLotSizeConstants;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderLotSizeConstants")
