
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioDataSource")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioDataSource
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioDataSource 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioDataSource 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioDataSource

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPortfolioDataSource_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioDataSource || defined(INCLUDE_DXMARKETPortfolioDataSource))
#define DXMARKETPortfolioDataSource_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartDataChartParamsListener 1
#define INCLUDE_DXMARKETChartParamsListener 1
#include "DXMARKETChartParamsListener.h"

@class DXMARKETPortfolioItem;
@protocol JavaUtilList;

@protocol DXMARKETPortfolioDataSource < DXMARKETChartParamsListener, JavaObject >

- (void)updateDataWithJavaUtilList:(id<JavaUtilList> __nonnull)accounts
                  withJavaUtilList:(id<JavaUtilList> __nonnull)positions
                  withJavaUtilList:(id<JavaUtilList> __nonnull)orders;

- (jint)getSize;

- (DXMARKETPortfolioItem *)getItemWithInt:(jint)i;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPortfolioDataSource)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPortfolioDataSource)

#define ComDevexpertsDxmarketClientModelChartPortfolioPortfolioDataSource DXMARKETPortfolioDataSource

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioDataSource")
