
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertActionEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionEnum || defined(INCLUDE_DXAlertActionEnum))
#define DXAlertActionEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXAlertActionEnum : PSBaseEnum
@property (readonly, class, strong) DXAlertActionEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXAlertActionEnum *CREATE NS_SWIFT_NAME(CREATE);
@property (readonly, class, strong) DXAlertActionEnum *CANCEL NS_SWIFT_NAME(CANCEL);
@property (readonly, class, strong) DXAlertActionEnum *MODIFY NS_SWIFT_NAME(MODIFY);

+ (DXAlertActionEnum *)UNDEFINED;

+ (DXAlertActionEnum *)CREATE;

+ (DXAlertActionEnum *)CANCEL;

+ (DXAlertActionEnum *)MODIFY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXAlertActionEnum *)change;

- (DXAlertActionEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXAlertActionEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXAlertActionEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXAlertActionEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXAlertActionEnum)

inline DXAlertActionEnum *DXAlertActionEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertActionEnum *DXAlertActionEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertActionEnum, UNDEFINED, DXAlertActionEnum *)

inline DXAlertActionEnum *DXAlertActionEnum_get_CREATE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertActionEnum *DXAlertActionEnum_CREATE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertActionEnum, CREATE, DXAlertActionEnum *)

inline DXAlertActionEnum *DXAlertActionEnum_get_CANCEL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertActionEnum *DXAlertActionEnum_CANCEL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertActionEnum, CANCEL, DXAlertActionEnum *)

inline DXAlertActionEnum *DXAlertActionEnum_get_MODIFY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertActionEnum *DXAlertActionEnum_MODIFY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertActionEnum, MODIFY, DXAlertActionEnum *)

FOUNDATION_EXPORT void DXAlertActionEnum_initWithNSString_withInt_(DXAlertActionEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXAlertActionEnum *new_DXAlertActionEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertActionEnum *create_DXAlertActionEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXAlertActionEnum_init(DXAlertActionEnum *self);

FOUNDATION_EXPORT DXAlertActionEnum *new_DXAlertActionEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertActionEnum *create_DXAlertActionEnum_init(void);

FOUNDATION_EXPORT DXAlertActionEnum *DXAlertActionEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXAlertActionEnum *DXAlertActionEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXAlertActionEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertActionEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertActionsAlertActionEnum DXAlertActionEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionEnum")
