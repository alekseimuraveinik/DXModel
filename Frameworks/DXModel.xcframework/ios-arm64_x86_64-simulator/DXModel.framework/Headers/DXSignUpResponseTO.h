
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupResponseSignUpResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSignupResponseSignUpResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupResponseSignUpResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupResponseSignUpResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSignupResponseSignUpResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSignUpResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupResponseSignUpResponseTO || defined(INCLUDE_DXSignUpResponseTO))
#define DXSignUpResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXSignUpResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXSignUpResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXSignUpResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXSignUpResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXSignUpResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

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

J2OBJC_STATIC_INIT(DXSignUpResponseTO)

inline DXSignUpResponseTO *DXSignUpResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSignUpResponseTO *DXSignUpResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSignUpResponseTO, EMPTY, DXSignUpResponseTO *)

FOUNDATION_EXPORT void DXSignUpResponseTO_init(DXSignUpResponseTO *self);

FOUNDATION_EXPORT DXSignUpResponseTO *new_DXSignUpResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSignUpResponseTO *create_DXSignUpResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSignUpResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiSignupResponseSignUpResponseTO DXSignUpResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupResponseSignUpResponseTO")
