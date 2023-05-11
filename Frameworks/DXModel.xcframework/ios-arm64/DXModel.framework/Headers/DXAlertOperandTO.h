
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertOperandTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertOperandTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertOperandTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertOperandTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertOperandTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertOperandTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertOperandTO || defined(INCLUDE_DXAlertOperandTO))
#define DXAlertOperandTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@protocol DXAlertTemplateVisitor;

@interface DXAlertOperandTO : PSBaseTransferObject

#pragma mark Public

- (instancetype __nonnull)init;

- (void)visitByWithDXAlertTemplateVisitor:(id<DXAlertTemplateVisitor>)visitor;

@end

J2OBJC_EMPTY_STATIC_INIT(DXAlertOperandTO)

FOUNDATION_EXPORT void DXAlertOperandTO_init(DXAlertOperandTO *self);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertOperandTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertExpressionAlertOperandTO DXAlertOperandTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertOperandTO")
