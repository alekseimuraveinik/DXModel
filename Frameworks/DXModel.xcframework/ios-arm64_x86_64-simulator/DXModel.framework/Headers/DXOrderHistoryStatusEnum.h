
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryStatusEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryStatusEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryStatusEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryStatusEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryStatusEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderHistoryStatusEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryStatusEnum || defined(INCLUDE_DXOrderHistoryStatusEnum))
#define DXOrderHistoryStatusEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXOrderHistoryStatusEnum : PSBaseEnum
@property (readonly, class, strong) DXOrderHistoryStatusEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *ORDER_PLACED NS_SWIFT_NAME(ORDER_PLACED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *ORDER_TRIGGERED NS_SWIFT_NAME(ORDER_TRIGGERED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *ORDER_WORKING NS_SWIFT_NAME(ORDER_WORKING);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *ORDER_PENDING NS_SWIFT_NAME(ORDER_PENDING);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *ORDER_MODIFIED NS_SWIFT_NAME(ORDER_MODIFIED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *ORDER_MODIFICATION_REJECTED NS_SWIFT_NAME(ORDER_MODIFICATION_REJECTED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *ORDER_REJECTED NS_SWIFT_NAME(ORDER_REJECTED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *ORDER_CANCELLED NS_SWIFT_NAME(ORDER_CANCELLED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *ORDER_EXPIRED NS_SWIFT_NAME(ORDER_EXPIRED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *ORDER_CANCELLATION_REJECTED NS_SWIFT_NAME(ORDER_CANCELLATION_REJECTED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *DIRECT_EXCHANGE_ORDER_FILLED NS_SWIFT_NAME(DIRECT_EXCHANGE_ORDER_FILLED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *ORDER_PARTIALLY_FILLED NS_SWIFT_NAME(ORDER_PARTIALLY_FILLED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *TAKE_PROFIT_MODIFIED NS_SWIFT_NAME(TAKE_PROFIT_MODIFIED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *STOP_LOSS_MODIFIED NS_SWIFT_NAME(STOP_LOSS_MODIFIED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *TAKE_PROFIT_ATTACHED NS_SWIFT_NAME(TAKE_PROFIT_ATTACHED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *STOP_LOSS_ATTACHED NS_SWIFT_NAME(STOP_LOSS_ATTACHED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *STOP_LOSS_REMOVED NS_SWIFT_NAME(STOP_LOSS_REMOVED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *STOP_LOSS_REMOVAL_REJECTED NS_SWIFT_NAME(STOP_LOSS_REMOVAL_REJECTED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *TAKE_PROFIT_REMOVED NS_SWIFT_NAME(TAKE_PROFIT_REMOVED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *TAKE_PROFIT_REMOVAL_REJECTED NS_SWIFT_NAME(TAKE_PROFIT_REMOVAL_REJECTED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *TAKE_PROFIT_TRIGGERED NS_SWIFT_NAME(TAKE_PROFIT_TRIGGERED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *STOP_LOSS_TRIGGERED NS_SWIFT_NAME(STOP_LOSS_TRIGGERED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *STOP_LOSS_PENDING NS_SWIFT_NAME(STOP_LOSS_PENDING);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *TAKE_PROFIT_PENDING NS_SWIFT_NAME(TAKE_PROFIT_PENDING);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *STOP_LOSS_REJECTED NS_SWIFT_NAME(STOP_LOSS_REJECTED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *TAKE_PROFIT_REJECTED NS_SWIFT_NAME(TAKE_PROFIT_REJECTED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *POSITION_OPENED NS_SWIFT_NAME(POSITION_OPENED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *POSITION_PARTIALLY_CLOSED NS_SWIFT_NAME(POSITION_PARTIALLY_CLOSED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *POSITION_CLOSED NS_SWIFT_NAME(POSITION_CLOSED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *POSITION_CLOSING_PENDING NS_SWIFT_NAME(POSITION_CLOSING_PENDING);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *POSITION_CLOSING_REJECTED NS_SWIFT_NAME(POSITION_CLOSING_REJECTED);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *POSITION_CLOSED_BY_TAKE_PROFIT NS_SWIFT_NAME(POSITION_CLOSED_BY_TAKE_PROFIT);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *POSITION_CLOSED_BY_STOP_LOSS NS_SWIFT_NAME(POSITION_CLOSED_BY_STOP_LOSS);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *POSITION_CLOSED_VIA_CLOSE_BY NS_SWIFT_NAME(POSITION_CLOSED_VIA_CLOSE_BY);
@property (readonly, class, strong) DXOrderHistoryStatusEnum *POSITION_PARTIALLY_CLOSED_VIA_CLOSE_BY NS_SWIFT_NAME(POSITION_PARTIALLY_CLOSED_VIA_CLOSE_BY);

+ (DXOrderHistoryStatusEnum *)UNDEFINED;

+ (DXOrderHistoryStatusEnum *)ORDER_PLACED;

+ (DXOrderHistoryStatusEnum *)ORDER_TRIGGERED;

+ (DXOrderHistoryStatusEnum *)ORDER_WORKING;

+ (DXOrderHistoryStatusEnum *)ORDER_PENDING;

+ (DXOrderHistoryStatusEnum *)ORDER_MODIFIED;

+ (DXOrderHistoryStatusEnum *)ORDER_MODIFICATION_REJECTED;

+ (DXOrderHistoryStatusEnum *)ORDER_REJECTED;

+ (DXOrderHistoryStatusEnum *)ORDER_CANCELLED;

+ (DXOrderHistoryStatusEnum *)ORDER_EXPIRED;

+ (DXOrderHistoryStatusEnum *)ORDER_CANCELLATION_REJECTED;

+ (DXOrderHistoryStatusEnum *)DIRECT_EXCHANGE_ORDER_FILLED;

+ (DXOrderHistoryStatusEnum *)ORDER_PARTIALLY_FILLED;

+ (DXOrderHistoryStatusEnum *)TAKE_PROFIT_MODIFIED;

+ (DXOrderHistoryStatusEnum *)STOP_LOSS_MODIFIED;

+ (DXOrderHistoryStatusEnum *)TAKE_PROFIT_ATTACHED;

+ (DXOrderHistoryStatusEnum *)STOP_LOSS_ATTACHED;

+ (DXOrderHistoryStatusEnum *)STOP_LOSS_REMOVED;

+ (DXOrderHistoryStatusEnum *)STOP_LOSS_REMOVAL_REJECTED;

+ (DXOrderHistoryStatusEnum *)TAKE_PROFIT_REMOVED;

+ (DXOrderHistoryStatusEnum *)TAKE_PROFIT_REMOVAL_REJECTED;

+ (DXOrderHistoryStatusEnum *)TAKE_PROFIT_TRIGGERED;

+ (DXOrderHistoryStatusEnum *)STOP_LOSS_TRIGGERED;

+ (DXOrderHistoryStatusEnum *)STOP_LOSS_PENDING;

+ (DXOrderHistoryStatusEnum *)TAKE_PROFIT_PENDING;

+ (DXOrderHistoryStatusEnum *)STOP_LOSS_REJECTED;

+ (DXOrderHistoryStatusEnum *)TAKE_PROFIT_REJECTED;

+ (DXOrderHistoryStatusEnum *)POSITION_OPENED;

+ (DXOrderHistoryStatusEnum *)POSITION_PARTIALLY_CLOSED;

+ (DXOrderHistoryStatusEnum *)POSITION_CLOSED;

+ (DXOrderHistoryStatusEnum *)POSITION_CLOSING_PENDING;

+ (DXOrderHistoryStatusEnum *)POSITION_CLOSING_REJECTED;

+ (DXOrderHistoryStatusEnum *)POSITION_CLOSED_BY_TAKE_PROFIT;

+ (DXOrderHistoryStatusEnum *)POSITION_CLOSED_BY_STOP_LOSS;

+ (DXOrderHistoryStatusEnum *)POSITION_CLOSED_VIA_CLOSE_BY;

+ (DXOrderHistoryStatusEnum *)POSITION_PARTIALLY_CLOSED_VIA_CLOSE_BY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXOrderHistoryStatusEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderHistoryStatusEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXOrderHistoryStatusEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXOrderHistoryStatusEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXOrderHistoryStatusEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXOrderHistoryStatusEnum)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, UNDEFINED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_ORDER_PLACED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_ORDER_PLACED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, ORDER_PLACED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_ORDER_TRIGGERED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_ORDER_TRIGGERED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, ORDER_TRIGGERED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_ORDER_WORKING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_ORDER_WORKING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, ORDER_WORKING, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_ORDER_PENDING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_ORDER_PENDING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, ORDER_PENDING, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_ORDER_MODIFIED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_ORDER_MODIFIED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, ORDER_MODIFIED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_ORDER_MODIFICATION_REJECTED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_ORDER_MODIFICATION_REJECTED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, ORDER_MODIFICATION_REJECTED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_ORDER_REJECTED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_ORDER_REJECTED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, ORDER_REJECTED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_ORDER_CANCELLED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_ORDER_CANCELLED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, ORDER_CANCELLED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_ORDER_EXPIRED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_ORDER_EXPIRED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, ORDER_EXPIRED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_ORDER_CANCELLATION_REJECTED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_ORDER_CANCELLATION_REJECTED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, ORDER_CANCELLATION_REJECTED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_DIRECT_EXCHANGE_ORDER_FILLED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_DIRECT_EXCHANGE_ORDER_FILLED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, DIRECT_EXCHANGE_ORDER_FILLED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_ORDER_PARTIALLY_FILLED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_ORDER_PARTIALLY_FILLED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, ORDER_PARTIALLY_FILLED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_TAKE_PROFIT_MODIFIED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_TAKE_PROFIT_MODIFIED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, TAKE_PROFIT_MODIFIED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_STOP_LOSS_MODIFIED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_STOP_LOSS_MODIFIED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, STOP_LOSS_MODIFIED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_TAKE_PROFIT_ATTACHED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_TAKE_PROFIT_ATTACHED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, TAKE_PROFIT_ATTACHED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_STOP_LOSS_ATTACHED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_STOP_LOSS_ATTACHED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, STOP_LOSS_ATTACHED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_STOP_LOSS_REMOVED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_STOP_LOSS_REMOVED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, STOP_LOSS_REMOVED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_STOP_LOSS_REMOVAL_REJECTED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_STOP_LOSS_REMOVAL_REJECTED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, STOP_LOSS_REMOVAL_REJECTED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_TAKE_PROFIT_REMOVED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_TAKE_PROFIT_REMOVED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, TAKE_PROFIT_REMOVED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_TAKE_PROFIT_REMOVAL_REJECTED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_TAKE_PROFIT_REMOVAL_REJECTED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, TAKE_PROFIT_REMOVAL_REJECTED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_TAKE_PROFIT_TRIGGERED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_TAKE_PROFIT_TRIGGERED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, TAKE_PROFIT_TRIGGERED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_STOP_LOSS_TRIGGERED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_STOP_LOSS_TRIGGERED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, STOP_LOSS_TRIGGERED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_STOP_LOSS_PENDING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_STOP_LOSS_PENDING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, STOP_LOSS_PENDING, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_TAKE_PROFIT_PENDING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_TAKE_PROFIT_PENDING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, TAKE_PROFIT_PENDING, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_STOP_LOSS_REJECTED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_STOP_LOSS_REJECTED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, STOP_LOSS_REJECTED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_TAKE_PROFIT_REJECTED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_TAKE_PROFIT_REJECTED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, TAKE_PROFIT_REJECTED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_POSITION_OPENED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_POSITION_OPENED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, POSITION_OPENED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_POSITION_PARTIALLY_CLOSED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_POSITION_PARTIALLY_CLOSED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, POSITION_PARTIALLY_CLOSED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_POSITION_CLOSED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_POSITION_CLOSED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, POSITION_CLOSED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_POSITION_CLOSING_PENDING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_POSITION_CLOSING_PENDING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, POSITION_CLOSING_PENDING, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_POSITION_CLOSING_REJECTED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_POSITION_CLOSING_REJECTED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, POSITION_CLOSING_REJECTED, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_POSITION_CLOSED_BY_TAKE_PROFIT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_POSITION_CLOSED_BY_TAKE_PROFIT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, POSITION_CLOSED_BY_TAKE_PROFIT, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_POSITION_CLOSED_BY_STOP_LOSS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_POSITION_CLOSED_BY_STOP_LOSS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, POSITION_CLOSED_BY_STOP_LOSS, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_POSITION_CLOSED_VIA_CLOSE_BY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_POSITION_CLOSED_VIA_CLOSE_BY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, POSITION_CLOSED_VIA_CLOSE_BY, DXOrderHistoryStatusEnum *)

inline DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_get_POSITION_PARTIALLY_CLOSED_VIA_CLOSE_BY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_POSITION_PARTIALLY_CLOSED_VIA_CLOSE_BY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderHistoryStatusEnum, POSITION_PARTIALLY_CLOSED_VIA_CLOSE_BY, DXOrderHistoryStatusEnum *)

FOUNDATION_EXPORT void DXOrderHistoryStatusEnum_initWithNSString_withInt_(DXOrderHistoryStatusEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXOrderHistoryStatusEnum *new_DXOrderHistoryStatusEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderHistoryStatusEnum *create_DXOrderHistoryStatusEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXOrderHistoryStatusEnum_init(DXOrderHistoryStatusEnum *self);

FOUNDATION_EXPORT DXOrderHistoryStatusEnum *new_DXOrderHistoryStatusEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderHistoryStatusEnum *create_DXOrderHistoryStatusEnum_init(void);

FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXOrderHistoryStatusEnum *DXOrderHistoryStatusEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXOrderHistoryStatusEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderHistoryStatusEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryStatusEnum DXOrderHistoryStatusEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderHistoryOrderHistoryStatusEnum")
