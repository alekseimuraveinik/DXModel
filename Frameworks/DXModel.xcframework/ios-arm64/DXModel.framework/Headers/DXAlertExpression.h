
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpression")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpression
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpression 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpression 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpression

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertExpression_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpression || defined(INCLUDE_DXAlertExpression))
#define DXAlertExpression_

@protocol DXAlertTemplateVisitor;

@protocol DXAlertExpression < JavaObject >

- (void)visitByWithDXAlertTemplateVisitor:(id<DXAlertTemplateVisitor>)visitor;

@end

J2OBJC_EMPTY_STATIC_INIT(DXAlertExpression)

J2OBJC_TYPE_LITERAL_HEADER(DXAlertExpression)

#define ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpression DXAlertExpression

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpression")
