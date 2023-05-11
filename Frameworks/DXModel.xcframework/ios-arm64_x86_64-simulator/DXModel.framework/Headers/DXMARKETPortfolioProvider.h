
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioProvider")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioProvider
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioProvider 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPortfolioProvider_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioProvider || defined(INCLUDE_DXMARKETPortfolioProvider))
#define DXMARKETPortfolioProvider_

@class DXMARKETDrawChartContext;
@class DXMARKETHorizontalGridContext;
@protocol JavaUtilList;

@protocol DXMARKETPortfolioProvider < JavaObject >

- (jboolean)isStateful;

- (id<JavaUtilList>)prepareStacksWithDXMARKETDrawChartContext:(DXMARKETDrawChartContext *)drawContext
                            withDXMARKETHorizontalGridContext:(DXMARKETHorizontalGridContext *)gridContext
                                                      withInt:(jint)itemSize;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPortfolioProvider)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPortfolioProvider)

#define ComDevexpertsDxmarketClientModelChartPortfolioPortfolioProvider DXMARKETPortfolioProvider

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioProvider")
