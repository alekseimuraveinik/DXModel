
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioFilter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioFilter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioFilter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioFilter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioFilter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETDefaultPortfolioFilter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioFilter || defined(INCLUDE_DXMARKETDefaultPortfolioFilter))
#define DXMARKETDefaultPortfolioFilter_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartImplPortfolioPortfolioFilter 1
#define INCLUDE_DXMARKETPortfolioFilter 1
#include "DXMARKETPortfolioFilter.h"

@class DXOrderTO;
@class DXPositionTO;

@interface DXMARKETDefaultPortfolioFilter : NSObject < DXMARKETPortfolioFilter >

#pragma mark Public

- (instancetype __nonnull)init;

- (jboolean)acceptableWithDXOrderTO:(DXOrderTO *)item;

- (jboolean)acceptableWithDXPositionTO:(DXPositionTO *)item;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETDefaultPortfolioFilter)

FOUNDATION_EXPORT void DXMARKETDefaultPortfolioFilter_init(DXMARKETDefaultPortfolioFilter *self);

FOUNDATION_EXPORT DXMARKETDefaultPortfolioFilter *new_DXMARKETDefaultPortfolioFilter_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETDefaultPortfolioFilter *create_DXMARKETDefaultPortfolioFilter_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETDefaultPortfolioFilter)

@compatibility_alias ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioFilter DXMARKETDefaultPortfolioFilter;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioDefaultPortfolioFilter")
