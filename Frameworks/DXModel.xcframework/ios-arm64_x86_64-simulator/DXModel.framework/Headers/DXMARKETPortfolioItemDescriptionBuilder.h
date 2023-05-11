
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemDescriptionBuilder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemDescriptionBuilder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemDescriptionBuilder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemDescriptionBuilder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemDescriptionBuilder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPortfolioItemDescriptionBuilder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemDescriptionBuilder || defined(INCLUDE_DXMARKETPortfolioItemDescriptionBuilder))
#define DXMARKETPortfolioItemDescriptionBuilder_

@class DXMARKETPortfolioItem;
@protocol JavaUtilList;

@protocol DXMARKETPortfolioItemDescriptionBuilder < JavaObject >

- (NSString *)toStringWithDXMARKETPortfolioItem:(DXMARKETPortfolioItem *)item;

- (NSString *)toStackStringWithJavaUtilList:(id<JavaUtilList>)items;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPortfolioItemDescriptionBuilder)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPortfolioItemDescriptionBuilder)

#define ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemDescriptionBuilder DXMARKETPortfolioItemDescriptionBuilder

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItemDescriptionBuilder")
