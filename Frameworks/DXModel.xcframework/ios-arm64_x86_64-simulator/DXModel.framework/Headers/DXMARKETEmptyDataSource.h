
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioEmptyDataSource")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioEmptyDataSource
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioEmptyDataSource 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioEmptyDataSource 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioEmptyDataSource

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETEmptyDataSource_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioEmptyDataSource || defined(INCLUDE_DXMARKETEmptyDataSource))
#define DXMARKETEmptyDataSource_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParamsListener 1
#define INCLUDE_DXMARKETChartParamsListener_Template 1
#include "DXMARKETChartParamsListener.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioDataSource 1
#define INCLUDE_DXMARKETPortfolioDataSource 1
#include "DXMARKETPortfolioDataSource.h"

@class DXMARKETPortfolioItem;
@protocol JavaUtilList;

@interface DXMARKETEmptyDataSource : DXMARKETChartParamsListener_Template < DXMARKETPortfolioDataSource >

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMARKETPortfolioItem *)getItemWithInt:(jint)i;

- (jint)getSize;

- (void)updateDataWithJavaUtilList:(id<JavaUtilList> __nonnull)accounts
                  withJavaUtilList:(id<JavaUtilList> __nonnull)positions
                  withJavaUtilList:(id<JavaUtilList> __nonnull)orders;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETEmptyDataSource)

FOUNDATION_EXPORT void DXMARKETEmptyDataSource_init(DXMARKETEmptyDataSource *self);

FOUNDATION_EXPORT DXMARKETEmptyDataSource *new_DXMARKETEmptyDataSource_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETEmptyDataSource *create_DXMARKETEmptyDataSource_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETEmptyDataSource)

@compatibility_alias ComDevexpertsDxmarketClientModelChartPortfolioEmptyDataSource DXMARKETEmptyDataSource;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioEmptyDataSource")
