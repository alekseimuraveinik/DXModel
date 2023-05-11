
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertStatusEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertStatusEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertStatusEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertStatusEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertStatusEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertStatusEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertStatusEnum || defined(INCLUDE_DXAlertStatusEnum))
#define DXAlertStatusEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXAlertStatusEnum : PSBaseEnum
@property (readonly, class, strong) DXAlertStatusEnum *ACTIVE NS_SWIFT_NAME(ACTIVE);
@property (readonly, class, strong) DXAlertStatusEnum *TRIGGERED NS_SWIFT_NAME(TRIGGERED);
@property (readonly, class, strong) DXAlertStatusEnum *CANCELLED NS_SWIFT_NAME(CANCELLED);
@property (readonly, class, strong) DXAlertStatusEnum *EXPIRED NS_SWIFT_NAME(EXPIRED);
@property (readonly, class, strong) DXAlertStatusEnum *ERROR NS_SWIFT_NAME(ERROR);
@property (readonly, class, strong) DXAlertStatusEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);

+ (DXAlertStatusEnum *)ACTIVE;

+ (DXAlertStatusEnum *)TRIGGERED;

+ (DXAlertStatusEnum *)CANCELLED;

+ (DXAlertStatusEnum *)EXPIRED;

+ (DXAlertStatusEnum *)ERROR;

+ (DXAlertStatusEnum *)UNDEFINED;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXAlertStatusEnum *)change;

- (DXAlertStatusEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXAlertStatusEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXAlertStatusEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXAlertStatusEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXAlertStatusEnum)

inline DXAlertStatusEnum *DXAlertStatusEnum_get_ACTIVE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertStatusEnum *DXAlertStatusEnum_ACTIVE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertStatusEnum, ACTIVE, DXAlertStatusEnum *)

inline DXAlertStatusEnum *DXAlertStatusEnum_get_TRIGGERED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertStatusEnum *DXAlertStatusEnum_TRIGGERED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertStatusEnum, TRIGGERED, DXAlertStatusEnum *)

inline DXAlertStatusEnum *DXAlertStatusEnum_get_CANCELLED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertStatusEnum *DXAlertStatusEnum_CANCELLED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertStatusEnum, CANCELLED, DXAlertStatusEnum *)

inline DXAlertStatusEnum *DXAlertStatusEnum_get_EXPIRED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertStatusEnum *DXAlertStatusEnum_EXPIRED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertStatusEnum, EXPIRED, DXAlertStatusEnum *)

inline DXAlertStatusEnum *DXAlertStatusEnum_get_ERROR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertStatusEnum *DXAlertStatusEnum_ERROR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertStatusEnum, ERROR, DXAlertStatusEnum *)

inline DXAlertStatusEnum *DXAlertStatusEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertStatusEnum *DXAlertStatusEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertStatusEnum, UNDEFINED, DXAlertStatusEnum *)

FOUNDATION_EXPORT void DXAlertStatusEnum_initWithNSString_withInt_(DXAlertStatusEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXAlertStatusEnum *new_DXAlertStatusEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertStatusEnum *create_DXAlertStatusEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXAlertStatusEnum_init(DXAlertStatusEnum *self);

FOUNDATION_EXPORT DXAlertStatusEnum *new_DXAlertStatusEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertStatusEnum *create_DXAlertStatusEnum_init(void);

FOUNDATION_EXPORT DXAlertStatusEnum *DXAlertStatusEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXAlertStatusEnum *DXAlertStatusEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXAlertStatusEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertStatusEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertAlertStatusEnum DXAlertStatusEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertStatusEnum")
