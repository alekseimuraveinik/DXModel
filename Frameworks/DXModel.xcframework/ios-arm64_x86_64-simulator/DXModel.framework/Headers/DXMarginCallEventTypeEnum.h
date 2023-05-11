
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarginCallEventTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTypeEnum || defined(INCLUDE_DXMarginCallEventTypeEnum))
#define DXMarginCallEventTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXMarginCallEventTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXMarginCallEventTypeEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXMarginCallEventTypeEnum *RISK_LEVEL_1 NS_SWIFT_NAME(RISK_LEVEL_1);
@property (readonly, class, strong) DXMarginCallEventTypeEnum *RISK_LEVEL_2 NS_SWIFT_NAME(RISK_LEVEL_2);
@property (readonly, class, strong) DXMarginCallEventTypeEnum *MARGIN_CALL NS_SWIFT_NAME(MARGIN_CALL);
@property (readonly, class, strong) DXMarginCallEventTypeEnum *LIQUIDATION_IN_PROGRESS NS_SWIFT_NAME(LIQUIDATION_IN_PROGRESS);
@property (readonly, class, strong) DXMarginCallEventTypeEnum *LIQUIDATION_COMPLETE NS_SWIFT_NAME(LIQUIDATION_COMPLETE);

+ (DXMarginCallEventTypeEnum *)UNDEFINED;

+ (DXMarginCallEventTypeEnum *)RISK_LEVEL_1;

+ (DXMarginCallEventTypeEnum *)RISK_LEVEL_2;

+ (DXMarginCallEventTypeEnum *)MARGIN_CALL;

+ (DXMarginCallEventTypeEnum *)LIQUIDATION_IN_PROGRESS;

+ (DXMarginCallEventTypeEnum *)LIQUIDATION_COMPLETE;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXMarginCallEventTypeEnum *)change;

- (DXMarginCallEventTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXMarginCallEventTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXMarginCallEventTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXMarginCallEventTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXMarginCallEventTypeEnum)

inline DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarginCallEventTypeEnum, UNDEFINED, DXMarginCallEventTypeEnum *)

inline DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_get_RISK_LEVEL_1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_RISK_LEVEL_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarginCallEventTypeEnum, RISK_LEVEL_1, DXMarginCallEventTypeEnum *)

inline DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_get_RISK_LEVEL_2(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_RISK_LEVEL_2;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarginCallEventTypeEnum, RISK_LEVEL_2, DXMarginCallEventTypeEnum *)

inline DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_get_MARGIN_CALL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_MARGIN_CALL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarginCallEventTypeEnum, MARGIN_CALL, DXMarginCallEventTypeEnum *)

inline DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_get_LIQUIDATION_IN_PROGRESS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_LIQUIDATION_IN_PROGRESS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarginCallEventTypeEnum, LIQUIDATION_IN_PROGRESS, DXMarginCallEventTypeEnum *)

inline DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_get_LIQUIDATION_COMPLETE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_LIQUIDATION_COMPLETE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarginCallEventTypeEnum, LIQUIDATION_COMPLETE, DXMarginCallEventTypeEnum *)

FOUNDATION_EXPORT void DXMarginCallEventTypeEnum_initWithNSString_withInt_(DXMarginCallEventTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXMarginCallEventTypeEnum *new_DXMarginCallEventTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarginCallEventTypeEnum *create_DXMarginCallEventTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXMarginCallEventTypeEnum_init(DXMarginCallEventTypeEnum *self);

FOUNDATION_EXPORT DXMarginCallEventTypeEnum *new_DXMarginCallEventTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarginCallEventTypeEnum *create_DXMarginCallEventTypeEnum_init(void);

FOUNDATION_EXPORT DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXMarginCallEventTypeEnum *DXMarginCallEventTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXMarginCallEventTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarginCallEventTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTypeEnum DXMarginCallEventTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsMargincallMarginCallEventTypeEnum")
