
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupRequestSignUpRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSignupRequestSignUpRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupRequestSignUpRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupRequestSignUpRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSignupRequestSignUpRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSignUpRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupRequestSignUpRequestTO || defined(INCLUDE_DXSignUpRequestTO))
#define DXSignUpRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXSignUpTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXSignUpRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXSignUpRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXSignUpRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXSignUpRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXSignUpRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXSignUpTO *)getSignUpTO;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setSignUpTOWithDXSignUpTO:(DXSignUpTO *)signUpTO;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXSignUpRequestTO)

inline DXSignUpRequestTO *DXSignUpRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSignUpRequestTO *DXSignUpRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSignUpRequestTO, EMPTY, DXSignUpRequestTO *)

FOUNDATION_EXPORT void DXSignUpRequestTO_init(DXSignUpRequestTO *self);

FOUNDATION_EXPORT DXSignUpRequestTO *new_DXSignUpRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSignUpRequestTO *create_DXSignUpRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSignUpRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiSignupRequestSignUpRequestTO DXSignUpRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupRequestSignUpRequestTO")
