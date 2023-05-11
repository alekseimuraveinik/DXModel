
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionComparisonExpressionTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionComparisonExpressionTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionComparisonExpressionTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionComparisonExpressionTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionComparisonExpressionTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXComparisonExpressionTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionComparisonExpressionTO || defined(INCLUDE_DXComparisonExpressionTO))
#define DXComparisonExpressionTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpressionTO 1
#define INCLUDE_DXAlertExpressionTO 1
#include "DXAlertExpressionTO.h"

@class DXArithmeticExpressionTO;
@class DXComparatorOperatorEnum;
@class DXMarketOperandTO;
@class DXValueOperandTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXAlertTemplateVisitor;
@protocol PSTransferObject;

@interface DXComparisonExpressionTO : DXAlertExpressionTO
@property (readonly, class, strong) DXComparisonExpressionTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXComparisonExpressionTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXComparisonExpressionTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXComparisonExpressionTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAlertExpressionTO *)getLeftPart;

- (DXComparatorOperatorEnum *)getOperator;

- (DXAlertExpressionTO *)getRightPart;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setLeftPartWithDXArithmeticExpressionTO:(DXArithmeticExpressionTO *)leftPart;

- (void)setLeftPartWithDXMarketOperandTO:(DXMarketOperandTO *)leftPart;

- (void)setLeftPartWithDXValueOperandTO:(DXValueOperandTO *)leftPart;

- (void)setOperatorWithDXComparatorOperatorEnum:(DXComparatorOperatorEnum *)operator_;

- (void)setRightPartWithDXArithmeticExpressionTO:(DXArithmeticExpressionTO *)rightPart;

- (void)setRightPartWithDXMarketOperandTO:(DXMarketOperandTO *)rightPart;

- (void)setRightPartWithDXValueOperandTO:(DXValueOperandTO *)rightPart;

- (NSString *)description;

- (void)visitByWithDXAlertTemplateVisitor:(id<DXAlertTemplateVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXComparisonExpressionTO)

inline DXComparisonExpressionTO *DXComparisonExpressionTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXComparisonExpressionTO *DXComparisonExpressionTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXComparisonExpressionTO, EMPTY, DXComparisonExpressionTO *)

FOUNDATION_EXPORT void DXComparisonExpressionTO_init(DXComparisonExpressionTO *self);

FOUNDATION_EXPORT DXComparisonExpressionTO *new_DXComparisonExpressionTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXComparisonExpressionTO *create_DXComparisonExpressionTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXComparisonExpressionTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertExpressionComparisonExpressionTO DXComparisonExpressionTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionComparisonExpressionTO")
