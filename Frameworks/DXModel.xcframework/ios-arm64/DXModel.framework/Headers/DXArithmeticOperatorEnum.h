
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticOperatorEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticOperatorEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticOperatorEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticOperatorEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticOperatorEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXArithmeticOperatorEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticOperatorEnum || defined(INCLUDE_DXArithmeticOperatorEnum))
#define DXArithmeticOperatorEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

#define RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpression 1
#define INCLUDE_DXAlertExpression 1
#include "DXAlertExpression.h"

@class PSBaseTransferObject;
@protocol DXAlertTemplateVisitor;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXArithmeticOperatorEnum : PSBaseEnum < DXAlertExpression >
@property (readonly, class, strong) DXArithmeticOperatorEnum *PLUS NS_SWIFT_NAME(PLUS);
@property (readonly, class, strong) DXArithmeticOperatorEnum *MINUS NS_SWIFT_NAME(MINUS);
@property (readonly, class, strong) DXArithmeticOperatorEnum *MULTIPLY NS_SWIFT_NAME(MULTIPLY);
@property (readonly, class, strong) DXArithmeticOperatorEnum *DIVIDE NS_SWIFT_NAME(DIVIDE);

+ (DXArithmeticOperatorEnum *)PLUS;

+ (DXArithmeticOperatorEnum *)MINUS;

+ (DXArithmeticOperatorEnum *)MULTIPLY;

+ (DXArithmeticOperatorEnum *)DIVIDE;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXArithmeticOperatorEnum *)change;

- (DXArithmeticOperatorEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXArithmeticOperatorEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXArithmeticOperatorEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXArithmeticOperatorEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

- (void)visitByWithDXAlertTemplateVisitor:(id<DXAlertTemplateVisitor>)visitor;

@end

J2OBJC_STATIC_INIT(DXArithmeticOperatorEnum)

inline DXArithmeticOperatorEnum *DXArithmeticOperatorEnum_get_PLUS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXArithmeticOperatorEnum *DXArithmeticOperatorEnum_PLUS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXArithmeticOperatorEnum, PLUS, DXArithmeticOperatorEnum *)

inline DXArithmeticOperatorEnum *DXArithmeticOperatorEnum_get_MINUS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXArithmeticOperatorEnum *DXArithmeticOperatorEnum_MINUS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXArithmeticOperatorEnum, MINUS, DXArithmeticOperatorEnum *)

inline DXArithmeticOperatorEnum *DXArithmeticOperatorEnum_get_MULTIPLY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXArithmeticOperatorEnum *DXArithmeticOperatorEnum_MULTIPLY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXArithmeticOperatorEnum, MULTIPLY, DXArithmeticOperatorEnum *)

inline DXArithmeticOperatorEnum *DXArithmeticOperatorEnum_get_DIVIDE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXArithmeticOperatorEnum *DXArithmeticOperatorEnum_DIVIDE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXArithmeticOperatorEnum, DIVIDE, DXArithmeticOperatorEnum *)

FOUNDATION_EXPORT void DXArithmeticOperatorEnum_initWithNSString_withInt_(DXArithmeticOperatorEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXArithmeticOperatorEnum *new_DXArithmeticOperatorEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXArithmeticOperatorEnum *create_DXArithmeticOperatorEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXArithmeticOperatorEnum_init(DXArithmeticOperatorEnum *self);

FOUNDATION_EXPORT DXArithmeticOperatorEnum *new_DXArithmeticOperatorEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXArithmeticOperatorEnum *create_DXArithmeticOperatorEnum_init(void);

FOUNDATION_EXPORT DXArithmeticOperatorEnum *DXArithmeticOperatorEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXArithmeticOperatorEnum *DXArithmeticOperatorEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXArithmeticOperatorEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXArithmeticOperatorEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticOperatorEnum DXArithmeticOperatorEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticOperatorEnum")
