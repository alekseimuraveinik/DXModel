
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentPropertyEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentPropertyEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentPropertyEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentPropertyEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentPropertyEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentPropertyEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentPropertyEnum || defined(INCLUDE_DXInstrumentPropertyEnum))
#define DXInstrumentPropertyEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXInstrumentPropertyEnum : PSBaseEnum
@property (readonly, class, strong) DXInstrumentPropertyEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXInstrumentPropertyEnum *BETA NS_SWIFT_NAME(BETA);
@property (readonly, class, strong) DXInstrumentPropertyEnum *FREE_FLOAT NS_SWIFT_NAME(FREE_FLOAT);
@property (readonly, class, strong) DXInstrumentPropertyEnum *WEIGHT NS_SWIFT_NAME(WEIGHT);
@property (readonly, class, strong) DXInstrumentPropertyEnum *PE_RATIO NS_SWIFT_NAME(PE_RATIO);
@property (readonly, class, strong) DXInstrumentPropertyEnum *MARKET_VALUE_DIVIDED_BY_BOOK_VALUE NS_SWIFT_NAME(MARKET_VALUE_DIVIDED_BY_BOOK_VALUE);
@property (readonly, class, strong) DXInstrumentPropertyEnum *DISTANCE_FROM_LOCAL_MINIMUM NS_SWIFT_NAME(DISTANCE_FROM_LOCAL_MINIMUM);
@property (readonly, class, strong) DXInstrumentPropertyEnum *DISTANCE_FROM_LOCAL_MAXIMUM NS_SWIFT_NAME(DISTANCE_FROM_LOCAL_MAXIMUM);
@property (readonly, class, strong) DXInstrumentPropertyEnum *ABSOLUTE_DEVIATION NS_SWIFT_NAME(ABSOLUTE_DEVIATION);
@property (readonly, class, strong) DXInstrumentPropertyEnum *MARKET_VALUE NS_SWIFT_NAME(MARKET_VALUE);
@property (readonly, class, strong) DXInstrumentPropertyEnum *TOTAL_EQUITY NS_SWIFT_NAME(TOTAL_EQUITY);
@property (readonly, class, strong) DXInstrumentPropertyEnum *STOCK_CAPITAL NS_SWIFT_NAME(STOCK_CAPITAL);
@property (readonly, class, strong) DXInstrumentPropertyEnum *NET_INCOME NS_SWIFT_NAME(NET_INCOME);

+ (DXInstrumentPropertyEnum *)UNDEFINED;

+ (DXInstrumentPropertyEnum *)BETA;

+ (DXInstrumentPropertyEnum *)FREE_FLOAT;

+ (DXInstrumentPropertyEnum *)WEIGHT;

+ (DXInstrumentPropertyEnum *)PE_RATIO;

+ (DXInstrumentPropertyEnum *)MARKET_VALUE_DIVIDED_BY_BOOK_VALUE;

+ (DXInstrumentPropertyEnum *)DISTANCE_FROM_LOCAL_MINIMUM;

+ (DXInstrumentPropertyEnum *)DISTANCE_FROM_LOCAL_MAXIMUM;

+ (DXInstrumentPropertyEnum *)ABSOLUTE_DEVIATION;

+ (DXInstrumentPropertyEnum *)MARKET_VALUE;

+ (DXInstrumentPropertyEnum *)TOTAL_EQUITY;

+ (DXInstrumentPropertyEnum *)STOCK_CAPITAL;

+ (DXInstrumentPropertyEnum *)NET_INCOME;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXInstrumentPropertyEnum *)change;

- (DXInstrumentPropertyEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXInstrumentPropertyEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXInstrumentPropertyEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXInstrumentPropertyEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXInstrumentPropertyEnum)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, UNDEFINED, DXInstrumentPropertyEnum *)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_BETA(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_BETA;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, BETA, DXInstrumentPropertyEnum *)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_FREE_FLOAT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_FREE_FLOAT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, FREE_FLOAT, DXInstrumentPropertyEnum *)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_WEIGHT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_WEIGHT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, WEIGHT, DXInstrumentPropertyEnum *)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_PE_RATIO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_PE_RATIO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, PE_RATIO, DXInstrumentPropertyEnum *)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_MARKET_VALUE_DIVIDED_BY_BOOK_VALUE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_MARKET_VALUE_DIVIDED_BY_BOOK_VALUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, MARKET_VALUE_DIVIDED_BY_BOOK_VALUE, DXInstrumentPropertyEnum *)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_DISTANCE_FROM_LOCAL_MINIMUM(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_DISTANCE_FROM_LOCAL_MINIMUM;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, DISTANCE_FROM_LOCAL_MINIMUM, DXInstrumentPropertyEnum *)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_DISTANCE_FROM_LOCAL_MAXIMUM(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_DISTANCE_FROM_LOCAL_MAXIMUM;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, DISTANCE_FROM_LOCAL_MAXIMUM, DXInstrumentPropertyEnum *)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_ABSOLUTE_DEVIATION(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_ABSOLUTE_DEVIATION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, ABSOLUTE_DEVIATION, DXInstrumentPropertyEnum *)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_MARKET_VALUE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_MARKET_VALUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, MARKET_VALUE, DXInstrumentPropertyEnum *)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_TOTAL_EQUITY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_TOTAL_EQUITY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, TOTAL_EQUITY, DXInstrumentPropertyEnum *)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_STOCK_CAPITAL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_STOCK_CAPITAL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, STOCK_CAPITAL, DXInstrumentPropertyEnum *)

inline DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_get_NET_INCOME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_NET_INCOME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentPropertyEnum, NET_INCOME, DXInstrumentPropertyEnum *)

FOUNDATION_EXPORT void DXInstrumentPropertyEnum_initWithNSString_withInt_(DXInstrumentPropertyEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXInstrumentPropertyEnum *new_DXInstrumentPropertyEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentPropertyEnum *create_DXInstrumentPropertyEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXInstrumentPropertyEnum_init(DXInstrumentPropertyEnum *self);

FOUNDATION_EXPORT DXInstrumentPropertyEnum *new_DXInstrumentPropertyEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentPropertyEnum *create_DXInstrumentPropertyEnum_init(void);

FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXInstrumentPropertyEnum *DXInstrumentPropertyEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXInstrumentPropertyEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentPropertyEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentPropertyEnum DXInstrumentPropertyEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentFundamentalsInstrumentPropertyEnum")
