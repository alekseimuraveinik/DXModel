
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionMarketOperandTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionMarketOperandTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionMarketOperandTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionMarketOperandTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionMarketOperandTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMarketOperandTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionMarketOperandTO || defined(INCLUDE_DXMarketOperandTO))
#define DXMarketOperandTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiAlertExpressionAlertExpressionTO 1
#define INCLUDE_DXAlertExpressionTO 1
#include "DXAlertExpressionTO.h"

@class DXMarketFieldEnum;
@class DXOperandTypeEnum;
@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXAlertTemplateVisitor;
@protocol PSTransferObject;

@interface DXMarketOperandTO : DXAlertExpressionTO
@property (readonly, class, strong) DXMarketOperandTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMarketOperandTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMarketOperandTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMarketOperandTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getMultiplier;

- (DXOperandTypeEnum *)getOperandTypeEnum;

- (DXMarketFieldEnum *)getRecordField;

- (NSString *)getSymbol;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setMultiplierWithLong:(jlong)multiplier;

- (void)setOperandTypeEnumWithDXOperandTypeEnum:(DXOperandTypeEnum *)operandTypeEnum;

- (void)setRecordFieldWithDXMarketFieldEnum:(DXMarketFieldEnum *)recordField;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (NSString *)description;

- (void)visitByWithDXAlertTemplateVisitor:(id<DXAlertTemplateVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMarketOperandTO)

inline DXMarketOperandTO *DXMarketOperandTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMarketOperandTO *DXMarketOperandTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMarketOperandTO, EMPTY, DXMarketOperandTO *)

FOUNDATION_EXPORT void DXMarketOperandTO_init(DXMarketOperandTO *self);

FOUNDATION_EXPORT DXMarketOperandTO *new_DXMarketOperandTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMarketOperandTO *create_DXMarketOperandTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMarketOperandTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertExpressionMarketOperandTO DXMarketOperandTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertExpressionMarketOperandTO")
