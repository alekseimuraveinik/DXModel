
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nPriceBoundsParseResult")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseI18nPriceBoundsParseResult
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nPriceBoundsParseResult 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nPriceBoundsParseResult 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseI18nPriceBoundsParseResult

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPriceBoundsParseResult_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nPriceBoundsParseResult || defined(INCLUDE_DXMARKETPriceBoundsParseResult))
#define DXMARKETPriceBoundsParseResult_

@interface DXMARKETPriceBoundsParseResult : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)strResult
                               withBoolean:(jboolean)relative;

- (NSString *)getStrResult;

- (jboolean)isRelative;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPriceBoundsParseResult)

FOUNDATION_EXPORT void DXMARKETPriceBoundsParseResult_initWithNSString_withBoolean_(DXMARKETPriceBoundsParseResult *self, NSString *strResult, jboolean relative);

FOUNDATION_EXPORT DXMARKETPriceBoundsParseResult *new_DXMARKETPriceBoundsParseResult_initWithNSString_withBoolean_(NSString *strResult, jboolean relative) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPriceBoundsParseResult *create_DXMARKETPriceBoundsParseResult_initWithNSString_withBoolean_(NSString *strResult, jboolean relative);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPriceBoundsParseResult)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseI18nPriceBoundsParseResult DXMARKETPriceBoundsParseResult;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nPriceBoundsParseResult")
