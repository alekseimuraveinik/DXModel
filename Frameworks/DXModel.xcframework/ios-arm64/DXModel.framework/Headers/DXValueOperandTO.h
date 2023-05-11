
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionValueOperandTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionValueOperandTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionValueOperandTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionValueOperandTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionValueOperandTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXValueOperandTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionValueOperandTO || defined(INCLUDE_DXValueOperandTO))
#define DXValueOperandTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpressionTO 1
#define INCLUDE_DXAlertExpressionTO 1
#include "DXAlertExpressionTO.h"

@class DXOperandTypeEnum;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXAlertTemplateVisitor;
@protocol PSTransferObject;

@interface DXValueOperandTO : DXAlertExpressionTO
@property (readonly, class, strong) DXValueOperandTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXValueOperandTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXValueOperandTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXValueOperandTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXOperandTypeEnum *)getOperandTypeEnum;

- (jlong)getValue;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setOperandTypeEnumWithDXOperandTypeEnum:(DXOperandTypeEnum *)operandTypeEnum;

- (void)setValueWithLong:(jlong)value;

- (NSString *)description;

- (void)visitByWithDXAlertTemplateVisitor:(id<DXAlertTemplateVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXValueOperandTO)

inline DXValueOperandTO *DXValueOperandTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXValueOperandTO *DXValueOperandTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXValueOperandTO, EMPTY, DXValueOperandTO *)

FOUNDATION_EXPORT void DXValueOperandTO_init(DXValueOperandTO *self);

FOUNDATION_EXPORT DXValueOperandTO *new_DXValueOperandTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXValueOperandTO *create_DXValueOperandTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXValueOperandTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertExpressionValueOperandTO DXValueOperandTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionValueOperandTO")
