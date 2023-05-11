
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserExternalLinkRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserExternalLinkRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXExternalLinkRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkRequestTO || defined(INCLUDE_DXExternalLinkRequestTO))
#define DXExternalLinkRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXExternalLinkRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXExternalLinkRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXExternalLinkRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)linkName;

- (DXExternalLinkRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXExternalLinkRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getLinkName;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setLinkNameWithNSString:(NSString *)linkName;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXExternalLinkRequestTO)

inline DXExternalLinkRequestTO *DXExternalLinkRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXExternalLinkRequestTO *DXExternalLinkRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXExternalLinkRequestTO, EMPTY, DXExternalLinkRequestTO *)

FOUNDATION_EXPORT void DXExternalLinkRequestTO_initWithNSString_(DXExternalLinkRequestTO *self, NSString *linkName);

FOUNDATION_EXPORT DXExternalLinkRequestTO *new_DXExternalLinkRequestTO_initWithNSString_(NSString *linkName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXExternalLinkRequestTO *create_DXExternalLinkRequestTO_initWithNSString_(NSString *linkName);

FOUNDATION_EXPORT void DXExternalLinkRequestTO_init(DXExternalLinkRequestTO *self);

FOUNDATION_EXPORT DXExternalLinkRequestTO *new_DXExternalLinkRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXExternalLinkRequestTO *create_DXExternalLinkRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXExternalLinkRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserExternalLinkRequestTO DXExternalLinkRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserExternalLinkRequestTO")
