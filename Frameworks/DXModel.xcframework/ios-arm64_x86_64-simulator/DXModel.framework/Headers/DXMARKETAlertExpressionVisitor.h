
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertExpressionVisitor")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertExpressionVisitor
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertExpressionVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertExpressionVisitor 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertExpressionVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAlertExpressionVisitor_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertExpressionVisitor || defined(INCLUDE_DXMARKETAlertExpressionVisitor))
#define DXMARKETAlertExpressionVisitor_

#define RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertTemplateVisitor 1
#define INCLUDE_DXAlertTemplateVisitor 1
#include "DXAlertTemplateVisitor.h"

@class DXAlertExpressionTO;
@class DXAlertTypeEnum;
@class DXArithmeticOperatorEnum;
@class DXBooleanOperatorEnum;
@class DXComparatorOperatorEnum;
@class DXMarketOperandTO;
@class DXValueOperandTO;
@class PSListTO;

@interface DXMARKETAlertExpressionVisitor : NSObject < DXAlertTemplateVisitor >

#pragma mark Public

- (instancetype __nonnull)init;

- (void)clear;

- (NSString *)getExpressionString;

- (void)visitAlertExpressionWithDXAlertExpressionTO:(DXAlertExpressionTO *)alertExpressionTO;

- (void)visitAlertTypeWithDXAlertTypeEnum:(DXAlertTypeEnum *)alertTypeEnum;

- (void)visitAllAnyTypeWithDXBooleanOperatorEnum:(DXBooleanOperatorEnum *)booleanOperatorEnum;

- (void)visitArithmeticOperatorWithDXArithmeticOperatorEnum:(DXArithmeticOperatorEnum *)arithmeticOperatorEnum;

- (void)visitComparisonOperatorWithDXComparatorOperatorEnum:(DXComparatorOperatorEnum *)comparatorOperatorEnum;

- (void)visitConditionWithDXAlertExpressionTO:(DXAlertExpressionTO *)alertExpressionTO;

- (void)visitDescriptionWithNSString:(NSString *)s;

- (void)visitExpirationWithLong:(jlong)l;

- (void)visitMarketOperandWithDXMarketOperandTO:(DXMarketOperandTO *)marketOperandTO;

- (void)visitNotificationTypesWithPSListTO:(PSListTO *)listTO;

- (void)visitStringExpressionWithNSString:(NSString *)s;

- (void)visitValueOperandWithDXValueOperandTO:(DXValueOperandTO *)valueOperandTO;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAlertExpressionVisitor)

FOUNDATION_EXPORT void DXMARKETAlertExpressionVisitor_init(DXMARKETAlertExpressionVisitor *self);

FOUNDATION_EXPORT DXMARKETAlertExpressionVisitor *new_DXMARKETAlertExpressionVisitor_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETAlertExpressionVisitor *create_DXMARKETAlertExpressionVisitor_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAlertExpressionVisitor)

@compatibility_alias ComDevexpertsDxmarketClientModelAlertAlertExpressionVisitor DXMARKETAlertExpressionVisitor;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertExpressionVisitor")
