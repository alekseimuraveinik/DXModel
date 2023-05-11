
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpressionTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpressionTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpressionTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpressionTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpressionTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertExpressionTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpressionTO || defined(INCLUDE_DXAlertExpressionTO))
#define DXAlertExpressionTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

#define RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpression 1
#define INCLUDE_DXAlertExpression 1
#include "DXAlertExpression.h"

@interface DXAlertExpressionTO : PSBaseTransferObject < DXAlertExpression >

#pragma mark Public

- (DXAlertExpressionTO *)change;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (instancetype __nonnull)init;

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_EMPTY_STATIC_INIT(DXAlertExpressionTO)

FOUNDATION_EXPORT void DXAlertExpressionTO_init(DXAlertExpressionTO *self);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertExpressionTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpressionTO DXAlertExpressionTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpressionTO")
