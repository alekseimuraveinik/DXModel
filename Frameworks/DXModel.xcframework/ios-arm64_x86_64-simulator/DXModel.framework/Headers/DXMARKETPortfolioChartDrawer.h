
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioChartDrawer")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioChartDrawer
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioChartDrawer 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioChartDrawer 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioChartDrawer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPortfolioChartDrawer_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioChartDrawer || defined(INCLUDE_DXMARKETPortfolioChartDrawer))
#define DXMARKETPortfolioChartDrawer_

@class DXMARKETHorizontalGridContext;
@protocol DXMARKETPortfolioItemDescriptionBuilder;
@protocol JavaUtilList;

@protocol DXMARKETPortfolioChartDrawer < JavaObject >

- (void)drawPortfolioWithDXMARKETHorizontalGridContext:(DXMARKETHorizontalGridContext *)context
                                      withJavaUtilList:(id<JavaUtilList>)stackList
           withDXMARKETPortfolioItemDescriptionBuilder:(id<DXMARKETPortfolioItemDescriptionBuilder>)descriptionBuilder;

- (jboolean)isChartCoordinates;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPortfolioChartDrawer)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPortfolioChartDrawer)

#define ComDevexpertsDxmarketClientModelChartPortfolioPortfolioChartDrawer DXMARKETPortfolioChartDrawer

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioChartDrawer")
