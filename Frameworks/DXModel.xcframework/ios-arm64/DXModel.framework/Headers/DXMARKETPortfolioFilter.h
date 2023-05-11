
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioPortfolioFilter")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartImplPortfolioPortfolioFilter
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioPortfolioFilter 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioPortfolioFilter 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartImplPortfolioPortfolioFilter

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPortfolioFilter_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioPortfolioFilter || defined(INCLUDE_DXMARKETPortfolioFilter))
#define DXMARKETPortfolioFilter_

@class DXOrderTO;
@class DXPositionTO;

@protocol DXMARKETPortfolioFilter < JavaObject >

- (jboolean)acceptableWithDXOrderTO:(DXOrderTO *)item;

- (jboolean)acceptableWithDXPositionTO:(DXPositionTO *)item;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPortfolioFilter)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPortfolioFilter)

#define ComDevexpertsDxmarketClientModelChartImplPortfolioPortfolioFilter DXMARKETPortfolioFilter

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartImplPortfolioPortfolioFilter")
