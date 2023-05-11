
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertEventTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTypeEnum || defined(INCLUDE_DXAlertEventTypeEnum))
#define DXAlertEventTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXAlertEventTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXAlertEventTypeEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXAlertEventTypeEnum *ALERT_TRIGGERED NS_SWIFT_NAME(ALERT_TRIGGERED);
@property (readonly, class, strong) DXAlertEventTypeEnum *ALERT_REJECTED NS_SWIFT_NAME(ALERT_REJECTED);

+ (DXAlertEventTypeEnum *)UNDEFINED;

+ (DXAlertEventTypeEnum *)ALERT_TRIGGERED;

+ (DXAlertEventTypeEnum *)ALERT_REJECTED;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXAlertEventTypeEnum *)change;

- (DXAlertEventTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXAlertEventTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXAlertEventTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXAlertEventTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXAlertEventTypeEnum)

inline DXAlertEventTypeEnum *DXAlertEventTypeEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertEventTypeEnum *DXAlertEventTypeEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertEventTypeEnum, UNDEFINED, DXAlertEventTypeEnum *)

inline DXAlertEventTypeEnum *DXAlertEventTypeEnum_get_ALERT_TRIGGERED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertEventTypeEnum *DXAlertEventTypeEnum_ALERT_TRIGGERED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertEventTypeEnum, ALERT_TRIGGERED, DXAlertEventTypeEnum *)

inline DXAlertEventTypeEnum *DXAlertEventTypeEnum_get_ALERT_REJECTED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertEventTypeEnum *DXAlertEventTypeEnum_ALERT_REJECTED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertEventTypeEnum, ALERT_REJECTED, DXAlertEventTypeEnum *)

FOUNDATION_EXPORT void DXAlertEventTypeEnum_initWithNSString_withInt_(DXAlertEventTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXAlertEventTypeEnum *new_DXAlertEventTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertEventTypeEnum *create_DXAlertEventTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXAlertEventTypeEnum_init(DXAlertEventTypeEnum *self);

FOUNDATION_EXPORT DXAlertEventTypeEnum *new_DXAlertEventTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertEventTypeEnum *create_DXAlertEventTypeEnum_init(void);

FOUNDATION_EXPORT DXAlertEventTypeEnum *DXAlertEventTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXAlertEventTypeEnum *DXAlertEventTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXAlertEventTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertEventTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTypeEnum DXAlertEventTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsAlertAlertEventTypeEnum")
