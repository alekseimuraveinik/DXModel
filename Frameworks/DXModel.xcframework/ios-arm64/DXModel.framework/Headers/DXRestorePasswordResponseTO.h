
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserRestorePasswordResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserRestorePasswordResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXRestorePasswordResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordResponseTO || defined(INCLUDE_DXRestorePasswordResponseTO))
#define DXRestorePasswordResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXRestorePasswordResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXRestorePasswordResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXRestorePasswordResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)errorTO;

- (DXRestorePasswordResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXRestorePasswordResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getErrorTO;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorTOWithPSErrorTO:(PSErrorTO *)errorTO;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXRestorePasswordResponseTO)

inline DXRestorePasswordResponseTO *DXRestorePasswordResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXRestorePasswordResponseTO *DXRestorePasswordResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXRestorePasswordResponseTO, EMPTY, DXRestorePasswordResponseTO *)

FOUNDATION_EXPORT void DXRestorePasswordResponseTO_initWithPSErrorTO_(DXRestorePasswordResponseTO *self, PSErrorTO *errorTO);

FOUNDATION_EXPORT DXRestorePasswordResponseTO *new_DXRestorePasswordResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXRestorePasswordResponseTO *create_DXRestorePasswordResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO);

FOUNDATION_EXPORT void DXRestorePasswordResponseTO_init(DXRestorePasswordResponseTO *self);

FOUNDATION_EXPORT DXRestorePasswordResponseTO *new_DXRestorePasswordResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXRestorePasswordResponseTO *create_DXRestorePasswordResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXRestorePasswordResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserRestorePasswordResponseTO DXRestorePasswordResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserRestorePasswordResponseTO")
