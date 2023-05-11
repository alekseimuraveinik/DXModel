
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPreparedPortfolioItem")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPreparedPortfolioItem
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPreparedPortfolioItem 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPreparedPortfolioItem 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPreparedPortfolioItem

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETDefaultPreparedPortfolioItem_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPreparedPortfolioItem || defined(INCLUDE_DXMARKETDefaultPreparedPortfolioItem))
#define DXMARKETDefaultPreparedPortfolioItem_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPreparedPortfolioItem 1
#define INCLUDE_DXMARKETPreparedPortfolioItem 1
#include "DXMARKETPreparedPortfolioItem.h"

@class DXMARKETPortfolioItem;

@interface DXMARKETDefaultPreparedPortfolioItem : DXMARKETPreparedPortfolioItem

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETPortfolioItem:(DXMARKETPortfolioItem *)value
                                                withInt:(jint)x
                                                withInt:(jint)y
                                                withInt:(jint)xIndex;

- (jint)getExpandedY;

- (jint)getY;

- (jboolean)isShifted;

- (void)restoreShifting;

- (void)setExpandedYWithInt:(jint)expandedY;

- (void)shiftWithInt:(jint)newY;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETDefaultPreparedPortfolioItem)

FOUNDATION_EXPORT void DXMARKETDefaultPreparedPortfolioItem_initWithDXMARKETPortfolioItem_withInt_withInt_withInt_(DXMARKETDefaultPreparedPortfolioItem *self, DXMARKETPortfolioItem *value, jint x, jint y, jint xIndex);

FOUNDATION_EXPORT DXMARKETDefaultPreparedPortfolioItem *new_DXMARKETDefaultPreparedPortfolioItem_initWithDXMARKETPortfolioItem_withInt_withInt_withInt_(DXMARKETPortfolioItem *value, jint x, jint y, jint xIndex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETDefaultPreparedPortfolioItem *create_DXMARKETDefaultPreparedPortfolioItem_initWithDXMARKETPortfolioItem_withInt_withInt_withInt_(DXMARKETPortfolioItem *value, jint x, jint y, jint xIndex);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETDefaultPreparedPortfolioItem)

@compatibility_alias ComDevexpertsDxmarketClientModelChartPortfolioDefaultPreparedPortfolioItem DXMARKETDefaultPreparedPortfolioItem;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioDefaultPreparedPortfolioItem")
