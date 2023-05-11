
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionComparatorOperatorEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionComparatorOperatorEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionComparatorOperatorEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionComparatorOperatorEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionComparatorOperatorEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXComparatorOperatorEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionComparatorOperatorEnum || defined(INCLUDE_DXComparatorOperatorEnum))
#define DXComparatorOperatorEnum_

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

@interface DXComparatorOperatorEnum : PSBaseEnum < DXAlertExpression >
@property (readonly, class, strong) DXComparatorOperatorEnum *LESS NS_SWIFT_NAME(LESS);
@property (readonly, class, strong) DXComparatorOperatorEnum *MORE NS_SWIFT_NAME(MORE);
@property (readonly, class, strong) DXComparatorOperatorEnum *EQ NS_SWIFT_NAME(EQ);
@property (readonly, class, strong) DXComparatorOperatorEnum *NOT_EQ NS_SWIFT_NAME(NOT_EQ);
@property (readonly, class, strong) DXComparatorOperatorEnum *LESS_EQ NS_SWIFT_NAME(LESS_EQ);
@property (readonly, class, strong) DXComparatorOperatorEnum *MORE_EQ NS_SWIFT_NAME(MORE_EQ);

+ (DXComparatorOperatorEnum *)LESS;

+ (DXComparatorOperatorEnum *)MORE;

+ (DXComparatorOperatorEnum *)EQ;

+ (DXComparatorOperatorEnum *)NOT_EQ;

+ (DXComparatorOperatorEnum *)LESS_EQ;

+ (DXComparatorOperatorEnum *)MORE_EQ;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXComparatorOperatorEnum *)change;

- (DXComparatorOperatorEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXComparatorOperatorEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXComparatorOperatorEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXComparatorOperatorEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

- (void)visitByWithDXAlertTemplateVisitor:(id<DXAlertTemplateVisitor>)visitor;

@end

J2OBJC_STATIC_INIT(DXComparatorOperatorEnum)

inline DXComparatorOperatorEnum *DXComparatorOperatorEnum_get_LESS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXComparatorOperatorEnum *DXComparatorOperatorEnum_LESS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXComparatorOperatorEnum, LESS, DXComparatorOperatorEnum *)

inline DXComparatorOperatorEnum *DXComparatorOperatorEnum_get_MORE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXComparatorOperatorEnum *DXComparatorOperatorEnum_MORE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXComparatorOperatorEnum, MORE, DXComparatorOperatorEnum *)

inline DXComparatorOperatorEnum *DXComparatorOperatorEnum_get_EQ(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXComparatorOperatorEnum *DXComparatorOperatorEnum_EQ;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXComparatorOperatorEnum, EQ, DXComparatorOperatorEnum *)

inline DXComparatorOperatorEnum *DXComparatorOperatorEnum_get_NOT_EQ(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXComparatorOperatorEnum *DXComparatorOperatorEnum_NOT_EQ;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXComparatorOperatorEnum, NOT_EQ, DXComparatorOperatorEnum *)

inline DXComparatorOperatorEnum *DXComparatorOperatorEnum_get_LESS_EQ(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXComparatorOperatorEnum *DXComparatorOperatorEnum_LESS_EQ;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXComparatorOperatorEnum, LESS_EQ, DXComparatorOperatorEnum *)

inline DXComparatorOperatorEnum *DXComparatorOperatorEnum_get_MORE_EQ(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXComparatorOperatorEnum *DXComparatorOperatorEnum_MORE_EQ;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXComparatorOperatorEnum, MORE_EQ, DXComparatorOperatorEnum *)

FOUNDATION_EXPORT void DXComparatorOperatorEnum_initWithNSString_withInt_(DXComparatorOperatorEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXComparatorOperatorEnum *new_DXComparatorOperatorEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXComparatorOperatorEnum *create_DXComparatorOperatorEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXComparatorOperatorEnum_init(DXComparatorOperatorEnum *self);

FOUNDATION_EXPORT DXComparatorOperatorEnum *new_DXComparatorOperatorEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXComparatorOperatorEnum *create_DXComparatorOperatorEnum_init(void);

FOUNDATION_EXPORT DXComparatorOperatorEnum *DXComparatorOperatorEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXComparatorOperatorEnum *DXComparatorOperatorEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXComparatorOperatorEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXComparatorOperatorEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertExpressionComparatorOperatorEnum DXComparatorOperatorEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionComparatorOperatorEnum")
