
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartValueAxis")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartValueAxis
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartValueAxis 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartValueAxis 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartValueAxis

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETValueAxis_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartValueAxis || defined(INCLUDE_DXMARKETValueAxis))
#define DXMARKETValueAxis_

@interface DXMARKETValueAxis : NSObject {
 @public
  jint height_;
  jdouble max_y_;
  jdouble min_y_;
  jdouble span_;
}
@property (readonly, class) jint THOUSANDS NS_SWIFT_NAME(THOUSANDS);
@property (readonly, class) jint MILLIONS NS_SWIFT_NAME(MILLIONS);
@property (readonly, class) jint BILLIONS NS_SWIFT_NAME(BILLIONS);
@property (readonly, class) jdouble THOUSANDTHS NS_SWIFT_NAME(THOUSANDTHS);
@property (readonly, class) jdouble MILLIONTHS NS_SWIFT_NAME(MILLIONTHS);
@property (readonly, class) jdouble BILLIONTHS NS_SWIFT_NAME(BILLIONTHS);

+ (jint)THOUSANDS;

+ (jint)MILLIONS;

+ (jint)BILLIONS;

+ (jdouble)THOUSANDTHS;

+ (jdouble)MILLIONTHS;

+ (jdouble)BILLIONTHS;

#pragma mark Public

- (instancetype __nonnull)init;

- (jint)getLabelHeight;

- (jdouble)getLabelStep;

- (jdouble)getLowestLabel;

- (jint)getYbyPriceWithDouble:(jdouble)price;

#pragma mark Package-Private

- (jdouble)getPriceByYWithInt:(jint)y;

- (jboolean)scaledProperly;

- (void)setLabelHeightWithInt:(jint)lh;

- (void)setRangeWithDouble:(jdouble)min_y
                withDouble:(jdouble)max_y;

- (void)updateHeightWithInt:(jint)h;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETValueAxis)

inline jint DXMARKETValueAxis_get_THOUSANDS(void);
#define DXMARKETValueAxis_THOUSANDS 1000
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETValueAxis, THOUSANDS, jint)

inline jint DXMARKETValueAxis_get_MILLIONS(void);
#define DXMARKETValueAxis_MILLIONS 1000000
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETValueAxis, MILLIONS, jint)

inline jint DXMARKETValueAxis_get_BILLIONS(void);
#define DXMARKETValueAxis_BILLIONS 1000000000
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETValueAxis, BILLIONS, jint)

inline jdouble DXMARKETValueAxis_get_THOUSANDTHS(void);
#define DXMARKETValueAxis_THOUSANDTHS 0.001
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETValueAxis, THOUSANDTHS, jdouble)

inline jdouble DXMARKETValueAxis_get_MILLIONTHS(void);
#define DXMARKETValueAxis_MILLIONTHS 1.0E-6
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETValueAxis, MILLIONTHS, jdouble)

inline jdouble DXMARKETValueAxis_get_BILLIONTHS(void);
#define DXMARKETValueAxis_BILLIONTHS 1.0E-9
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETValueAxis, BILLIONTHS, jdouble)

FOUNDATION_EXPORT void DXMARKETValueAxis_init(DXMARKETValueAxis *self);

FOUNDATION_EXPORT DXMARKETValueAxis *new_DXMARKETValueAxis_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETValueAxis *create_DXMARKETValueAxis_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETValueAxis)

@compatibility_alias ComDevexpertsDxmarketClientModelChartValueAxis DXMARKETValueAxis;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartValueAxis")
