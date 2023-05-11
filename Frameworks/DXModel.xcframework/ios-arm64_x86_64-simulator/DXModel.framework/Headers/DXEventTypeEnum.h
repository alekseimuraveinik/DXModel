
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXEventTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventTypeEnum || defined(INCLUDE_DXEventTypeEnum))
#define DXEventTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXEventTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXEventTypeEnum *CANCELLED_ORDER_EVENT NS_SWIFT_NAME(CANCELLED_ORDER_EVENT);
@property (readonly, class, strong) DXEventTypeEnum *CANCELLED_CLOSE_BY_ORDER_EVENT NS_SWIFT_NAME(CANCELLED_CLOSE_BY_ORDER_EVENT);
@property (readonly, class, strong) DXEventTypeEnum *FILLED_ORDER_EVENT NS_SWIFT_NAME(FILLED_ORDER_EVENT);
@property (readonly, class, strong) DXEventTypeEnum *FILLED_CLOSE_BY_ORDER_EVENT NS_SWIFT_NAME(FILLED_CLOSE_BY_ORDER_EVENT);
@property (readonly, class, strong) DXEventTypeEnum *PLACED_ORDER_EVENT NS_SWIFT_NAME(PLACED_ORDER_EVENT);
@property (readonly, class, strong) DXEventTypeEnum *PLACED_CLOSE_BY_ORDER_EVENT NS_SWIFT_NAME(PLACED_CLOSE_BY_ORDER_EVENT);
@property (readonly, class, strong) DXEventTypeEnum *REJECTED_ORDER_EVENT NS_SWIFT_NAME(REJECTED_ORDER_EVENT);
@property (readonly, class, strong) DXEventTypeEnum *REJECTED_CLOSE_BY_ORDER_EVENT NS_SWIFT_NAME(REJECTED_CLOSE_BY_ORDER_EVENT);
@property (readonly, class, strong) DXEventTypeEnum *MARGIN_CALL_EVENT NS_SWIFT_NAME(MARGIN_CALL_EVENT);
@property (readonly, class, strong) DXEventTypeEnum *ALERT_EVENT NS_SWIFT_NAME(ALERT_EVENT);

+ (DXEventTypeEnum *)CANCELLED_ORDER_EVENT;

+ (DXEventTypeEnum *)CANCELLED_CLOSE_BY_ORDER_EVENT;

+ (DXEventTypeEnum *)FILLED_ORDER_EVENT;

+ (DXEventTypeEnum *)FILLED_CLOSE_BY_ORDER_EVENT;

+ (DXEventTypeEnum *)PLACED_ORDER_EVENT;

+ (DXEventTypeEnum *)PLACED_CLOSE_BY_ORDER_EVENT;

+ (DXEventTypeEnum *)REJECTED_ORDER_EVENT;

+ (DXEventTypeEnum *)REJECTED_CLOSE_BY_ORDER_EVENT;

+ (DXEventTypeEnum *)MARGIN_CALL_EVENT;

+ (DXEventTypeEnum *)ALERT_EVENT;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXEventTypeEnum *)change;

- (DXEventTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXEventTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXEventTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXEventTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXEventTypeEnum)

inline DXEventTypeEnum *DXEventTypeEnum_get_CANCELLED_ORDER_EVENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventTypeEnum *DXEventTypeEnum_CANCELLED_ORDER_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventTypeEnum, CANCELLED_ORDER_EVENT, DXEventTypeEnum *)

inline DXEventTypeEnum *DXEventTypeEnum_get_CANCELLED_CLOSE_BY_ORDER_EVENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventTypeEnum *DXEventTypeEnum_CANCELLED_CLOSE_BY_ORDER_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventTypeEnum, CANCELLED_CLOSE_BY_ORDER_EVENT, DXEventTypeEnum *)

inline DXEventTypeEnum *DXEventTypeEnum_get_FILLED_ORDER_EVENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventTypeEnum *DXEventTypeEnum_FILLED_ORDER_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventTypeEnum, FILLED_ORDER_EVENT, DXEventTypeEnum *)

inline DXEventTypeEnum *DXEventTypeEnum_get_FILLED_CLOSE_BY_ORDER_EVENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventTypeEnum *DXEventTypeEnum_FILLED_CLOSE_BY_ORDER_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventTypeEnum, FILLED_CLOSE_BY_ORDER_EVENT, DXEventTypeEnum *)

inline DXEventTypeEnum *DXEventTypeEnum_get_PLACED_ORDER_EVENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventTypeEnum *DXEventTypeEnum_PLACED_ORDER_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventTypeEnum, PLACED_ORDER_EVENT, DXEventTypeEnum *)

inline DXEventTypeEnum *DXEventTypeEnum_get_PLACED_CLOSE_BY_ORDER_EVENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventTypeEnum *DXEventTypeEnum_PLACED_CLOSE_BY_ORDER_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventTypeEnum, PLACED_CLOSE_BY_ORDER_EVENT, DXEventTypeEnum *)

inline DXEventTypeEnum *DXEventTypeEnum_get_REJECTED_ORDER_EVENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventTypeEnum *DXEventTypeEnum_REJECTED_ORDER_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventTypeEnum, REJECTED_ORDER_EVENT, DXEventTypeEnum *)

inline DXEventTypeEnum *DXEventTypeEnum_get_REJECTED_CLOSE_BY_ORDER_EVENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventTypeEnum *DXEventTypeEnum_REJECTED_CLOSE_BY_ORDER_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventTypeEnum, REJECTED_CLOSE_BY_ORDER_EVENT, DXEventTypeEnum *)

inline DXEventTypeEnum *DXEventTypeEnum_get_MARGIN_CALL_EVENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventTypeEnum *DXEventTypeEnum_MARGIN_CALL_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventTypeEnum, MARGIN_CALL_EVENT, DXEventTypeEnum *)

inline DXEventTypeEnum *DXEventTypeEnum_get_ALERT_EVENT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventTypeEnum *DXEventTypeEnum_ALERT_EVENT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventTypeEnum, ALERT_EVENT, DXEventTypeEnum *)

FOUNDATION_EXPORT void DXEventTypeEnum_initWithNSString_withInt_(DXEventTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXEventTypeEnum *new_DXEventTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEventTypeEnum *create_DXEventTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXEventTypeEnum_init(DXEventTypeEnum *self);

FOUNDATION_EXPORT DXEventTypeEnum *new_DXEventTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEventTypeEnum *create_DXEventTypeEnum_init(void);

FOUNDATION_EXPORT DXEventTypeEnum *DXEventTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXEventTypeEnum *DXEventTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXEventTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXEventTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiEventsEventTypeEnum DXEventTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventTypeEnum")
