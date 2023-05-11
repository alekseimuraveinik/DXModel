
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertExpressionStringProvider")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertExpressionStringProvider
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertExpressionStringProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertExpressionStringProvider 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertExpressionStringProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAlertExpressionStringProvider_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertExpressionStringProvider || defined(INCLUDE_DXMARKETAlertExpressionStringProvider))
#define DXMARKETAlertExpressionStringProvider_

@class DXMarketFieldEnum;
@class JavaUtilHashtable;

@interface DXMARKETAlertExpressionStringProvider : NSObject
@property (class, strong) JavaUtilHashtable *MARKET_FIELD_NAMES NS_SWIFT_NAME(MARKET_FIELD_NAMES);

+ (JavaUtilHashtable *)MARKET_FIELD_NAMES;

+ (void)setMARKET_FIELD_NAMES:(JavaUtilHashtable *)value;

#pragma mark Public

- (instancetype __nonnull)init;

+ (NSString *)getMarketFieldNameWithDXMarketFieldEnum:(DXMarketFieldEnum *)field;

@end

J2OBJC_STATIC_INIT(DXMARKETAlertExpressionStringProvider)

inline JavaUtilHashtable *DXMARKETAlertExpressionStringProvider_get_MARKET_FIELD_NAMES(void);
inline JavaUtilHashtable *DXMARKETAlertExpressionStringProvider_set_MARKET_FIELD_NAMES(JavaUtilHashtable *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilHashtable *DXMARKETAlertExpressionStringProvider_MARKET_FIELD_NAMES;
J2OBJC_STATIC_FIELD_OBJ(DXMARKETAlertExpressionStringProvider, MARKET_FIELD_NAMES, JavaUtilHashtable *)

FOUNDATION_EXPORT void DXMARKETAlertExpressionStringProvider_init(DXMARKETAlertExpressionStringProvider *self);

FOUNDATION_EXPORT DXMARKETAlertExpressionStringProvider *new_DXMARKETAlertExpressionStringProvider_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETAlertExpressionStringProvider *create_DXMARKETAlertExpressionStringProvider_init(void);

FOUNDATION_EXPORT NSString *DXMARKETAlertExpressionStringProvider_getMarketFieldNameWithDXMarketFieldEnum_(DXMarketFieldEnum *field);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAlertExpressionStringProvider)

@compatibility_alias ComDevexpertsDxmarketClientModelAlertAlertExpressionStringProvider DXMARKETAlertExpressionStringProvider;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertExpressionStringProvider")
