
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginResultTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationLoginResultTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginResultTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginResultTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationLoginResultTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXLoginResultTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginResultTO || defined(INCLUDE_DXLoginResultTO))
#define DXLoginResultTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXKeyValuesTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXLoginResultTO : PSBaseTransferObject
@property (readonly, class, strong) DXLoginResultTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXLoginResultTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)error;

- (instancetype __nonnull)initWithDXKeyValuesTO:(DXKeyValuesTO *)permissions;

- (DXLoginResultTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXLoginResultTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getError;

- (DXKeyValuesTO *)getPermissions;

- (NSUInteger)hash;

- (jboolean)isSuccessful;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorWithPSErrorTO:(PSErrorTO *)error;

- (void)setPermissionsWithDXKeyValuesTO:(DXKeyValuesTO *)permissions;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXLoginResultTO)

inline DXLoginResultTO *DXLoginResultTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXLoginResultTO *DXLoginResultTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXLoginResultTO, EMPTY, DXLoginResultTO *)

FOUNDATION_EXPORT void DXLoginResultTO_initWithDXKeyValuesTO_(DXLoginResultTO *self, DXKeyValuesTO *permissions);

FOUNDATION_EXPORT DXLoginResultTO *new_DXLoginResultTO_initWithDXKeyValuesTO_(DXKeyValuesTO *permissions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXLoginResultTO *create_DXLoginResultTO_initWithDXKeyValuesTO_(DXKeyValuesTO *permissions);

FOUNDATION_EXPORT void DXLoginResultTO_initWithPSErrorTO_(DXLoginResultTO *self, PSErrorTO *error);

FOUNDATION_EXPORT DXLoginResultTO *new_DXLoginResultTO_initWithPSErrorTO_(PSErrorTO *error) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXLoginResultTO *create_DXLoginResultTO_initWithPSErrorTO_(PSErrorTO *error);

FOUNDATION_EXPORT void DXLoginResultTO_init(DXLoginResultTO *self);

FOUNDATION_EXPORT DXLoginResultTO *new_DXLoginResultTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXLoginResultTO *create_DXLoginResultTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXLoginResultTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAuthenticationLoginResultTO DXLoginResultTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationLoginResultTO")
