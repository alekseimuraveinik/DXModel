
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXConfigurationRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationRequestTO || defined(INCLUDE_DXConfigurationRequestTO))
#define DXConfigurationRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSStringListTO;
@protocol PSTransferObject;

@interface DXConfigurationRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXConfigurationRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXConfigurationRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXConfigurationRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXConfigurationRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSStringListTO *)getParams;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setParamsWithPSStringListTO:(PSStringListTO *)params;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXConfigurationRequestTO)

inline DXConfigurationRequestTO *DXConfigurationRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXConfigurationRequestTO *DXConfigurationRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXConfigurationRequestTO, EMPTY, DXConfigurationRequestTO *)

FOUNDATION_EXPORT void DXConfigurationRequestTO_init(DXConfigurationRequestTO *self);

FOUNDATION_EXPORT DXConfigurationRequestTO *new_DXConfigurationRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXConfigurationRequestTO *create_DXConfigurationRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXConfigurationRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationRequestTO DXConfigurationRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationRequestTO")
