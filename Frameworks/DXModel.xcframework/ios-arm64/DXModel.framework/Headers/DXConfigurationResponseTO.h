
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXConfigurationResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationResponseTO || defined(INCLUDE_DXConfigurationResponseTO))
#define DXConfigurationResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXKeyValuesTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXConfigurationResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXConfigurationResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXConfigurationResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithDXKeyValuesTO:(DXKeyValuesTO *)data;

- (DXConfigurationResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXConfigurationResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXKeyValuesTO *)getData;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDataWithDXKeyValuesTO:(DXKeyValuesTO *)data;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXConfigurationResponseTO)

inline DXConfigurationResponseTO *DXConfigurationResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXConfigurationResponseTO *DXConfigurationResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXConfigurationResponseTO, EMPTY, DXConfigurationResponseTO *)

FOUNDATION_EXPORT void DXConfigurationResponseTO_initWithDXKeyValuesTO_(DXConfigurationResponseTO *self, DXKeyValuesTO *data);

FOUNDATION_EXPORT DXConfigurationResponseTO *new_DXConfigurationResponseTO_initWithDXKeyValuesTO_(DXKeyValuesTO *data) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXConfigurationResponseTO *create_DXConfigurationResponseTO_initWithDXKeyValuesTO_(DXKeyValuesTO *data);

FOUNDATION_EXPORT void DXConfigurationResponseTO_init(DXConfigurationResponseTO *self);

FOUNDATION_EXPORT DXConfigurationResponseTO *new_DXConfigurationResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXConfigurationResponseTO *create_DXConfigurationResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXConfigurationResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationResponseTO DXConfigurationResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiIntegrationConfigConfigurationResponseTO")
