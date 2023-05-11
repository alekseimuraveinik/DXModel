
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCloseAllPositionRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionRequestTO || defined(INCLUDE_DXCloseAllPositionRequestTO))
#define DXCloseAllPositionRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountKeyTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXCloseAllPositionRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXCloseAllPositionRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCloseAllPositionRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (DXCloseAllPositionRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCloseAllPositionRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountKeyTO *)getAccountKey;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCloseAllPositionRequestTO)

inline DXCloseAllPositionRequestTO *DXCloseAllPositionRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCloseAllPositionRequestTO *DXCloseAllPositionRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCloseAllPositionRequestTO, EMPTY, DXCloseAllPositionRequestTO *)

FOUNDATION_EXPORT void DXCloseAllPositionRequestTO_initWithDXAccountKeyTO_(DXCloseAllPositionRequestTO *self, DXAccountKeyTO *accountKey);

FOUNDATION_EXPORT DXCloseAllPositionRequestTO *new_DXCloseAllPositionRequestTO_initWithDXAccountKeyTO_(DXAccountKeyTO *accountKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCloseAllPositionRequestTO *create_DXCloseAllPositionRequestTO_initWithDXAccountKeyTO_(DXAccountKeyTO *accountKey);

FOUNDATION_EXPORT void DXCloseAllPositionRequestTO_init(DXCloseAllPositionRequestTO *self);

FOUNDATION_EXPORT DXCloseAllPositionRequestTO *new_DXCloseAllPositionRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCloseAllPositionRequestTO *create_DXCloseAllPositionRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCloseAllPositionRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionRequestTO DXCloseAllPositionRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiPositionCloseallCloseAllPositionRequestTO")
