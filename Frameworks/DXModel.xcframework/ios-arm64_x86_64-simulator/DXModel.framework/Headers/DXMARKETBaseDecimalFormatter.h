
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilBaseDecimalFormatter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelUtilBaseDecimalFormatter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilBaseDecimalFormatter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilBaseDecimalFormatter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelUtilBaseDecimalFormatter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETBaseDecimalFormatter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilBaseDecimalFormatter || defined(INCLUDE_DXMARKETBaseDecimalFormatter))
#define DXMARKETBaseDecimalFormatter_

#define RESTRICT_ComDevexpertsMobileDxplatformApiUtilDecimalFormatter 1
#define INCLUDE_DXDecimalFormatter 1
#include "DXDecimalFormatter.h"

@interface DXMARKETBaseDecimalFormatter : NSObject < DXDecimalFormatter >

#pragma mark Public

- (instancetype __nonnull)init;

- (NSString *)formatLongDecimalWithLong:(jlong)value;

- (NSString *)getGroupDelimiter;

- (NSString *)getPointDelimiter;

- (jlong)parseLongDecimalWithNSString:(NSString *)valueStr
                              withInt:(jint)precision;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETBaseDecimalFormatter)

FOUNDATION_EXPORT void DXMARKETBaseDecimalFormatter_init(DXMARKETBaseDecimalFormatter *self);

FOUNDATION_EXPORT DXMARKETBaseDecimalFormatter *new_DXMARKETBaseDecimalFormatter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETBaseDecimalFormatter *create_DXMARKETBaseDecimalFormatter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETBaseDecimalFormatter)

@compatibility_alias ComDevexpertsDxmarketClientModelUtilBaseDecimalFormatter DXMARKETBaseDecimalFormatter;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelUtilBaseDecimalFormatter")
