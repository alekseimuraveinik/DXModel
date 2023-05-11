
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXUpdateUserSettingsRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsRequestTO || defined(INCLUDE_DXUpdateUserSettingsRequestTO))
#define DXUpdateUserSettingsRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXUpdateUserSettingsRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXUpdateUserSettingsRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXUpdateUserSettingsRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXUpdateUserSettingsRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXUpdateUserSettingsRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getSettings;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setSettingsWithPSListTO:(PSListTO *)settings;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXUpdateUserSettingsRequestTO)

inline DXUpdateUserSettingsRequestTO *DXUpdateUserSettingsRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXUpdateUserSettingsRequestTO *DXUpdateUserSettingsRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXUpdateUserSettingsRequestTO, EMPTY, DXUpdateUserSettingsRequestTO *)

FOUNDATION_EXPORT void DXUpdateUserSettingsRequestTO_init(DXUpdateUserSettingsRequestTO *self);

FOUNDATION_EXPORT DXUpdateUserSettingsRequestTO *new_DXUpdateUserSettingsRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXUpdateUserSettingsRequestTO *create_DXUpdateUserSettingsRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXUpdateUserSettingsRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsRequestTO DXUpdateUserSettingsRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUpdateUserSettingsRequestTO")
