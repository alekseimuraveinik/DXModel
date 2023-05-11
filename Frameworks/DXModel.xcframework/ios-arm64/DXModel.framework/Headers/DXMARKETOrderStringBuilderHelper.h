
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderStringBuilderHelper")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderStringBuilderHelper
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderStringBuilderHelper 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderStringBuilderHelper 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderStringBuilderHelper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderStringBuilderHelper_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderStringBuilderHelper || defined(INCLUDE_DXMARKETOrderStringBuilderHelper))
#define DXMARKETOrderStringBuilderHelper_

@protocol DXMARKETOrderStringBuilderHelper < JavaObject >

- (NSString *)getOrderTypeStringWithInt:(jint)stringType;

- (NSString *)getBuyCapital;

- (NSString *)getSellCapital;

- (NSString *)getLotString;

- (NSString *)getOcoPairString;

- (NSString *)getContingentOrderString;

- (NSString *)getContingentOrdersString;

- (NSString *)getParentString;

- (NSString *)getPointsString;

- (NSString *)getWithProtectionString;

- (NSString *)getAndString;

@end

@interface DXMARKETOrderStringBuilderHelper : NSObject
@property (readonly, class) jint ORDER_TYPE_STRING_MARKET NS_SWIFT_NAME(ORDER_TYPE_STRING_MARKET);
@property (readonly, class) jint ORDER_TYPE_STRING_STOP NS_SWIFT_NAME(ORDER_TYPE_STRING_STOP);
@property (readonly, class) jint ORDER_TYPE_STRING_STOP_BID NS_SWIFT_NAME(ORDER_TYPE_STRING_STOP_BID);
@property (readonly, class) jint ORDER_TYPE_STRING_STOP_ASK NS_SWIFT_NAME(ORDER_TYPE_STRING_STOP_ASK);
@property (readonly, class) jint ORDER_TYPE_STRING_LIMIT NS_SWIFT_NAME(ORDER_TYPE_STRING_LIMIT);
@property (readonly, class) jint ORDER_TYPE_STRING_TRAIL_STOP NS_SWIFT_NAME(ORDER_TYPE_STRING_TRAIL_STOP);
@property (readonly, class) jint ORDER_TYPE_STRING_STOP_LOSS NS_SWIFT_NAME(ORDER_TYPE_STRING_STOP_LOSS);
@property (readonly, class) jint ORDER_TYPE_STRING_TRAIL_STOP_LOSS NS_SWIFT_NAME(ORDER_TYPE_STRING_TRAIL_STOP_LOSS);
@property (readonly, class) jint ORDER_TYPE_STRING_TAKE_PROFIT NS_SWIFT_NAME(ORDER_TYPE_STRING_TAKE_PROFIT);
@property (readonly, class) jint ORDER_TYPE_STRING_POSITION NS_SWIFT_NAME(ORDER_TYPE_STRING_POSITION);

+ (jint)ORDER_TYPE_STRING_MARKET;

+ (jint)ORDER_TYPE_STRING_STOP;

+ (jint)ORDER_TYPE_STRING_STOP_BID;

+ (jint)ORDER_TYPE_STRING_STOP_ASK;

+ (jint)ORDER_TYPE_STRING_LIMIT;

+ (jint)ORDER_TYPE_STRING_TRAIL_STOP;

+ (jint)ORDER_TYPE_STRING_STOP_LOSS;

+ (jint)ORDER_TYPE_STRING_TRAIL_STOP_LOSS;

+ (jint)ORDER_TYPE_STRING_TAKE_PROFIT;

+ (jint)ORDER_TYPE_STRING_POSITION;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderStringBuilderHelper)

inline jint DXMARKETOrderStringBuilderHelper_get_ORDER_TYPE_STRING_MARKET(void);
#define DXMARKETOrderStringBuilderHelper_ORDER_TYPE_STRING_MARKET 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderStringBuilderHelper, ORDER_TYPE_STRING_MARKET, jint)

inline jint DXMARKETOrderStringBuilderHelper_get_ORDER_TYPE_STRING_STOP(void);
#define DXMARKETOrderStringBuilderHelper_ORDER_TYPE_STRING_STOP 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderStringBuilderHelper, ORDER_TYPE_STRING_STOP, jint)

inline jint DXMARKETOrderStringBuilderHelper_get_ORDER_TYPE_STRING_STOP_BID(void);
#define DXMARKETOrderStringBuilderHelper_ORDER_TYPE_STRING_STOP_BID 3
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderStringBuilderHelper, ORDER_TYPE_STRING_STOP_BID, jint)

inline jint DXMARKETOrderStringBuilderHelper_get_ORDER_TYPE_STRING_STOP_ASK(void);
#define DXMARKETOrderStringBuilderHelper_ORDER_TYPE_STRING_STOP_ASK 4
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderStringBuilderHelper, ORDER_TYPE_STRING_STOP_ASK, jint)

inline jint DXMARKETOrderStringBuilderHelper_get_ORDER_TYPE_STRING_LIMIT(void);
#define DXMARKETOrderStringBuilderHelper_ORDER_TYPE_STRING_LIMIT 5
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderStringBuilderHelper, ORDER_TYPE_STRING_LIMIT, jint)

inline jint DXMARKETOrderStringBuilderHelper_get_ORDER_TYPE_STRING_TRAIL_STOP(void);
#define DXMARKETOrderStringBuilderHelper_ORDER_TYPE_STRING_TRAIL_STOP 6
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderStringBuilderHelper, ORDER_TYPE_STRING_TRAIL_STOP, jint)

inline jint DXMARKETOrderStringBuilderHelper_get_ORDER_TYPE_STRING_STOP_LOSS(void);
#define DXMARKETOrderStringBuilderHelper_ORDER_TYPE_STRING_STOP_LOSS 7
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderStringBuilderHelper, ORDER_TYPE_STRING_STOP_LOSS, jint)

inline jint DXMARKETOrderStringBuilderHelper_get_ORDER_TYPE_STRING_TRAIL_STOP_LOSS(void);
#define DXMARKETOrderStringBuilderHelper_ORDER_TYPE_STRING_TRAIL_STOP_LOSS 8
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderStringBuilderHelper, ORDER_TYPE_STRING_TRAIL_STOP_LOSS, jint)

inline jint DXMARKETOrderStringBuilderHelper_get_ORDER_TYPE_STRING_TAKE_PROFIT(void);
#define DXMARKETOrderStringBuilderHelper_ORDER_TYPE_STRING_TAKE_PROFIT 9
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderStringBuilderHelper, ORDER_TYPE_STRING_TAKE_PROFIT, jint)

inline jint DXMARKETOrderStringBuilderHelper_get_ORDER_TYPE_STRING_POSITION(void);
#define DXMARKETOrderStringBuilderHelper_ORDER_TYPE_STRING_POSITION 10
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETOrderStringBuilderHelper, ORDER_TYPE_STRING_POSITION, jint)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderStringBuilderHelper)

#define ComDevexpertsDxmarketClientModelOrderOrderStringBuilderHelper DXMARKETOrderStringBuilderHelper

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderStringBuilderHelper")
