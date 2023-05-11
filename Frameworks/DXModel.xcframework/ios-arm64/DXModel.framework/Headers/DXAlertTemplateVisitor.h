
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertTemplateVisitor")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertTemplateVisitor
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertTemplateVisitor 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertTemplateVisitor 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertTemplateVisitor

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertTemplateVisitor_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertTemplateVisitor || defined(INCLUDE_DXAlertTemplateVisitor))
#define DXAlertTemplateVisitor_

@class DXAlertExpressionTO;
@class DXAlertTypeEnum;
@class DXArithmeticOperatorEnum;
@class DXBooleanOperatorEnum;
@class DXComparatorOperatorEnum;
@class DXMarketOperandTO;
@class DXValueOperandTO;
@class PSListTO;

@protocol DXAlertTemplateVisitor < JavaObject >

- (void)visitAlertTypeWithDXAlertTypeEnum:(DXAlertTypeEnum *)alertType;

- (void)visitAllAnyTypeWithDXBooleanOperatorEnum:(DXBooleanOperatorEnum *)applyAllConditions;

- (void)visitConditionWithDXAlertExpressionTO:(DXAlertExpressionTO *)expression;

- (void)visitAlertExpressionWithDXAlertExpressionTO:(DXAlertExpressionTO *)expression;

- (void)visitValueOperandWithDXValueOperandTO:(DXValueOperandTO *)valueOperand;

- (void)visitMarketOperandWithDXMarketOperandTO:(DXMarketOperandTO *)marketOperand;

- (void)visitArithmeticOperatorWithDXArithmeticOperatorEnum:(DXArithmeticOperatorEnum *)operation;

- (void)visitComparisonOperatorWithDXComparatorOperatorEnum:(DXComparatorOperatorEnum *)operator_;

- (void)visitNotificationTypesWithPSListTO:(PSListTO *)notificationTypes;

- (void)visitDescriptionWithNSString:(NSString *)description_;

- (void)visitExpirationWithLong:(jlong)expirationTimestamp;

- (void)visitStringExpressionWithNSString:(NSString *)expression;

@end

J2OBJC_EMPTY_STATIC_INIT(DXAlertTemplateVisitor)

J2OBJC_TYPE_LITERAL_HEADER(DXAlertTemplateVisitor)

#define ComDevexpertsMobileDxplatformApiAlertExpressionAlertTemplateVisitor DXAlertTemplateVisitor

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertTemplateVisitor")
