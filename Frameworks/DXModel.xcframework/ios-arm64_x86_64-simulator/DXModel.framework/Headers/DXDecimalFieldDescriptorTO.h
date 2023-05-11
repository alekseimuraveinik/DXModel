
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashDecimalFieldDescriptorTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashDecimalFieldDescriptorTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashDecimalFieldDescriptorTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashDecimalFieldDescriptorTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorCashDecimalFieldDescriptorTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXDecimalFieldDescriptorTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashDecimalFieldDescriptorTO || defined(INCLUDE_DXDecimalFieldDescriptorTO))
#define DXDecimalFieldDescriptorTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXParameterRuleTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXDecimalFieldDescriptorTO : PSBaseTransferObject
@property (readonly, class, strong) DXDecimalFieldDescriptorTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXDecimalFieldDescriptorTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXDecimalFieldDescriptorTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXDecimalFieldDescriptorTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXParameterRuleTO *)getBuyRule;

- (DXParameterRuleTO *)getSellRule;

- (NSUInteger)hash;

- (jboolean)isReadOnly;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setBuyRuleWithDXParameterRuleTO:(DXParameterRuleTO *)buyRule;

- (void)setReadOnlyWithBoolean:(jboolean)readOnly;

- (void)setSellRuleWithDXParameterRuleTO:(DXParameterRuleTO *)sellRule;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXDecimalFieldDescriptorTO)

inline DXDecimalFieldDescriptorTO *DXDecimalFieldDescriptorTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXDecimalFieldDescriptorTO *DXDecimalFieldDescriptorTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXDecimalFieldDescriptorTO, EMPTY, DXDecimalFieldDescriptorTO *)

FOUNDATION_EXPORT void DXDecimalFieldDescriptorTO_init(DXDecimalFieldDescriptorTO *self);

FOUNDATION_EXPORT DXDecimalFieldDescriptorTO *new_DXDecimalFieldDescriptorTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXDecimalFieldDescriptorTO *create_DXDecimalFieldDescriptorTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXDecimalFieldDescriptorTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorCashDecimalFieldDescriptorTO DXDecimalFieldDescriptorTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorCashDecimalFieldDescriptorTO")
