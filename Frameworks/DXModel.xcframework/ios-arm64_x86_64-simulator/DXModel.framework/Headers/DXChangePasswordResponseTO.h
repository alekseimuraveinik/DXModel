
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserChangePasswordResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserChangePasswordResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXChangePasswordResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordResponseTO || defined(INCLUDE_DXChangePasswordResponseTO))
#define DXChangePasswordResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXChangePasswordResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXChangePasswordResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXChangePasswordResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)errorTO;

- (DXChangePasswordResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXChangePasswordResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

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

J2OBJC_STATIC_INIT(DXChangePasswordResponseTO)

inline DXChangePasswordResponseTO *DXChangePasswordResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChangePasswordResponseTO *DXChangePasswordResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChangePasswordResponseTO, EMPTY, DXChangePasswordResponseTO *)

FOUNDATION_EXPORT void DXChangePasswordResponseTO_initWithPSErrorTO_(DXChangePasswordResponseTO *self, PSErrorTO *errorTO);

FOUNDATION_EXPORT DXChangePasswordResponseTO *new_DXChangePasswordResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXChangePasswordResponseTO *create_DXChangePasswordResponseTO_initWithPSErrorTO_(PSErrorTO *errorTO);

FOUNDATION_EXPORT void DXChangePasswordResponseTO_init(DXChangePasswordResponseTO *self);

FOUNDATION_EXPORT DXChangePasswordResponseTO *new_DXChangePasswordResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXChangePasswordResponseTO *create_DXChangePasswordResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXChangePasswordResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserChangePasswordResponseTO DXChangePasswordResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserChangePasswordResponseTO")
