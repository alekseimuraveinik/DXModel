
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioBasePortfolioDataSource")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplPortfolioBasePortfolioDataSource
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioBasePortfolioDataSource 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioBasePortfolioDataSource 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplPortfolioBasePortfolioDataSource

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETBasePortfolioDataSource_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioBasePortfolioDataSource || defined(INCLUDE_DXMARKETBasePortfolioDataSource))
#define DXMARKETBasePortfolioDataSource_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParamsListener 1
#define INCLUDE_DXMARKETChartParamsListener_Template 1
#include "DXMARKETChartParamsListener.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioDataSource 1
#define INCLUDE_DXMARKETPortfolioDataSource 1
#include "DXMARKETPortfolioDataSource.h"

@class DXMARKETChartParams_PortfolioViewMode;
@class DXMARKETPortfolioItem;
@protocol DXMARKETPortfolioFilter;
@protocol JavaUtilList;

@interface DXMARKETBasePortfolioDataSource : DXMARKETChartParamsListener_Template < DXMARKETPortfolioDataSource >

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString * __nonnull)symbol
               withDXMARKETPortfolioFilter:(id<DXMARKETPortfolioFilter> __nonnull)filter;

- (DXMARKETPortfolioItem *)getItemWithInt:(jint)i;

- (jint)getSize;

- (void)portfolioViewModeChangedWithDXMARKETChartParams_PortfolioViewMode:(DXMARKETChartParams_PortfolioViewMode * __nonnull)mode;

- (void)updateDataWithJavaUtilList:(id<JavaUtilList> __nonnull)accounts
                  withJavaUtilList:(id<JavaUtilList> __nonnull)positions
                  withJavaUtilList:(id<JavaUtilList> __nonnull)orders;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETBasePortfolioDataSource)

FOUNDATION_EXPORT void DXMARKETBasePortfolioDataSource_initWithNSString_withDXMARKETPortfolioFilter_(DXMARKETBasePortfolioDataSource *self, NSString *symbol, id<DXMARKETPortfolioFilter> filter);

FOUNDATION_EXPORT DXMARKETBasePortfolioDataSource *new_DXMARKETBasePortfolioDataSource_initWithNSString_withDXMARKETPortfolioFilter_(NSString *symbol, id<DXMARKETPortfolioFilter> filter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETBasePortfolioDataSource *create_DXMARKETBasePortfolioDataSource_initWithNSString_withDXMARKETPortfolioFilter_(NSString *symbol, id<DXMARKETPortfolioFilter> filter);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETBasePortfolioDataSource)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplPortfolioBasePortfolioDataSource DXMARKETBasePortfolioDataSource;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioBasePortfolioDataSource")
