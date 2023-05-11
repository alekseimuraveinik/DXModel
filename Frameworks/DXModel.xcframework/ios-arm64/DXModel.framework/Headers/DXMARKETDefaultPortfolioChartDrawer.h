
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioChartDrawer")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioChartDrawer
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioChartDrawer 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioChartDrawer 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioChartDrawer

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETDefaultPortfolioChartDrawer_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioChartDrawer || defined(INCLUDE_DXMARKETDefaultPortfolioChartDrawer))
#define DXMARKETDefaultPortfolioChartDrawer_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioChartDrawer 1
#define INCLUDE_DXMARKETPortfolioChartDrawer 1
#include "DXMARKETPortfolioChartDrawer.h"

@class DXMARKETHorizontalGridContext;
@protocol DXMARKETPortfolioItemDescriptionBuilder;
@protocol JavaUtilList;

@interface DXMARKETDefaultPortfolioChartDrawer : NSObject < DXMARKETPortfolioChartDrawer >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)drawPortfolioWithDXMARKETHorizontalGridContext:(DXMARKETHorizontalGridContext *)context
                                      withJavaUtilList:(id<JavaUtilList>)stackList
           withDXMARKETPortfolioItemDescriptionBuilder:(id<DXMARKETPortfolioItemDescriptionBuilder>)descriptionBuilder;

- (jboolean)isChartCoordinates;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETDefaultPortfolioChartDrawer)

FOUNDATION_EXPORT void DXMARKETDefaultPortfolioChartDrawer_init(DXMARKETDefaultPortfolioChartDrawer *self);

FOUNDATION_EXPORT DXMARKETDefaultPortfolioChartDrawer *new_DXMARKETDefaultPortfolioChartDrawer_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETDefaultPortfolioChartDrawer *create_DXMARKETDefaultPortfolioChartDrawer_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETDefaultPortfolioChartDrawer)

@compatibility_alias ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioChartDrawer DXMARKETDefaultPortfolioChartDrawer;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPortfolioChartDrawer")
