
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticExpressionTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticExpressionTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticExpressionTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticExpressionTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticExpressionTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXArithmeticExpressionTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticExpressionTO || defined(INCLUDE_DXArithmeticExpressionTO))
#define DXArithmeticExpressionTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpressionTO 1
#define INCLUDE_DXAlertExpressionTO 1
#include "DXAlertExpressionTO.h"

@class DXArithmeticOperatorEnum;
@class DXMarketOperandTO;
@class DXValueOperandTO;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXAlertTemplateVisitor;
@protocol PSTransferObject;

@interface DXArithmeticExpressionTO : DXAlertExpressionTO
@property (readonly, class, strong) DXArithmeticExpressionTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXArithmeticExpressionTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXArithmeticExpressionTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXArithmeticExpressionTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAlertExpressionTO *)getLeftPart;

- (DXArithmeticOperatorEnum *)getOperator;

- (DXAlertExpressionTO *)getRightPart;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setLeftPartWithDXArithmeticExpressionTO:(DXArithmeticExpressionTO *)leftPart;

- (void)setLeftPartWithDXMarketOperandTO:(DXMarketOperandTO *)leftPart;

- (void)setLeftPartWithDXValueOperandTO:(DXValueOperandTO *)leftPart;

- (void)setOperatorWithDXArithmeticOperatorEnum:(DXArithmeticOperatorEnum *)operator_;

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

J2OBJC_STATIC_INIT(DXArithmeticExpressionTO)

inline DXArithmeticExpressionTO *DXArithmeticExpressionTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXArithmeticExpressionTO *DXArithmeticExpressionTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXArithmeticExpressionTO, EMPTY, DXArithmeticExpressionTO *)

FOUNDATION_EXPORT void DXArithmeticExpressionTO_init(DXArithmeticExpressionTO *self);

FOUNDATION_EXPORT DXArithmeticExpressionTO *new_DXArithmeticExpressionTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXArithmeticExpressionTO *create_DXArithmeticExpressionTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXArithmeticExpressionTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticExpressionTO DXArithmeticExpressionTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionArithmeticExpressionTO")
