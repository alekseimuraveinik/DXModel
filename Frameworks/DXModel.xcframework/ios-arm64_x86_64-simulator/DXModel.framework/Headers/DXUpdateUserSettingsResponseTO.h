
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXUpdateUserSettingsResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsResponseTO || defined(INCLUDE_DXUpdateUserSettingsResponseTO))
#define DXUpdateUserSettingsResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXUpdateUserSettingsResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXUpdateUserSettingsResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXUpdateUserSettingsResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)error;

- (DXUpdateUserSettingsResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXUpdateUserSettingsResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getError;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorWithPSErrorTO:(PSErrorTO *)error;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXUpdateUserSettingsResponseTO)

inline DXUpdateUserSettingsResponseTO *DXUpdateUserSettingsResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXUpdateUserSettingsResponseTO *DXUpdateUserSettingsResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXUpdateUserSettingsResponseTO, EMPTY, DXUpdateUserSettingsResponseTO *)

FOUNDATION_EXPORT void DXUpdateUserSettingsResponseTO_initWithPSErrorTO_(DXUpdateUserSettingsResponseTO *self, PSErrorTO *error);

FOUNDATION_EXPORT DXUpdateUserSettingsResponseTO *new_DXUpdateUserSettingsResponseTO_initWithPSErrorTO_(PSErrorTO *error) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXUpdateUserSettingsResponseTO *create_DXUpdateUserSettingsResponseTO_initWithPSErrorTO_(PSErrorTO *error);

FOUNDATION_EXPORT void DXUpdateUserSettingsResponseTO_init(DXUpdateUserSettingsResponseTO *self);

FOUNDATION_EXPORT DXUpdateUserSettingsResponseTO *new_DXUpdateUserSettingsResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXUpdateUserSettingsResponseTO *create_DXUpdateUserSettingsResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXUpdateUserSettingsResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsResponseTO DXUpdateUserSettingsResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsResponseTO")
