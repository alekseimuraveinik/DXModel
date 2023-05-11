
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataIndicatorsChartRequesterAdapter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartDataIndicatorsChartRequesterAdapter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataIndicatorsChartRequesterAdapter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataIndicatorsChartRequesterAdapter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartDataIndicatorsChartRequesterAdapter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETIndicatorsChartRequesterAdapter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataIndicatorsChartRequesterAdapter || defined(INCLUDE_DXMARKETIndicatorsChartRequesterAdapter))
#define DXMARKETIndicatorsChartRequesterAdapter_

@class PSListTO;
@protocol JavaUtilList;

@interface DXMARKETIndicatorsChartRequesterAdapter : NSObject

#pragma mark Public

- (PSListTO *)getIndicators;

#pragma mark Package-Private

- (instancetype __nonnull)initWithJavaUtilList:(id<JavaUtilList>)indicators;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETIndicatorsChartRequesterAdapter)

FOUNDATION_EXPORT void DXMARKETIndicatorsChartRequesterAdapter_initWithJavaUtilList_(DXMARKETIndicatorsChartRequesterAdapter *self, id<JavaUtilList> indicators);

FOUNDATION_EXPORT DXMARKETIndicatorsChartRequesterAdapter *new_DXMARKETIndicatorsChartRequesterAdapter_initWithJavaUtilList_(id<JavaUtilList> indicators) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETIndicatorsChartRequesterAdapter *create_DXMARKETIndicatorsChartRequesterAdapter_initWithJavaUtilList_(id<JavaUtilList> indicators);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETIndicatorsChartRequesterAdapter)

@compatibility_alias ComDevexpertsDxmarketClientModelChartDataIndicatorsChartRequesterAdapter DXMARKETIndicatorsChartRequesterAdapter;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartDataIndicatorsChartRequesterAdapter")
