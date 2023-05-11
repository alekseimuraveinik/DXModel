
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTypeEnum || defined(INCLUDE_DXAlertTypeEnum))
#define DXAlertTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXAlertTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXAlertTypeEnum *MARKET NS_SWIFT_NAME(MARKET);
@property (readonly, class, strong) DXAlertTypeEnum *PORTFOLIO NS_SWIFT_NAME(PORTFOLIO);
@property (readonly, class, strong) DXAlertTypeEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);

+ (DXAlertTypeEnum *)MARKET;

+ (DXAlertTypeEnum *)PORTFOLIO;

+ (DXAlertTypeEnum *)UNDEFINED;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXAlertTypeEnum *)change;

- (DXAlertTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXAlertTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXAlertTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXAlertTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXAlertTypeEnum)

inline DXAlertTypeEnum *DXAlertTypeEnum_get_MARKET(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertTypeEnum *DXAlertTypeEnum_MARKET;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertTypeEnum, MARKET, DXAlertTypeEnum *)

inline DXAlertTypeEnum *DXAlertTypeEnum_get_PORTFOLIO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertTypeEnum *DXAlertTypeEnum_PORTFOLIO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertTypeEnum, PORTFOLIO, DXAlertTypeEnum *)

inline DXAlertTypeEnum *DXAlertTypeEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertTypeEnum *DXAlertTypeEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertTypeEnum, UNDEFINED, DXAlertTypeEnum *)

FOUNDATION_EXPORT void DXAlertTypeEnum_initWithNSString_withInt_(DXAlertTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXAlertTypeEnum *new_DXAlertTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertTypeEnum *create_DXAlertTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXAlertTypeEnum_init(DXAlertTypeEnum *self);

FOUNDATION_EXPORT DXAlertTypeEnum *new_DXAlertTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertTypeEnum *create_DXAlertTypeEnum_init(void);

FOUNDATION_EXPORT DXAlertTypeEnum *DXAlertTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXAlertTypeEnum *DXAlertTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXAlertTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertAlertTypeEnum DXAlertTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTypeEnum")
