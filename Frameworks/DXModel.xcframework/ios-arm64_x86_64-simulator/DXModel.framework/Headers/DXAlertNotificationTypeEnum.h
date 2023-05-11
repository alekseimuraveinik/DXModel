
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertNotificationTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertNotificationTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertNotificationTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertNotificationTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertNotificationTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertNotificationTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertNotificationTypeEnum || defined(INCLUDE_DXAlertNotificationTypeEnum))
#define DXAlertNotificationTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXAlertNotificationTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXAlertNotificationTypeEnum *PLATFORM NS_SWIFT_NAME(PLATFORM);
@property (readonly, class, strong) DXAlertNotificationTypeEnum *PUSH NS_SWIFT_NAME(PUSH);
@property (readonly, class, strong) DXAlertNotificationTypeEnum *SMS NS_SWIFT_NAME(SMS);
@property (readonly, class, strong) DXAlertNotificationTypeEnum *EMAIL NS_SWIFT_NAME(EMAIL);

+ (DXAlertNotificationTypeEnum *)PLATFORM;

+ (DXAlertNotificationTypeEnum *)PUSH;

+ (DXAlertNotificationTypeEnum *)SMS;

+ (DXAlertNotificationTypeEnum *)EMAIL;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXAlertNotificationTypeEnum *)change;

- (DXAlertNotificationTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXAlertNotificationTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXAlertNotificationTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXAlertNotificationTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXAlertNotificationTypeEnum)

inline DXAlertNotificationTypeEnum *DXAlertNotificationTypeEnum_get_PLATFORM(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertNotificationTypeEnum *DXAlertNotificationTypeEnum_PLATFORM;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertNotificationTypeEnum, PLATFORM, DXAlertNotificationTypeEnum *)

inline DXAlertNotificationTypeEnum *DXAlertNotificationTypeEnum_get_PUSH(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertNotificationTypeEnum *DXAlertNotificationTypeEnum_PUSH;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertNotificationTypeEnum, PUSH, DXAlertNotificationTypeEnum *)

inline DXAlertNotificationTypeEnum *DXAlertNotificationTypeEnum_get_SMS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertNotificationTypeEnum *DXAlertNotificationTypeEnum_SMS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertNotificationTypeEnum, SMS, DXAlertNotificationTypeEnum *)

inline DXAlertNotificationTypeEnum *DXAlertNotificationTypeEnum_get_EMAIL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertNotificationTypeEnum *DXAlertNotificationTypeEnum_EMAIL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertNotificationTypeEnum, EMAIL, DXAlertNotificationTypeEnum *)

FOUNDATION_EXPORT void DXAlertNotificationTypeEnum_initWithNSString_withInt_(DXAlertNotificationTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXAlertNotificationTypeEnum *new_DXAlertNotificationTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertNotificationTypeEnum *create_DXAlertNotificationTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXAlertNotificationTypeEnum_init(DXAlertNotificationTypeEnum *self);

FOUNDATION_EXPORT DXAlertNotificationTypeEnum *new_DXAlertNotificationTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertNotificationTypeEnum *create_DXAlertNotificationTypeEnum_init(void);

FOUNDATION_EXPORT DXAlertNotificationTypeEnum *DXAlertNotificationTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXAlertNotificationTypeEnum *DXAlertNotificationTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXAlertNotificationTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertNotificationTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertAlertNotificationTypeEnum DXAlertNotificationTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertNotificationTypeEnum")
