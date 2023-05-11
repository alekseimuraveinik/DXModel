
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartValueRange")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartValueRange
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartValueRange 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartValueRange 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartValueRange

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETValueRange_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartValueRange || defined(INCLUDE_DXMARKETValueRange))
#define DXMARKETValueRange_

@class DXMARKETRangeLabelsContext;

@interface DXMARKETValueRange : NSObject {
 @public
  jdouble maxValue_;
  jdouble minValue_;
  jdouble span_;
  jdouble labelStep_;
}

#pragma mark Public

- (instancetype __nonnull)init;

- (void)adjustBoundsWithInt:(jint)height
                 withDouble:(jdouble)label_height;

- (DXMARKETRangeLabelsContext *)calculateLabelsWithInt:(jint)height
                                               withInt:(jint)label_height
                                               withInt:(jint)precision;

- (jboolean)isEqual:(id)o;

- (jdouble)getPriceByYWithInt:(jint)y
                      withInt:(jint)height;

- (jint)getYbyPriceWithDouble:(jdouble)price
                      withInt:(jint)height;

- (NSUInteger)hash;

- (jboolean)scaledProperly;

- (void)setRangeWithDouble:(jdouble)min
                withDouble:(jdouble)max;

#pragma mark Package-Private

- (jboolean)isValueInsideWithDouble:(jdouble)value;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETValueRange)

FOUNDATION_EXPORT void DXMARKETValueRange_init(DXMARKETValueRange *self);

FOUNDATION_EXPORT DXMARKETValueRange *new_DXMARKETValueRange_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETValueRange *create_DXMARKETValueRange_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETValueRange)

@compatibility_alias ComDevexpertsDxmarketClientModelChartValueRange DXMARKETValueRange;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartValueRange")
