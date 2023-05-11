
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nValueParser")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseI18nValueParser
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nValueParser 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nValueParser 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseI18nValueParser

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETValueParser_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nValueParser || defined(INCLUDE_DXMARKETValueParser))
#define DXMARKETValueParser_

@class DXMARKETPriceBoundsParseResult;
@protocol DXMARKETOrderErrorStringProvider;

@protocol DXMARKETValueParser < JavaObject >

- (NSString *)parseQuantityBoundWithNSString:(NSString *)bound
        withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)provider;

- (DXMARKETPriceBoundsParseResult *)parsePriceBoundWithNSString:(NSString *)bound
                           withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)provider
                                                        withInt:(jint)precision
                                                        withInt:(jint)pipSize;

- (NSString *)parseOffsetBoundWithNSString:(NSString *)bound
      withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)provider
                                   withInt:(jint)precision
                                   withInt:(jint)pipSize
                               withBoolean:(jboolean)offsetAsPips;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETValueParser)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETValueParser)

#define ComDevexpertsDxmarketClientModelOrderBaseI18nValueParser DXMARKETValueParser

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseI18nValueParser")
