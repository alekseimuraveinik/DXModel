
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountChangeRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountChangeRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountChangeRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeRequestTO || defined(INCLUDE_DXAccountChangeRequestTO))
#define DXAccountChangeRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountKeyTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXAccountChangeRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXAccountChangeRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAccountChangeRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAccountChangeRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAccountChangeRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

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

J2OBJC_STATIC_INIT(DXAccountChangeRequestTO)

inline DXAccountChangeRequestTO *DXAccountChangeRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountChangeRequestTO *DXAccountChangeRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountChangeRequestTO, EMPTY, DXAccountChangeRequestTO *)

FOUNDATION_EXPORT void DXAccountChangeRequestTO_init(DXAccountChangeRequestTO *self);

FOUNDATION_EXPORT DXAccountChangeRequestTO *new_DXAccountChangeRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountChangeRequestTO *create_DXAccountChangeRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountChangeRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountChangeRequestTO DXAccountChangeRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeRequestTO")
