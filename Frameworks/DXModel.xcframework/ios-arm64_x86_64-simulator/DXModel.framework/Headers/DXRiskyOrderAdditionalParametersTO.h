
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorRiskyOrderAdditionalParametersTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorRiskyOrderAdditionalParametersTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorRiskyOrderAdditionalParametersTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorRiskyOrderAdditionalParametersTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorRiskyOrderAdditionalParametersTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXRiskyOrderAdditionalParametersTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorRiskyOrderAdditionalParametersTO || defined(INCLUDE_DXRiskyOrderAdditionalParametersTO))
#define DXRiskyOrderAdditionalParametersTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXRiskyOrderAdditionalParametersTO : PSBaseTransferObject
@property (readonly, class, strong) DXRiskyOrderAdditionalParametersTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXRiskyOrderAdditionalParametersTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXRiskyOrderAdditionalParametersTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXRiskyOrderAdditionalParametersTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getConfirmationReply;

- (NSString *)getConfirmationText;

- (NSString *)getConfirmationWasRequested;

- (NSString *)getTradeCost;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setConfirmationReplyWithNSString:(NSString *)confirmationReply;

- (void)setConfirmationTextWithNSString:(NSString *)confirmationText;

- (void)setConfirmationWasRequestedWithNSString:(NSString *)confirmationWasRequested;

- (void)setTradeCostWithNSString:(NSString *)tradeCost;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXRiskyOrderAdditionalParametersTO)

inline DXRiskyOrderAdditionalParametersTO *DXRiskyOrderAdditionalParametersTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXRiskyOrderAdditionalParametersTO *DXRiskyOrderAdditionalParametersTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXRiskyOrderAdditionalParametersTO, EMPTY, DXRiskyOrderAdditionalParametersTO *)

FOUNDATION_EXPORT void DXRiskyOrderAdditionalParametersTO_init(DXRiskyOrderAdditionalParametersTO *self);

FOUNDATION_EXPORT DXRiskyOrderAdditionalParametersTO *new_DXRiskyOrderAdditionalParametersTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXRiskyOrderAdditionalParametersTO *create_DXRiskyOrderAdditionalParametersTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXRiskyOrderAdditionalParametersTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorRiskyOrderAdditionalParametersTO DXRiskyOrderAdditionalParametersTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorRiskyOrderAdditionalParametersTO")
