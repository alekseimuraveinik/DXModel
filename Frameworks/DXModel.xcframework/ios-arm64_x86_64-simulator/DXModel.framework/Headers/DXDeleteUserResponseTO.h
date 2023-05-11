
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiUserDeleteUserResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiUserDeleteUserResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXDeleteUserResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserResponseTO || defined(INCLUDE_DXDeleteUserResponseTO))
#define DXDeleteUserResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXDeleteUserResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXDeleteUserResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXDeleteUserResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithPSErrorTO:(PSErrorTO *)error;

- (instancetype __nonnull)initWithNSString:(NSString *)redirectUrl;

- (DXDeleteUserResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXDeleteUserResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getError;

- (NSString *)getRedirectUrl;

- (NSUInteger)hash;

- (jboolean)isSuccess;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorWithPSErrorTO:(PSErrorTO *)error;

- (void)setRedirectUrlWithNSString:(NSString *)redirectUrl;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXDeleteUserResponseTO)

inline DXDeleteUserResponseTO *DXDeleteUserResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXDeleteUserResponseTO *DXDeleteUserResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXDeleteUserResponseTO, EMPTY, DXDeleteUserResponseTO *)

FOUNDATION_EXPORT void DXDeleteUserResponseTO_init(DXDeleteUserResponseTO *self);

FOUNDATION_EXPORT DXDeleteUserResponseTO *new_DXDeleteUserResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXDeleteUserResponseTO *create_DXDeleteUserResponseTO_init(void);

FOUNDATION_EXPORT void DXDeleteUserResponseTO_initWithPSErrorTO_(DXDeleteUserResponseTO *self, PSErrorTO *error);

FOUNDATION_EXPORT DXDeleteUserResponseTO *new_DXDeleteUserResponseTO_initWithPSErrorTO_(PSErrorTO *error) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXDeleteUserResponseTO *create_DXDeleteUserResponseTO_initWithPSErrorTO_(PSErrorTO *error);

FOUNDATION_EXPORT void DXDeleteUserResponseTO_initWithNSString_(DXDeleteUserResponseTO *self, NSString *redirectUrl);

FOUNDATION_EXPORT DXDeleteUserResponseTO *new_DXDeleteUserResponseTO_initWithNSString_(NSString *redirectUrl) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXDeleteUserResponseTO *create_DXDeleteUserResponseTO_initWithNSString_(NSString *redirectUrl);

J2OBJC_TYPE_LITERAL_HEADER(DXDeleteUserResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiUserDeleteUserResponseTO DXDeleteUserResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiUserDeleteUserResponseTO")
