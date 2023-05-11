
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItem")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItem
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItem 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItem 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItem

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPortfolioItem_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItem || defined(INCLUDE_DXMARKETPortfolioItem))
#define DXMARKETPortfolioItem_

@interface DXMARKETPortfolioItem : NSObject
@property (readonly, class) jint ITEM_ORDER NS_SWIFT_NAME(ITEM_ORDER);
@property (readonly, class) jint ITEM_POSITION NS_SWIFT_NAME(ITEM_POSITION);
@property (readonly, class) jint DIRECTION_UP NS_SWIFT_NAME(DIRECTION_UP);
@property (readonly, class) jint DIRECTION_DOWN NS_SWIFT_NAME(DIRECTION_DOWN);

+ (jint)ITEM_ORDER;

+ (jint)ITEM_POSITION;

+ (jint)DIRECTION_UP;

+ (jint)DIRECTION_DOWN;

#pragma mark Public

- (instancetype __nonnull)initWithInt:(jint)type
                         withNSString:(NSString *)currency
                           withDouble:(jdouble)price
                             withLong:(jlong)size
                              withInt:(jint)direction
                             withLong:(jlong)timestamp
                               withId:(id)key
                               withId:(id)object;

- (jboolean)isEqual:(id)o;

- (NSString *)getCurrency;

- (jint)getDirection;

- (id)getKey;

- (id)getObject;

- (jdouble)getPrice;

- (jlong)getSize;

- (jlong)getTimestamp;

- (jint)getType;

- (NSUInteger)hash;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPortfolioItem)

inline jint DXMARKETPortfolioItem_get_ITEM_ORDER(void);
#define DXMARKETPortfolioItem_ITEM_ORDER 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETPortfolioItem, ITEM_ORDER, jint)

inline jint DXMARKETPortfolioItem_get_ITEM_POSITION(void);
#define DXMARKETPortfolioItem_ITEM_POSITION 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETPortfolioItem, ITEM_POSITION, jint)

inline jint DXMARKETPortfolioItem_get_DIRECTION_UP(void);
#define DXMARKETPortfolioItem_DIRECTION_UP 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETPortfolioItem, DIRECTION_UP, jint)

inline jint DXMARKETPortfolioItem_get_DIRECTION_DOWN(void);
#define DXMARKETPortfolioItem_DIRECTION_DOWN 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETPortfolioItem, DIRECTION_DOWN, jint)

FOUNDATION_EXPORT void DXMARKETPortfolioItem_initWithInt_withNSString_withDouble_withLong_withInt_withLong_withId_withId_(DXMARKETPortfolioItem *self, jint type, NSString *currency, jdouble price, jlong size, jint direction, jlong timestamp, id key, id object);

FOUNDATION_EXPORT DXMARKETPortfolioItem *new_DXMARKETPortfolioItem_initWithInt_withNSString_withDouble_withLong_withInt_withLong_withId_withId_(jint type, NSString *currency, jdouble price, jlong size, jint direction, jlong timestamp, id key, id object) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETPortfolioItem *create_DXMARKETPortfolioItem_initWithInt_withNSString_withDouble_withLong_withInt_withLong_withId_withId_(jint type, NSString *currency, jdouble price, jlong size, jint direction, jlong timestamp, id key, id object);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPortfolioItem)

@compatibility_alias ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItem DXMARKETPortfolioItem;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartPortfolioPortfolioItem")
