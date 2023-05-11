
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountMetricTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountMetricTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountMetricTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountMetricTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountMetricTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountMetricTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountMetricTypeEnum || defined(INCLUDE_DXAccountMetricTypeEnum))
#define DXAccountMetricTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXAccountMetricTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXAccountMetricTypeEnum *SIGN_LESS_COLORED NS_SWIFT_NAME(SIGN_LESS_COLORED);
@property (readonly, class, strong) DXAccountMetricTypeEnum *COLORED NS_SWIFT_NAME(COLORED);
@property (readonly, class, strong) DXAccountMetricTypeEnum *VALUE NS_SWIFT_NAME(VALUE);

+ (DXAccountMetricTypeEnum *)SIGN_LESS_COLORED;

+ (DXAccountMetricTypeEnum *)COLORED;

+ (DXAccountMetricTypeEnum *)VALUE;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXAccountMetricTypeEnum *)change;

- (DXAccountMetricTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXAccountMetricTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXAccountMetricTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXAccountMetricTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXAccountMetricTypeEnum)

inline DXAccountMetricTypeEnum *DXAccountMetricTypeEnum_get_SIGN_LESS_COLORED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountMetricTypeEnum *DXAccountMetricTypeEnum_SIGN_LESS_COLORED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountMetricTypeEnum, SIGN_LESS_COLORED, DXAccountMetricTypeEnum *)

inline DXAccountMetricTypeEnum *DXAccountMetricTypeEnum_get_COLORED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountMetricTypeEnum *DXAccountMetricTypeEnum_COLORED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountMetricTypeEnum, COLORED, DXAccountMetricTypeEnum *)

inline DXAccountMetricTypeEnum *DXAccountMetricTypeEnum_get_VALUE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountMetricTypeEnum *DXAccountMetricTypeEnum_VALUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountMetricTypeEnum, VALUE, DXAccountMetricTypeEnum *)

FOUNDATION_EXPORT void DXAccountMetricTypeEnum_initWithNSString_withInt_(DXAccountMetricTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXAccountMetricTypeEnum *new_DXAccountMetricTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountMetricTypeEnum *create_DXAccountMetricTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXAccountMetricTypeEnum_init(DXAccountMetricTypeEnum *self);

FOUNDATION_EXPORT DXAccountMetricTypeEnum *new_DXAccountMetricTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountMetricTypeEnum *create_DXAccountMetricTypeEnum_init(void);

FOUNDATION_EXPORT DXAccountMetricTypeEnum *DXAccountMetricTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXAccountMetricTypeEnum *DXAccountMetricTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXAccountMetricTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountMetricTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountMetricTypeEnum DXAccountMetricTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountMetricTypeEnum")
