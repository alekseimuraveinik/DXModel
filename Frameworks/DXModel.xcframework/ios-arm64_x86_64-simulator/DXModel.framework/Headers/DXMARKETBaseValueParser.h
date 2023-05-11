
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nBaseValueParser")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseI18nBaseValueParser
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nBaseValueParser 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nBaseValueParser 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseI18nBaseValueParser

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETBaseValueParser_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nBaseValueParser || defined(INCLUDE_DXMARKETBaseValueParser))
#define DXMARKETBaseValueParser_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseI18nValueParser 1
#define INCLUDE_DXMARKETValueParser 1
#include "DXMARKETValueParser.h"

@class DXMARKETPriceBoundsParseResult;
@protocol DXMARKETOrderErrorStringProvider;

@interface DXMARKETBaseValueParser : NSObject < DXMARKETValueParser >

#pragma mark Public

- (instancetype __nonnull)init;

- (NSString *)parseOffsetBoundWithNSString:(NSString *)bound
      withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)provider
                                   withInt:(jint)precision
                                   withInt:(jint)pipSize
                               withBoolean:(jboolean)offsetAsPips;

- (DXMARKETPriceBoundsParseResult *)parsePriceBoundWithNSString:(NSString *)bound
                           withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)provider
                                                        withInt:(jint)precision
                                                        withInt:(jint)pipSize;

- (NSString *)parseQuantityBoundWithNSString:(NSString *)bound
        withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)provider;

#pragma mark Package-Private

- (jboolean)checkValidBoundWithNSString:(NSString *)bound;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETBaseValueParser)

FOUNDATION_EXPORT void DXMARKETBaseValueParser_init(DXMARKETBaseValueParser *self);

FOUNDATION_EXPORT DXMARKETBaseValueParser *new_DXMARKETBaseValueParser_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETBaseValueParser *create_DXMARKETBaseValueParser_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETBaseValueParser)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseI18nBaseValueParser DXMARKETBaseValueParser;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nBaseValueParser")
