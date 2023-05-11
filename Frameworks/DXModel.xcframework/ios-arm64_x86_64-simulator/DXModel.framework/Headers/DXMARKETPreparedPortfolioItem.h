
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPreparedPortfolioItem")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPreparedPortfolioItem
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPreparedPortfolioItem 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPreparedPortfolioItem 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPreparedPortfolioItem

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPreparedPortfolioItem_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPreparedPortfolioItem || defined(INCLUDE_DXMARKETPreparedPortfolioItem))
#define DXMARKETPreparedPortfolioItem_

@class DXMARKETPortfolioItem;

@interface DXMARKETPreparedPortfolioItem : NSObject
@property (readonly, class) jint NOT_SET NS_SWIFT_NAME(NOT_SET);

+ (jint)NOT_SET;

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETPortfolioItem:(DXMARKETPortfolioItem *)value
                                                withInt:(jint)x
                                                withInt:(jint)y
                                                withInt:(jint)xIndex;

- (jint)getMaxY;

- (jint)getMinY;

- (DXMARKETPortfolioItem *)getValue;

- (jint)getX;

- (jint)getXIndex;

- (jint)getY;

- (void)setMaxYWithInt:(jint)maxY;

- (void)setMinYWithInt:(jint)minY;

- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPreparedPortfolioItem)

inline jint DXMARKETPreparedPortfolioItem_get_NOT_SET(void);
#define DXMARKETPreparedPortfolioItem_NOT_SET 2147483647
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETPreparedPortfolioItem, NOT_SET, jint)

FOUNDATION_EXPORT void DXMARKETPreparedPortfolioItem_initWithDXMARKETPortfolioItem_withInt_withInt_withInt_(DXMARKETPreparedPortfolioItem *self, DXMARKETPortfolioItem *value, jint x, jint y, jint xIndex);

FOUNDATION_EXPORT DXMARKETPreparedPortfolioItem *new_DXMARKETPreparedPortfolioItem_initWithDXMARKETPortfolioItem_withInt_withInt_withInt_(DXMARKETPortfolioItem *value, jint x, jint y, jint xIndex) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPreparedPortfolioItem *create_DXMARKETPreparedPortfolioItem_initWithDXMARKETPortfolioItem_withInt_withInt_withInt_(DXMARKETPortfolioItem *value, jint x, jint y, jint xIndex);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPreparedPortfolioItem)

@compatibility_alias ComDevexpertsDxmarketClientModelChartPortfolioPreparedPortfolioItem DXMARKETPreparedPortfolioItem;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPreparedPortfolioItem")
