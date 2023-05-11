
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorContextTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorContextTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorContextTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorContextTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorContextTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderEditorContextTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorContextTO || defined(INCLUDE_DXOrderEditorContextTO))
#define DXOrderEditorContextTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXOrderEditorContextTO : PSBaseTransferObject
@property (readonly, class, strong) DXOrderEditorContextTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderEditorContextTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderEditorContextTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderEditorContextTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getModifyPositionId;

- (NSString *)getProtectPositionId;

- (NSString *)getRefOrderId;

- (NSString *)getTriggerOrderId;

- (NSUInteger)hash;

- (jboolean)isAttach;

- (jboolean)isModifyPosition;

- (jboolean)isReplace;

- (void)makeAttachRequestWithNSString:(NSString *)triggerOrderId;

- (void)makeModifyPositionRequestWithNSString:(NSString *)positionId;

- (void)makeNewOrderRequest;

- (void)makeReplaceRequestWithNSString:(NSString *)orderId;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setProtectPositionIdWithNSString:(NSString *)protectPositionId;

- (void)setRefOrderIdWithNSString:(NSString *)refOrderId;

- (void)setTriggerOrderIdWithNSString:(NSString *)triggerOrderId;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderEditorContextTO)

inline DXOrderEditorContextTO *DXOrderEditorContextTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEditorContextTO *DXOrderEditorContextTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEditorContextTO, EMPTY, DXOrderEditorContextTO *)

FOUNDATION_EXPORT void DXOrderEditorContextTO_init(DXOrderEditorContextTO *self);

FOUNDATION_EXPORT DXOrderEditorContextTO *new_DXOrderEditorContextTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderEditorContextTO *create_DXOrderEditorContextTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderEditorContextTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderEditorContextTO DXOrderEditorContextTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorContextTO")
