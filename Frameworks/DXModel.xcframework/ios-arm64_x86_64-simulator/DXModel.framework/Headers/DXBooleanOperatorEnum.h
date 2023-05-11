
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionBooleanOperatorEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionBooleanOperatorEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionBooleanOperatorEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionBooleanOperatorEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionBooleanOperatorEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXBooleanOperatorEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionBooleanOperatorEnum || defined(INCLUDE_DXBooleanOperatorEnum))
#define DXBooleanOperatorEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXBooleanOperatorEnum : PSBaseEnum
@property (readonly, class, strong) DXBooleanOperatorEnum *OR NS_SWIFT_NAME(OR);
@property (readonly, class, strong) DXBooleanOperatorEnum *AND NS_SWIFT_NAME(AND);

+ (DXBooleanOperatorEnum *)OR;

+ (DXBooleanOperatorEnum *)AND;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXBooleanOperatorEnum *)change;

- (DXBooleanOperatorEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXBooleanOperatorEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXBooleanOperatorEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXBooleanOperatorEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXBooleanOperatorEnum)

inline DXBooleanOperatorEnum *DXBooleanOperatorEnum_get_OR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXBooleanOperatorEnum *DXBooleanOperatorEnum_OR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXBooleanOperatorEnum, OR, DXBooleanOperatorEnum *)

inline DXBooleanOperatorEnum *DXBooleanOperatorEnum_get_AND(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXBooleanOperatorEnum *DXBooleanOperatorEnum_AND;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXBooleanOperatorEnum, AND, DXBooleanOperatorEnum *)

FOUNDATION_EXPORT void DXBooleanOperatorEnum_initWithNSString_withInt_(DXBooleanOperatorEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXBooleanOperatorEnum *new_DXBooleanOperatorEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXBooleanOperatorEnum *create_DXBooleanOperatorEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXBooleanOperatorEnum_init(DXBooleanOperatorEnum *self);

FOUNDATION_EXPORT DXBooleanOperatorEnum *new_DXBooleanOperatorEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXBooleanOperatorEnum *create_DXBooleanOperatorEnum_init(void);

FOUNDATION_EXPORT DXBooleanOperatorEnum *DXBooleanOperatorEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXBooleanOperatorEnum *DXBooleanOperatorEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXBooleanOperatorEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXBooleanOperatorEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertExpressionBooleanOperatorEnum DXBooleanOperatorEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionBooleanOperatorEnum")
