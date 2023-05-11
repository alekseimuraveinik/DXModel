
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionMarketFieldEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionMarketFieldEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionMarketFieldEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionMarketFieldEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionMarketFieldEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarketFieldEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionMarketFieldEnum || defined(INCLUDE_DXMarketFieldEnum))
#define DXMarketFieldEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXMarketFieldEnum : PSBaseEnum
@property (readonly, class, strong) DXMarketFieldEnum *QUOTE_BID_PRICE NS_SWIFT_NAME(QUOTE_BID_PRICE);
@property (readonly, class, strong) DXMarketFieldEnum *QUOTE_ASK_PRICE NS_SWIFT_NAME(QUOTE_ASK_PRICE);
@property (readonly, class, strong) DXMarketFieldEnum *QUOTE_BID_SIZE NS_SWIFT_NAME(QUOTE_BID_SIZE);
@property (readonly, class, strong) DXMarketFieldEnum *QUOTE_ASK_SIZE NS_SWIFT_NAME(QUOTE_ASK_SIZE);
@property (readonly, class, strong) DXMarketFieldEnum *TRADE_PRICE NS_SWIFT_NAME(TRADE_PRICE);
@property (readonly, class, strong) DXMarketFieldEnum *TRADE_DAY_VOLUME NS_SWIFT_NAME(TRADE_DAY_VOLUME);
@property (readonly, class, strong) DXMarketFieldEnum *SUMMARY_DAY_OPEN_PRICE NS_SWIFT_NAME(SUMMARY_DAY_OPEN_PRICE);
@property (readonly, class, strong) DXMarketFieldEnum *SUMMARY_DAY_HIGH_PRICE NS_SWIFT_NAME(SUMMARY_DAY_HIGH_PRICE);
@property (readonly, class, strong) DXMarketFieldEnum *SUMMARY_DAY_LOW_PRICE NS_SWIFT_NAME(SUMMARY_DAY_LOW_PRICE);
@property (readonly, class, strong) DXMarketFieldEnum *SUMMARY_DAY_CLOSE_PRICE NS_SWIFT_NAME(SUMMARY_DAY_CLOSE_PRICE);
@property (readonly, class, strong) DXMarketFieldEnum *SUMMARY_PREV_DAY_CLOSE_PRICE NS_SWIFT_NAME(SUMMARY_PREV_DAY_CLOSE_PRICE);
@property (readonly, class, strong) DXMarketFieldEnum *SUMMARY_OPEN_INTEREST NS_SWIFT_NAME(SUMMARY_OPEN_INTEREST);
@property (readonly, class, strong) DXMarketFieldEnum *GREEKS_VOLATILITY NS_SWIFT_NAME(GREEKS_VOLATILITY);
@property (readonly, class, strong) DXMarketFieldEnum *GREEKS_DELTA NS_SWIFT_NAME(GREEKS_DELTA);
@property (readonly, class, strong) DXMarketFieldEnum *GREEKS_GAMMA NS_SWIFT_NAME(GREEKS_GAMMA);
@property (readonly, class, strong) DXMarketFieldEnum *GREEKS_THETA NS_SWIFT_NAME(GREEKS_THETA);
@property (readonly, class, strong) DXMarketFieldEnum *GREEKS_RHO NS_SWIFT_NAME(GREEKS_RHO);
@property (readonly, class, strong) DXMarketFieldEnum *GREEKS_VEGA NS_SWIFT_NAME(GREEKS_VEGA);
@property (readonly, class, strong) DXMarketFieldEnum *UNDERLYING_VOLATILITY NS_SWIFT_NAME(UNDERLYING_VOLATILITY);
@property (readonly, class, strong) DXMarketFieldEnum *UNDERLYING_FRONT_VOLATILITY NS_SWIFT_NAME(UNDERLYING_FRONT_VOLATILITY);
@property (readonly, class, strong) DXMarketFieldEnum *UNDERLYING_BACK_VOLATILITY NS_SWIFT_NAME(UNDERLYING_BACK_VOLATILITY);
@property (readonly, class, strong) DXMarketFieldEnum *UNDERLYING_PUT_CALL_RATIO NS_SWIFT_NAME(UNDERLYING_PUT_CALL_RATIO);
@property (readonly, class, strong) DXMarketFieldEnum *PROFILE_DESCRIPTION NS_SWIFT_NAME(PROFILE_DESCRIPTION);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_LOT_SIZE NS_SWIFT_NAME(CALC_LOT_SIZE);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_CHANGE NS_SWIFT_NAME(CALC_CHANGE);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_CHANGE_PERCENT NS_SWIFT_NAME(CALC_CHANGE_PERCENT);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_LAST_CHANGE NS_SWIFT_NAME(CALC_LAST_CHANGE);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_LAST_CHANGE_PERCENT NS_SWIFT_NAME(CALC_LAST_CHANGE_PERCENT);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_CHANGE_SINCE_OPEN NS_SWIFT_NAME(CALC_CHANGE_SINCE_OPEN);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_GAP NS_SWIFT_NAME(CALC_GAP);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_GAP_PERCENT NS_SWIFT_NAME(CALC_GAP_PERCENT);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_MARK NS_SWIFT_NAME(CALC_MARK);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_MARK_CHANGE NS_SWIFT_NAME(CALC_MARK_CHANGE);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_MARK_CHANGE_PERCENT NS_SWIFT_NAME(CALC_MARK_CHANGE_PERCENT);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_MID NS_SWIFT_NAME(CALC_MID);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_MID_CHANGE NS_SWIFT_NAME(CALC_MID_CHANGE);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_MID_CHANGE_PERCENT NS_SWIFT_NAME(CALC_MID_CHANGE_PERCENT);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_SPREAD NS_SWIFT_NAME(CALC_SPREAD);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_SPREAD_PERCENT NS_SWIFT_NAME(CALC_SPREAD_PERCENT);
@property (readonly, class, strong) DXMarketFieldEnum *CALC_DAY_RANGE NS_SWIFT_NAME(CALC_DAY_RANGE);

+ (DXMarketFieldEnum *)QUOTE_BID_PRICE;

+ (DXMarketFieldEnum *)QUOTE_ASK_PRICE;

+ (DXMarketFieldEnum *)QUOTE_BID_SIZE;

+ (DXMarketFieldEnum *)QUOTE_ASK_SIZE;

+ (DXMarketFieldEnum *)TRADE_PRICE;

+ (DXMarketFieldEnum *)TRADE_DAY_VOLUME;

+ (DXMarketFieldEnum *)SUMMARY_DAY_OPEN_PRICE;

+ (DXMarketFieldEnum *)SUMMARY_DAY_HIGH_PRICE;

+ (DXMarketFieldEnum *)SUMMARY_DAY_LOW_PRICE;

+ (DXMarketFieldEnum *)SUMMARY_DAY_CLOSE_PRICE;

+ (DXMarketFieldEnum *)SUMMARY_PREV_DAY_CLOSE_PRICE;

+ (DXMarketFieldEnum *)SUMMARY_OPEN_INTEREST;

+ (DXMarketFieldEnum *)GREEKS_VOLATILITY;

+ (DXMarketFieldEnum *)GREEKS_DELTA;

+ (DXMarketFieldEnum *)GREEKS_GAMMA;

+ (DXMarketFieldEnum *)GREEKS_THETA;

+ (DXMarketFieldEnum *)GREEKS_RHO;

+ (DXMarketFieldEnum *)GREEKS_VEGA;

+ (DXMarketFieldEnum *)UNDERLYING_VOLATILITY;

+ (DXMarketFieldEnum *)UNDERLYING_FRONT_VOLATILITY;

+ (DXMarketFieldEnum *)UNDERLYING_BACK_VOLATILITY;

+ (DXMarketFieldEnum *)UNDERLYING_PUT_CALL_RATIO;

+ (DXMarketFieldEnum *)PROFILE_DESCRIPTION;

+ (DXMarketFieldEnum *)CALC_LOT_SIZE;

+ (DXMarketFieldEnum *)CALC_CHANGE;

+ (DXMarketFieldEnum *)CALC_CHANGE_PERCENT;

+ (DXMarketFieldEnum *)CALC_LAST_CHANGE;

+ (DXMarketFieldEnum *)CALC_LAST_CHANGE_PERCENT;

+ (DXMarketFieldEnum *)CALC_CHANGE_SINCE_OPEN;

+ (DXMarketFieldEnum *)CALC_GAP;

+ (DXMarketFieldEnum *)CALC_GAP_PERCENT;

+ (DXMarketFieldEnum *)CALC_MARK;

+ (DXMarketFieldEnum *)CALC_MARK_CHANGE;

+ (DXMarketFieldEnum *)CALC_MARK_CHANGE_PERCENT;

+ (DXMarketFieldEnum *)CALC_MID;

+ (DXMarketFieldEnum *)CALC_MID_CHANGE;

+ (DXMarketFieldEnum *)CALC_MID_CHANGE_PERCENT;

+ (DXMarketFieldEnum *)CALC_SPREAD;

+ (DXMarketFieldEnum *)CALC_SPREAD_PERCENT;

+ (DXMarketFieldEnum *)CALC_DAY_RANGE;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXMarketFieldEnum *)change;

- (DXMarketFieldEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXMarketFieldEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXMarketFieldEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXMarketFieldEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXMarketFieldEnum)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_QUOTE_BID_PRICE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_QUOTE_BID_PRICE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, QUOTE_BID_PRICE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_QUOTE_ASK_PRICE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_QUOTE_ASK_PRICE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, QUOTE_ASK_PRICE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_QUOTE_BID_SIZE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_QUOTE_BID_SIZE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, QUOTE_BID_SIZE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_QUOTE_ASK_SIZE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_QUOTE_ASK_SIZE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, QUOTE_ASK_SIZE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_TRADE_PRICE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_TRADE_PRICE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, TRADE_PRICE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_TRADE_DAY_VOLUME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_TRADE_DAY_VOLUME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, TRADE_DAY_VOLUME, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_SUMMARY_DAY_OPEN_PRICE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_SUMMARY_DAY_OPEN_PRICE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, SUMMARY_DAY_OPEN_PRICE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_SUMMARY_DAY_HIGH_PRICE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_SUMMARY_DAY_HIGH_PRICE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, SUMMARY_DAY_HIGH_PRICE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_SUMMARY_DAY_LOW_PRICE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_SUMMARY_DAY_LOW_PRICE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, SUMMARY_DAY_LOW_PRICE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_SUMMARY_DAY_CLOSE_PRICE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_SUMMARY_DAY_CLOSE_PRICE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, SUMMARY_DAY_CLOSE_PRICE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_SUMMARY_PREV_DAY_CLOSE_PRICE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_SUMMARY_PREV_DAY_CLOSE_PRICE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, SUMMARY_PREV_DAY_CLOSE_PRICE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_SUMMARY_OPEN_INTEREST(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_SUMMARY_OPEN_INTEREST;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, SUMMARY_OPEN_INTEREST, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_GREEKS_VOLATILITY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_GREEKS_VOLATILITY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, GREEKS_VOLATILITY, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_GREEKS_DELTA(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_GREEKS_DELTA;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, GREEKS_DELTA, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_GREEKS_GAMMA(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_GREEKS_GAMMA;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, GREEKS_GAMMA, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_GREEKS_THETA(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_GREEKS_THETA;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, GREEKS_THETA, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_GREEKS_RHO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_GREEKS_RHO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, GREEKS_RHO, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_GREEKS_VEGA(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_GREEKS_VEGA;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, GREEKS_VEGA, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_UNDERLYING_VOLATILITY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_UNDERLYING_VOLATILITY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, UNDERLYING_VOLATILITY, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_UNDERLYING_FRONT_VOLATILITY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_UNDERLYING_FRONT_VOLATILITY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, UNDERLYING_FRONT_VOLATILITY, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_UNDERLYING_BACK_VOLATILITY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_UNDERLYING_BACK_VOLATILITY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, UNDERLYING_BACK_VOLATILITY, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_UNDERLYING_PUT_CALL_RATIO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_UNDERLYING_PUT_CALL_RATIO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, UNDERLYING_PUT_CALL_RATIO, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_PROFILE_DESCRIPTION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_PROFILE_DESCRIPTION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, PROFILE_DESCRIPTION, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_LOT_SIZE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_LOT_SIZE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_LOT_SIZE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_CHANGE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_CHANGE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_CHANGE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_CHANGE_PERCENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_CHANGE_PERCENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_CHANGE_PERCENT, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_LAST_CHANGE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_LAST_CHANGE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_LAST_CHANGE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_LAST_CHANGE_PERCENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_LAST_CHANGE_PERCENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_LAST_CHANGE_PERCENT, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_CHANGE_SINCE_OPEN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_CHANGE_SINCE_OPEN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_CHANGE_SINCE_OPEN, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_GAP(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_GAP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_GAP, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_GAP_PERCENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_GAP_PERCENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_GAP_PERCENT, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_MARK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_MARK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_MARK, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_MARK_CHANGE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_MARK_CHANGE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_MARK_CHANGE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_MARK_CHANGE_PERCENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_MARK_CHANGE_PERCENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_MARK_CHANGE_PERCENT, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_MID(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_MID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_MID, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_MID_CHANGE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_MID_CHANGE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_MID_CHANGE, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_MID_CHANGE_PERCENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_MID_CHANGE_PERCENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_MID_CHANGE_PERCENT, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_SPREAD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_SPREAD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_SPREAD, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_SPREAD_PERCENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_SPREAD_PERCENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_SPREAD_PERCENT, DXMarketFieldEnum *)

inline DXMarketFieldEnum *DXMarketFieldEnum_get_CALC_DAY_RANGE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_CALC_DAY_RANGE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketFieldEnum, CALC_DAY_RANGE, DXMarketFieldEnum *)

FOUNDATION_EXPORT void DXMarketFieldEnum_initWithNSString_withInt_(DXMarketFieldEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXMarketFieldEnum *new_DXMarketFieldEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketFieldEnum *create_DXMarketFieldEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXMarketFieldEnum_init(DXMarketFieldEnum *self);

FOUNDATION_EXPORT DXMarketFieldEnum *new_DXMarketFieldEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketFieldEnum *create_DXMarketFieldEnum_init(void);

FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXMarketFieldEnum *DXMarketFieldEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXMarketFieldEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarketFieldEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertExpressionMarketFieldEnum DXMarketFieldEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionMarketFieldEnum")
